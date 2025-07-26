#include <iostream>     // For standard input and output
#include <fstream>      // For file handling (ifstream)

using namespace std;

int main()
{
    string str1, str2;  // str1: file name or path, str2: stores each line from the file

// Ask user to enter the file name or path to read from
    cout << "Enter file name or path to read:";
    cin >> str1;

// Open the file for reading
    ifstream input(str1);

// Read the file line by line and display its contents
    while (getline(input, str2))
    {
        cout << str2 << endl;  // Print each line
    }

// File will automatically close when 'input' goes out of scope
}
