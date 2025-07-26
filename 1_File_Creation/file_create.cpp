#include <iostream>   // For input and output
#include <fstream>    // For file operations

using namespace std;

int main()
{
    string str1, str2;  // str1: file name, str2: content to write in file

// Ask user to enter a file name (without spaces)
    cout << "Enter file name (without_Spaces):";
    cin >> str1;

    cin.ignore(); // Clear the input buffer before taking getline input

// Create and open the file using the given file name
    ofstream out(str1);

// Ask user for the content (syntax) to write in the file
    cout << "syntax:";
// Read a full line
    getline(cin, str2);

    // Write the content to the file
    out << str2;

    // Confirmation message
    cout << "File created and writed successfully\n";

    // File will be automatically closed when 'out' goes out of scope
}
