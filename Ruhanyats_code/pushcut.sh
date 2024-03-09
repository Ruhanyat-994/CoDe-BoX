#!/bin/bash

# Function to process each directory
process_directory() {
    local directory="$1"

    # Move to the directory
    cd "$directory" || exit

    # Print the current directory
    echo "Current directory: $directory"

    # Add and commit only .sh and .cpp files
    git add *.sh *.cpp
    git commit -m "Automated commit for programming in $directory"

    # Move back to the original directory
    cd - || exit
}

# Get the list of all directories (excluding .git)
directories=$(find . -type d -not -path "./.git*")

# Iterate through the list and process each directory
for dir in $directories; do
    process_directory "$dir"
done

# Push changes to the remote repository
git push -u origin dev
