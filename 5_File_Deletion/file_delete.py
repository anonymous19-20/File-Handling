import os  # Import the os module to handle file operations

# Ask the user to enter the name of the file they want to delete
str1 = input("File Name: ")

# Check if the file exists
if os.path.exists(str1):
    os.remove(str1)  # Delete the file
    print("Deleted successfully")  # Confirm deletion
else:
    print("No such file")  # Inform user that file was not found
