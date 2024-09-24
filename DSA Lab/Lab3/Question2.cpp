#include <iostream>
#include <string>
using namespace std;

class Adil_Lab03 {
    int capacity;
    int top;
    char* arr;
public:
    Adil_Lab03(int s) {
        capacity = s;
        top = -1;
        arr = new char[capacity];
    }
    ~Adil_Lab03() {
        delete[] arr;
    }
    void push(char element) {
        if (top == capacity - 1) {
            cout << "Stacks overflow." << endl;
            resize();
        }
        top += 1;
        arr[top] = element;
    }
    void pop() {
        if (top == -1) {
            cout << "Stacks underflow." << endl;
        }
        else {
            cout << arr[top];
            top -= 1;
        }
    }
    void peek() {
        if (top == -1) {
            cout << "Stacks is empty." << endl;
        }
        else {
            cout << "The top element in Stacks is: " << arr[top] << endl;
        }
    }
    void isempty() {
        if (top == -1) {
            cout << "Stacks is empty." << endl;
        }
        else {
            cout << "Stacks is not empty." << endl;
        }
    }
    int size() {
        return top + 1;
    }
    void display() {
        cout << "The Stacks is :" << endl;
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
};

int main() {
    Adil_Lab03 Stacks(6);
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    for (char j : s) {
        Stacks.push(j);
    }
    int size = Stacks.size();
    cout << "The reversed string is: " << endl;
    for (int i = 0; i < size; i++) {
        Stacks.pop();
    }
    return 0;
}