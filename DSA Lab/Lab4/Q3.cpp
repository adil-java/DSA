#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
class Adil_Lab04 {
    int N;
    int comparisons;
    int swaps;
    int* arr;
public:
    Adil_Lab04(int no) {
        N = no;
        arr = new int[N];
    }

    ~Adil_Lab04() {
        delete[] arr;
    }

    void randomarray() {
        srand(time(0));
        for (int i = 0; i < N; i++) {
            arr[i] = rand() % 100;
        }
    }
    void selectionsort() {
        comparisons = swaps = 0;
        for (int i = 0; i < N - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < N; j++) {
                comparisons++;
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                swap(arr[i], arr[minIndex]);
                swaps++;
            }
        }
    }
    void insertionsort() {
        comparisons = swaps = 0;
        for (int i = 1; i < N; i++) {
            int key = arr[i];
            int j = i - 1;
            comparisons++;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
                swaps++;
                comparisons++;
            }
            arr[j + 1] = key;
        }
    }
    void bubblesort() {
        comparisons = swaps = 0;
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - 1 - i; j++) {
                comparisons++;
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swaps++;
                }
            }
        }
    }
    void display() {
        cout << "Array: ";
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void performanalysis(string sort) {
        cout << "The type of sorting is: " << sort << endl;
        cout << "The number of comparisons: " << comparisons << endl;
        cout << "The number of swaps: " << swaps << endl;
    }
};

int main() {
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    Adil_Lab04 analysis(n);
    string type;
    cout << "Enter the sorting type (bubble 'b'/selection 's'/insertion 'i'): ";
    cin >> type;
    analysis.randomarray();
    cout << "Before sorting:" << endl;
    analysis.display();
    if (type == "b") {
        analysis.bubblesort();
        analysis.performanalysis("bubble sort");
    }
    else if (type == "s") {
        analysis.selectionsort();
        analysis.performanalysis("selection sort");
    }
    else if (type == "i") {
        analysis.insertionsort();
        analysis.performanalysis("insertion sort");
    }
    else {
        cout << "Invalid sort type" << endl;
    }
    cout << "After sorting:" << endl;
    analysis.display();

    return 0;
}