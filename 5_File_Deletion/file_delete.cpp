#include <iostream>   // For taking input and showing output
#include <cstdio>     // For using the remove() function to delete files

using namespace std;

int main() {
    string str1;  // Variable to store the file name

// Ask the user to enter the name of the file they want to delete
    cout << "File name: ";
    cin >> str1;  // Get file name from the user

// Try to delete the file
// remove() needs a C-style string, so we convert using .c_str()
    if (remove(str1.c_str()) == 0)
        cout << "Deleted successfully";  // File deleted
// File not found or couldn't be deleted
    else
        cout << "No such file";

    return 0;  // End of program
}

