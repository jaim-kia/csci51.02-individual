#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int c;
    cin >> c;

    int first; int second;
    string message;
    for(int i=0; i<c; i++){
        cin >> first >> second;
        getline(cin, message);
        // cout << "Agent#" << i+1 << " is at (" << first << ", " << second << ")" << endl;
        printf("Agent#%d is at (%d, %d)\n", i+1, first, second);
        // cout << "Says:" << message << endl;
        printf("Says:%s", message);
    }
}