#include <iostream>
using namespace std;

int main()
{
    //variables
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    //memory allocation
    int* p1 = new int;
    int* p2 = new int;
    int* p3 = new int;

    //value stores
    *p1 = a;
    *p2 = b;
    *p3 = c;

    cout << "\nValues stored in variables:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "\nValues stored in dynamic memory (via pointers):" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;

    //free memory
    delete p1;
    delete p2;
    delete p3;

/* block used for testing, shows that dynamic memory was positively cleared, but makes the program end in an error
    cout << "\nValues stored in variables:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "\nValues stored in dynamic memory (via pointers):" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;
*/
    return 0;
}