#!/bin/bash

# Declare methods
notify_console() {
  printf "\n$1:\n"
}

# Clean files
touch test
rm test

# Lint
notify_console "Running Linter"
cpplint --filter=-legal *.{h,cpp}

# Compile
notify_console "Compiling Code"
g++ *.cpp -o test

# Execute
notify_console "Running Test"
./test

# Clean files
rm test
