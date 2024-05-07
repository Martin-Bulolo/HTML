#include <iostream>
using namespace std;

#define MAX_SIZE 10

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into the stack." << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        int poppedValue = arr[top--];
        cout << poppedValue << " popped from the stack." << endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "1. Push\n2. Pop\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}
