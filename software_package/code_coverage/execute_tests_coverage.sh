echo "==================== GENERATING CODE COVERAGE INFORMATION ===================="
echo "Cleaning past code coverage info..."
find . -type f -not \( -name 'unity.c' -or -name 'unity.h' -or -name 'unity_internals.h' -or -name 'execute_tests_coverage.sh' -or -name 'clean_coverage_info.sh' -or -name 'README.md' \) -delete
rm -R -- */ # Removing sub-directories - Potentially dangerous! Dont replace * with a symlink to another link, it could remove the contents of the linked directory!

echo "Specified location of files to be tested: $1"
echo "Specified location of test files: $2"

# Copying cpp and header files of target module to be tested ino coverage-results
find ../$1 -name '*.cpp' -exec cp -prv '{}' './' ';'
find ../$1 '*.h' -exec cp -prv '{}' './' ';'

# Copying test files of target module into coverage-results
find ../$2 -name '*.cpp' -exec cp -prv '{}' './' ';'

#Executing tests and obtaining code coverage information 
g++ *.cpp unity.c -o tests --coverage -std=c++11
./tests
gcovr -r . -e unity.c --html -o coverage.html --html-details
echo "==================== FINISHED GENERATING CODE COVERAGE INFORMATION ===================="
