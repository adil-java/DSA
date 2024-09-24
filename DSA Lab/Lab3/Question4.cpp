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
            top -= 1;
        }
    }
    int size() {
        return top + 1;
    }
    void displayAll() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i];
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
    void processString( string& str) {
        for (char ch : str) {
            if (ch == '#') {
                pop();
            }
            else {
                push(ch);
            }
        }
    }
    bool isEqual(const Adil_Lab03& obj) const {
        if (top != obj.top) return false;
        for (int i = 0; i <= top; i++) {
            if (arr[i] != obj.arr[i]) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    Adil_Lab03 Stack1(10);
    Adil_Lab03 Stack2(10);
    string s, t;
    cout << "Enter first string: ";
    getline(cin, s);
    cout << "Enter second string: ";
    getline(cin, t);
    Stack1.processString(s);
    Stack2.processString(t);
    if (Stack1.isEqual(Stack2)) {
        cout << "Both strings are equal." << endl;
    }
    else {
        cout << "Strings are not equal." << endl;
    }
    return 0;
}