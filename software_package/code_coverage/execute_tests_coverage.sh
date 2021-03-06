echo "==================== GENERATING CODE COVERAGE INFORMATION ===================="

echo "Cleaning past code coverage info..."
./clean_coverage_info.sh

while getopts "t:f:" opt; do
    case $opt in
        t) test_files_directories+=("$OPTARG");;
        f) files_to_test_directories+=("$OPTARG");;
        #...
    esac
done
shift $((OPTIND -1))

# Echoing and copying test files into this directory
echo "Test Files Directories:"
for val in "${test_files_directories[@]}"; do
    echo " - $val"

    # Copying test files of target module into code_coverage
    find ../$val -name '*.cpp' -exec cp -prv '{}' './' ';'
done

# Echoing and copying files to test into this directory
echo "Files to test directories:"
for val in "${files_to_test_directories[@]}"; do
    echo " - $val"

    # Copying cpp and header files of target module to be tested into code_coverage
    find ../$val -name '*.cpp' -exec cp -prv '{}' './' ';'
    find ../$val '*.h' -exec cp -prv '{}' './' ';'

done

#Executing tests and obtaining code coverage information 
g++ *.cpp unity.c -o tests --coverage -std=c++11
./tests
gcovr -r . -e unity.c --html -o coverage.html --html-details
gcovr -r . -e unity.c

echo "==================== FINISHED GENERATING CODE COVERAGE INFORMATION ===================="

