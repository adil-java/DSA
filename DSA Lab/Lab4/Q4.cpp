#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Adi_Lab04 {
    int n;
    vector<int> arr;
public:
    Adi_Lab04(int no) : n(no) {
        arr.resize(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }
    void flip(int k) {
        reverse(arr.begin(), arr.begin() + k + 1);
    }
    int max_index(int currentSize) {
        int ind = 0;
        for (int i = 1; i < currentSize; i++) {
            if (arr[i] > arr[ind]) {
                ind = i;
            }
        }
        return ind;
    }
    vector<int> pancake() {
        vector<int> answer;
        for (int i = n; i > 1; i--) {
            int maxIdx = max_index(i);
            if (maxIdx != i - 1) {
                if (maxIdx != 0) {
                    answer.push_back(maxIdx + 1);  
                    flip(maxIdx);
                }
                answer.push_back(i); 
                flip(i - 1); 
            }
        }
        return answer;
    }
    void display() {
        cout << "Sorted Array: ";
        for (int x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
    void displayFlips(const vector<int>& flips) {
        cout << "Sequence of flips: ";
        for (int k : flips) {
            cout << k << " ";
        }
        cout << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    Adi_Lab04 pancakeflips(n);
    vector<int> flips = pancakeflips.pancake();
    pancakeflips.display();
    return 0;
}