#include <iostream>
#include <string>
using namespace std;
class Adi_Lab03 {
    int capacity;
    int top;
    char* arr;
public:
    Adi_Lab03(int s) {
        capacity = s;
        top = -1;
        arr = new char[capacity];
    }
    ~Adi_Lab03() {
        delete[] arr;
    }
    void push(char element) {
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
            cout << arr[top];
            top -= 1;
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
    int size() {
        return top + 1;
    }
    void displayAll() {
        cout << "The Stack is: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void resize() {
        char* temp = new char[capacity * 2];
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity = capacity * 2;
    }
    void IsPalindrome() {
        bool ans = true;
        for (int i = 0; i < top / 2 + 1; i++) {
            if (arr[i] != arr[top - i]) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "The given string is a palindrome." << endl;
        }
        else {
            cout << "The given string is not a palindrome." << endl;
        }
    }
};
int main() {
    Adi_Lab03 Stack(10);
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    for (char c : s) {
        Stack.push(c);
    }
    Stack.IsPalindrome();
    Stack.displayAll();
    return 0;
}