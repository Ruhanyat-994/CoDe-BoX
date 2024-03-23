#!/bin/bash

# Function to process each directory
process_directory() {
    local directory="$1"

    # Move to the directory
    cd "$directory" || exit

    # Print the current directory
    echo "Current directory: $directory"

    # Check if there are .cpp files in the directory
    if compgen -G "*.cpp" > /dev/null; then
        # Add and commit only .cpp files
        git add *.cpp
        git commit -m "Automated commit for programming in $directory"
        # Push changes to the remote repository
        git push origin dev
    else
        echo "No .cpp files found in $directory"
    fi

    # Move back to the original directory
    cd - || exit
}

# Get the list of all directories (excluding .git)
directories=$(find . -type d -not -path "./.git*")

# Iterate through the list and process each directory
for dir in $directories; do
    process_directory "$dir"
done
