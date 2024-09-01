#include <iostream>
using namespace std;

int findTarget(int arr[], int target, int size) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
    int mid = (left + right) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    if (arr[mid]<target){
        left = mid + 1;
    }
    else {
        right = mid - 1;
    }
    }
    return -1;
}

int main() {
    int arr1[] = {-1,0,3,5,9,12};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << findTarget(arr1,9,size1) << endl;
    
    int arr2[] = {-1,0,3,5,9,12};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << findTarget(arr2,2,size2) << endl;
    
    return 0;
}