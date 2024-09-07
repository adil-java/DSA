#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][4], int m, int n, int target) {
    if (m == 0 || n == 0) return false;
    int left = 0;
    int right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int mid_value = matrix[mid / n][mid % n];
        if (mid_value == target) {
            return true;
        } else if (mid_value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}
int main() {
    int matrix[3][4] = {{1, 3, 5, 7},
                        {10, 11, 16, 20},
                        {23, 30, 34, 60}};

    int target = 3;
    bool result = searchMatrix(matrix, 3, 4, target);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
