# Ask the user to enter the file name they want to read
str1 = input("File name: ")

# Open the file in read mode ("r") — this will raise an error if the file doesn't exist
with open(str1, "r") as f:
# Read the entire content of the file
    str1 = f.read()

# Print the file content to the screen
    print(str1)
