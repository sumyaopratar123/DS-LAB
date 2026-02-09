#include <iostream>
using namespace std;
int stack[5];
int top = -1;

void push() {
int n;
if (top == 4) {
cout << "Stack Overflow\n";
} else {
cout << "Enter element: ";
cin >> n;
top++;
stack[top] = n;
cout << "Element inserted\n";
    }
}
void pop() {
if (top == -1) {
cout << "Stack Underflow\n";
} else {
cout << "Deleted element is: " << stack[top] << endl;
top--;
    }
}
void peek() {
if (top == -1) {
cout << "Stack is empty\n";
} else {
cout << "Top element is: " << stack[top] << endl;
    }
}
void isEmpty() {
if (top == -1) {
cout << "Stack is empty\n";
} else {
cout << "Stack is not empty\n";
}
}
void display() {
if (top == -1) {
cout << "Stack is empty\n";
} else {
cout << "Stack elements are:\n";
for (int i = top; i >= 0; i--) {
cout << stack[i] << endl;
        }
    }
}

int main() {
    int ch;
while (1) {
cout << "\n1.Push\n2.Pop\n3.Peek\n4.IsEmpty\n5.Display\n6.Exit\n";
cout << "Enter choice: ";
cin >> ch;
if (ch == 1)
push();
else if (ch == 2)
pop();
else if (ch == 3)
peek();
else if (ch == 4)
isEmpty();
else if (ch == 5)
display();
else if (ch == 6)
break;
else
cout << "Wrong choice\n";
}

    return 0;
}

