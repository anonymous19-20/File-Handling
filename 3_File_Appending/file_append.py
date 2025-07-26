# Ask the user to enter the file name where they want to append text
str1 = input("File name: ")

# Open the file in append mode ("a" means add new content to the end of the file)
with open(str1, "a") as f:
# Ask the user for the content they want to add
    str2 = input("Content you want to write on next line: ")

# First, write a newline so the new content starts on a new line
    f.write("\n")

# Now write the user's content
    f.write(str2)

# Show confirmation message
    print("Append successfully")
