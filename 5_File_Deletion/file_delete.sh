#!/bin/bash

# Ask the user to enter the name of the file they want to delete
read -p "Enter file name: " str1

# Check if the file exists and is a regular file
if [ -f "$str1" ]; then
    rm "$str1"  # Delete the file
    echo "Deleted successfully"  # Show success message
else
    echo "No such file"  # Show error if file doesn't exist
fi
