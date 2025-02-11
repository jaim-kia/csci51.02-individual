#include <iostream>
using namespace std;

// int stack struct
struct IntStack {
    int data;
    IntStack* nextNode;
    IntStack* prevNode;

    IntStack(int data, IntStack* prevNode) {
        this->data = data;
        this->prevNode = prevNode;
        this->nextNode = nullptr;
    }

    ~IntStack(){
        prevNode->nextNode = nullptr;
    }
};

int main(void) {
    // Creationism
    IntStack* head = new IntStack(1, nullptr);
    head->nextNode = new IntStack(2, head);
    head->nextNode->nextNode = new IntStack(3, head->nextNode);

    // Traversionism

    IntStack* temp = head;
    while (temp->nextNode->nextNode) {
        temp = temp->nextNode;
    }
    delete temp->nextNode;
    // temp->nextNode = nullptr;

    IntStack* current = head;
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