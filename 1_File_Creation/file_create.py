# Ask the user to enter the file name
str1 = input("File name: ")

# Open the file in write mode ("w" means it will create or overwrite the file)
with open(str1, "w") as f:
    # Ask the user to enter the content they want to write in the file
    str2 = input("Content you want to write: ")

    # Write the user's input into the file
    f.write(str2)

    # Show confirmation message
    print("File created and writed successfully")

