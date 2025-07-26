#!/bin/bash

# Ask the user to enter the file name they want to check
read -p "Enter file name: " str1

# Check if the file exists and is a regular file
if [ -f "$str1" ]; then
    echo "file exists"   # If found, inform the user
else 
    echo "file not found"  # If not found, show this message
fi
