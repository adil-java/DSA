// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int arr[5];
// arr[0]=1;
// arr[1]=2;
// arr[2]=3;
// arr[3]=4;
// // arr[4]=5;
// int U = sizeof(arr)/sizeof(arr[0]);
// if (arr[U]!=NULL) cout<<"Insertion Not possible";
// else{
//     int index=3;
//     while(index<=U){
//         arr[U]=arr[U-1];
//         U--;
//     }
//     arr[index]=11;
// }
// for(int a:arr){
//     cout<<a<<endl;
// }
// return 0;
// }
// The above code perform Insertion in the array at the given index
#include <bits/stdc++.h>
using namespace std;
int main() {
int arr[6]={2,3,4,6,7};
int find;cout<<"Enter the element you want to search:";cin>>find;
int left =0;
int right =4;
int size=4;
int mid;
while(left<=right){
mid = (right+left)/2;
    if(arr[mid]==find){
        cout<<"Element found at:"<<mid<<endl;
        break;

    }
    else if(arr[mid]>find){
        right = mid-1;
        
    }
    else{
        left=mid+1;
    }
}
// Deletion starts from here
int rem=mid;
int temp = arr[rem];
while(rem<size){
    arr[rem]=arr[rem+1];
    rem++;
}
arr[rem]=temp;
    cout<<"element to end"<<endl;
for(int a:arr) cout<<a<<"";

return 0;
}