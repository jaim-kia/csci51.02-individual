#include <iostream>
using namespace std;

int main(void) {

    int i;
    int *p;
    p = &i;
    i = 6;

    cout << "int i = " << i << endl;
    cout << "pointer p: " << p << endl;
    cout << "address of i: " << &i << endl;
    cout << "dereference p: " << *p << endl;


    cout << endl;
    // using char pointers
    char a;
    char *b;
    b = &a;
    a = 'a';

    cout << "char a = " << a << endl;
    // the pointer was casted into an int pointer to represent the address
    cout << "pointer b: " << (int*)b << endl;
    cout << "address of a: " << (int*)&a << endl;
    cout << "dereference b: " << *b << endl;
}