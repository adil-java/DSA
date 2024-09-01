#include <bits/stdc++.h>
using namespace std;
int main() {
    int rows=3;
    int cols=3;
    int index=0;
int array2D[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
int array1D[9];
    for(int col =0;col<cols;col++){
        for(int row =0 ;row<rows;row++){
        array1D[index]=array2D[row][col];
        index++;
    }
}
cout <<"1D Array in Column Major Order:";
for (int i = 0; i < rows * cols; i++) {
cout << array1D[i] <<" ";
}
return 0;
}