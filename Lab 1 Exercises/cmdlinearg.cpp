#include <iostream>
using namespace std;

int strlen(char* s) {
    int len = 0;
    while(s[len] != '\0') {
        len++;
    }
    return len;
}

void revString(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    cout << s;
}

int main(int argc, char* argv[])
{
    // Item 1 - printing each argument
    cout << "Item 1" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "arg" << i << ": " << argv[i];
        cout << endl;
    }
    cout << endl;

    // Item 2 - reverses the string
    cout << "Item 2" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "arg" << i << ": ";
        revString(argv[i]);
        cout << endl;
    }
    cout << endl;

    // Item 3 - uses the reversed string
    cout << "Item 3" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "using c: ";
        printf("%c\n", argv[i][0]);
        cout << "using s: ";
        printf("%s\n", argv[i]+1);
        cout << endl;
    }

    return 0;
}