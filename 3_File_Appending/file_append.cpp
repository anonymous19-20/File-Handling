#include <iostream>     // For input and output
#include <fstream>      // For file handling (ofstream)

using namespace std;

int main()
{
// str1: file name or path, str2: text to append
    string str1, str2;

// Ask the user to enter the file name or path where text should be appended
    cout << "File name or path to append:";
    cin >> str1;

    cin.ignore(); // Clear the input buffer before using getline()

// Open the file in append mode (existing data is preserved, new data is added at the end)
    ofstream out(str1, ios::app);

// Ask the user to enter the text they want to write
    cout << "Text want to write:";
    getline(cin, str2); // Read a full line including spaces

// Append the text to the file with a newline
    out << str2 << endl;

// Confirmation message
    cout << "Append successfully";
}
