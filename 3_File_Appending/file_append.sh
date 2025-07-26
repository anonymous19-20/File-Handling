#!/bin/bash

# Ask the user to enter the file name where content will be added
read -p "File Name: " str1

# Ask the user what they want to write on the next line of the file
read -p "Want to write on next line: " str2

# Append the content to the file (adds it at the end)
echo "$str2" >> "$str1"

# Confirmation message
echo "Append successfully"
