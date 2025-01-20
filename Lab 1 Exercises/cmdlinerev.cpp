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

int main(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++)
    {
        revString(argv[i]);
        cout << endl;
    }
    return 0;
}