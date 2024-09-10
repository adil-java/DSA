#include <iostream>
#include <vector>
using namespace std;
class BinarySearch{
public:
    void search(vector<vector<int>>& matrix, int targetValue){
        int rows = matrix.size();
        int columns = matrix[0].size();
        int left = 0;
        int right = rows * columns -1;

        while (left <= right) {
            int mid = left + (right - left)/2;
            int midValue = matrix[mid/rows][mid%rows];

            if (midValue == targetValue){
                cout << targetValue<< " is at "<<"Row: " << mid/rows + 1 << " Column: " << mid%rows + 1 << endl;
                return;
            }
            else if (midValue > targetValue) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        cout << targetValue <<" is not found in matrix." << endl;
    }
};

int main(){
    vector<vector<int>> Matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    BinarySearch m;
    m.search(Matrix, 1);
    m.search(Matrix, 8);

    return 0;
}