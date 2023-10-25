#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c -Wall -Werror -Wextra -pedantic -std=gnu89

# Create a static library named liball.a from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o

# Print a message indicating the library creation
echo "Static library liball.a created successfully."

