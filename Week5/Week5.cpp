#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//reversal
string reverseText(string text) {
    string reversed = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

int main() {
    string userInput;

    //user input
    cout << "Enter text: ";
    getline(cin, userInput);

    //append file 1
    ofstream outFile("CSC450_CT5_mod5.txt", ios::app);
    if (outFile.is_open()) {
        outFile << userInput << endl;
        outFile.close();
    }
    else {
        cout << "Unable to write" << endl;
        return 1;
    }

    //read file 1
    ifstream inFile("CSC450_CT5_mod5.txt");
    string fileContent = "";
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            fileContent += line + "\n";
        }
        inFile.close();
    }
    else {
        cout << "Unable to read" << endl;
        return 1;
    }

    //reverse file 1
    string reversedContent = reverseText(fileContent);

    //write to file 2
    ofstream reverseFile("CSC450-mod5-reverse.txt");
    if (reverseFile.is_open()) {
        reverseFile << reversedContent;
        reverseFile.close();
    }
    else {
        cout << "Unable to create reverse file." << endl;
        return 1;
    }

    cout << "End" << endl;

    return 0;
}