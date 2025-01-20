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
    // Item 1
    for (int i = 0; i < argc; i++)
    {
        cout << "arg" << i << ": " << argv[i];
        cout << endl;
    }
    cout << endl;

    // Item 2
    for (int i = 0; i < argc; i++)
    {
        cout << "arg" << i << ": ";
        revString(argv[i]);
        cout << endl;
    }
    cout << endl;

    // Item 3
    for (int i = 0; i < argc; i++)
    {
        printf("%c\n", argv[i][0]);
        printf("%s\n", argv[i]+1);
        cout << endl;
    }

    return 0;
}