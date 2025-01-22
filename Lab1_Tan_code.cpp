#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string name;

    // Number 1
    cout << "Enter your name: ";
    cin >> name;

    // Number 2
    cout << "Hello User: " << name;
    cout << endl;

    // Number 3
    for(int i = 0; i < name.length(); i++)
    {
        if (i == 0) {
            cout << name[0];
        }
        else {
            cout << "#";
        }
    }
    cout << endl;

    // Number 4
    for(int i=0; i < name.length(); i++)
    {
        char next = name[i] + 1;
        if(name[i] == 'z') {
            cout << "a";
        }
        else if(name[i] == 'Z') {
            cout << "A";
        }
        else if('a' <= name[i] < 'z' || 'A' <= name[i] < 'Z') {
            cout << name[i];
            cout << next;
        }
        else {
            cout << name[i];
        }
    }
    cout << endl;
    
    // cout << name[0]+1;
    // cout << endl;
    return 0;
}