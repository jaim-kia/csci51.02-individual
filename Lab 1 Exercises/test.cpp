#include <cstdlib>
#include <iostream>
using namespace std;

int main(void) {
    char x = 'a'+1;
    cout << x << endl;

    int y = 'Z';
    int yy = 'A';
    cout << y - yy;

    bool b = 'a' <= '-' < 'z';
    bool B = 'A' <= '-' < 'Z';
    cout << endl;
    cout << b;
    cout << endl;
    cout << B;

    return 0;
}