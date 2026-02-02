#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char string1[100];
    char string2[100];

    for (int i = 0; i < 3; i++) {
        cout << "Enter string1: ";
        cin.getline(string1, 100); //getline needed to be used or space characters broke the app

        cout << "Enter string2: ";
        cin.getline(string2, 100);

        strcat_s(string1, 100, string2); //vs did NOT appreciate standard strcat

        cout << "Concatenated result: " << string1 << endl << endl;
    }

    return 0;
}