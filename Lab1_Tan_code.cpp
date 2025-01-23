#include <iostream>
#include <string>
using namespace std;

// Function for Number 5
void nextLetter(char* letter) {
    char nextLetter = *letter + 1;
    if(*letter == 'z') {
        *letter = 'a';
    }
    else if(*letter == 'Z') {
        *letter = 'A';
    }
    else if(('a' <= *letter && *letter < 'z') || ('A' <= *letter && *letter < 'Z')) { 
        *letter = nextLetter;
    }
}

int main(void) {
    string name;

    // Number 1
    cout << "1. Enter your name: ";
    cin >> name;

    // Number 2
    cout << "2. " << name << endl;

    // Number 3
    cout << "3. ";
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
    cout << "4. ";
    for(int i=0; i < name.length(); i++)
    {
        char next = name[i] + 1;
        if(name[i] == 'z') {
            cout << "a";
        }
        else if(name[i] == 'Z') {
            cout << "A";
        }
        else if(('a' <= name[i] && name[i] < 'z') || ('A' <= name[i] && name[i] < 'Z')) {
            cout << next;
        }
        else {
            cout << name[i];
        }
    }
    cout << endl;
    
    // Number 5
    for(int i=0; i < name.length(); i++)
    {
        nextLetter(&name[i]);
    }
    cout << "5. " << name << endl;
    return 0;
}