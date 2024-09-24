#include <iostream>
using namespace std;
class Adil_Lab04 {
    int N;
    int* arr;
public:
    Adil_Lab04(int No) {
        N = No;
        arr = new int[N];
    }
    ~Adil_Lab04() {
        delete[] arr;
    }
    void inputdata() {
        cout << "Enter array nums for red as 0, white as 1 and blue as 2:" << endl;
        for (int i = 0; i < N; i++) {
            int temp;
            cout << "Enter data for " << i + 1 << " object: ";
            cin >> temp;
            while (temp < 0 || temp > 2) {
                cout << "Invalid value. Please enter again (0, 1, or 2): ";
                cin >> temp;
            }
            arr[i] = temp;
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
    void display() const {
        cout << "The array is: " << endl;
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    int n;
    cout<<"Enter the number of objects:";
    cin>>n;
    Adil_Lab04 sort(n);
    sort.inputdata();
    sort.bubblesort();
    sort.display();
    return 0;
}