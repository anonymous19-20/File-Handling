#!/bin/bash

# Ask the user to enter the file name to create/write
read -p "Enter file name: " str1

# Ask the user to enter the content they want to write in the file
read -p "Enter Context: " str2

# Write the content to the file (overwrite if file already exists)
echo "$str2" > "$str1"

# Confirmation message
echo "File created and writed successfully"
