#include <iostream>
#include <string>
using namespace std;
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
            cout << "Stack overflow. Resizing..." << endl;
            resize();
        }
        top += 1;
        arr[top] = element;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack underflow." << endl;
        }
        else {
            cout << arr[top] << " ";
            top -= 1;
        }
    }
    void peek() {
        if (top == -1) {
            cout << "The stack is empty." << endl;
        }
        else {
            cout << "The top element in the stack is: " << arr[top] << endl;
        }
    }
    void isempty() {
        if (top == -1) {
            cout << "The stack is empty." << endl;
        }
        else {
            cout << "The stack is not empty." << endl;
        }
    }
    int size() {
        return top + 1;
    }
    void display() {
        cout << "The stack is: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void resize() {
        int* temp = new int[capacity * 2];
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity = capacity * 2;
    }
    int fibonacci(int terms) {
        if (terms == 0) {
            return 0;
        }
        if (terms == 1) {
            return 1;
        }
        return fibonacci(terms - 1) + fibonacci(terms - 2);
    }
    void seq(int terms) {
        for (int i = 1; i <= terms; i++) {
            push(fibonacci(i));
        }
    }
};

int main() {
    Adil_Lab03 stack(10);
    int sequence;
    cout<<"Enter the number of terms:";cin>>sequence;
    stack.seq(sequence);
    cout << "The fibonacci series is :" << endl;
    int s = stack.size();
    for (int i = 0;i < s;i++) {
        stack.pop();
    }
    return 0;
}