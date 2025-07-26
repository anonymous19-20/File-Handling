import os  # Import the os module to work with file system operations

# Ask the user to enter the name of the file to check
str1 = input("File Name: ")

# Check if the file exists at the given path
if os.path.exists(str1):
    print("File exists")  # If file is found, display this
else:
    print("File not found")  # If not found, inform the user

