#include <iostream>
using namespace std;

// int node struct
struct IntNode {
    int data;
    IntNode* nextNode;

    IntNode(int data) {
        this->data = data;
        this->nextNode = nullptr;
    }
};

int main(void) {
    // Creationism
    IntNode* head = new IntNode(1);
    head->nextNode = new IntNode(2);
    head->nextNode->nextNode = new IntNode(3);

    // Traversionism
    IntNode* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->nextNode != nullptr) {
            cout << "--";
        }
        current = current->nextNode;
    }
    cout << endl;

    return 0;
}