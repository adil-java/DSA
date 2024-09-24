#include <iostream>
using namespace std;
const int max_size = 20;
class Adil_Lab03 {
    int capacity;
    int top;
    int* arr;
public:
    Adil_Lab03(int s) {
        capacity = s;
        top = -1;
        arr = new int[capacity];
    }
    ~Adil_Lab03() {
        delete[] arr;
    }
    void push(int element) {
        if (top == capacity - 1) {
            cout << "Stack overflow. Resizing Stack..." << endl;
            resize();
        }
        top += 1;
        arr[top] = element;
        cout << "Successfully push the element." << endl;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack underflow. " << endl;
        }
        else {
            top -= 1;
            cout << "Successfully pop the element." << endl;
        }
    }
    void peek() {
        if (top == -1) {
            cout << "The Stack is empty." << endl;
        }
        else {
            cout << "The top element in the Stack is: " << arr[top] << endl;
        }
    }
    void isempty() {
        if (top == -1) {
            cout << "The Stack is empty." << endl;
        }
        else {
            cout << "The Stack is not empty." << endl;
        }
    }
    void size() {
        cout << "The size of Stack is : " << top + 1 << endl;
    }
    void displayAll() {
        cout << "The Stack is :" << endl;
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;}
    void resize() {
        int* temp = new int[capacity * 2];
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity = capacity * 2;}
};
int main() {
    Adil_Lab03 Stack(3);
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.displayAll();
    Stack.pop();
    Stack.size();
    cout << endl;
    Stack.peek();cout<<endl;
    Stack.push(4);
    Stack.push(5);  
    Stack.displayAll();
    return 0;
}