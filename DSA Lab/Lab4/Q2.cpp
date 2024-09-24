#include <iostream>
using namespace std;
class Adil_Lab04 {
    int N;
    int k;
    int* arr;
public:
    Adil_Lab04(int No, int amount) {
        N = No;
        k = amount;
        arr = new int[N];
    }
    ~Adil_Lab04() {
        delete[] arr;
    }
    void inputdata() {
        cout << "Enter the cost of toys:" << endl;
        for (int i = 0; i < N; i++) {
            cout << "Enter price for toy " << i + 1 << " : ";
            cin >> arr[i];
        }
    }
    void bubblesort() {
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
    void maxtoys() {
        bubblesort();
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (k >= arr[i]) {
                k -= arr[i];
                count++;
            } else {
                break;
            }
        }
        cout << "The maximum number of toys you can buy is: " << count << endl;
    }
};
int main() {
    int n, k;
    cout << "Enter number of toys: ";
    cin >> n;
    cout << "Enter the total amount: ";
    cin >> k;
    Adil_Lab04 toy(n, k);
    toy.inputdata();
    toy.maxtoys();
    return 0;
}