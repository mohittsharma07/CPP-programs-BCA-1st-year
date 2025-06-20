#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create and write to a text file
    ofstream NewFile("filename.txt");
    NewFile << "Hello, this is my first file.";
    NewFile.close();

    // Read from the text file
    string FileText;
    ifstream MyReadFile("filename.txt");
    
    while (getline(MyReadFile, FileText)) {
        cout << FileText << endl;
    }

    MyReadFile.close();
    return 0;
}

