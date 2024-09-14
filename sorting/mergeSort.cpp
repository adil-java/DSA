#include <bits/stdc++.h>
using namespace std;
// void Merge(int arr[],int left,int mid,int right){
//     int n1=mid-left+1;
//     int n2=right-mid;
//     int L[n1],R[n2];
//     for (int i = 0; i < n1; i++){
//         L[i] = arr[left + i];
//     }
//     for (int i = 0; i < n2; i++){
//         R[i] = arr[mid + 1 + i];
//     }
//    int i =0,j=0,k=left;
//    while(i<n1&& j<n2){
//     if(L[i]<=R[j]){
//         arr[k]=L[i];
//         i++;
//     }
//     else{
//         arr[k]=R[j];
//         j++;}k++;
//    }
//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;}
//         while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;}}
void Merge(int arr[],int low,int mid,int high){
int left=mid-low+1;
int right = high-mid;
int L[left],H[right];
for(int i =0;i<left;i++){
    L[i]=arr[low+i];

}
for(int j =0;j<right;j++){
    H[j]=arr[mid+1+j];
}
int i=0,j=0,k=low;
while(i<mid && j<right){
    if(L[i]<=H[j]){
        arr[k]=L[i];
        i++;
    }
    else{
        arr[k]=H[j];
        j++;
    }
    k++;

    while(i<left){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<right){
        arr[k]=H[j];
        j++;
        k++;
    }
}

}
void mergeSort( int arr[], int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    Merge(arr, low, mid, high);  // merging sorted halves
}

int main() {
    int arr[6]={2,3,5,6,4,1};
    mergeSort(arr,0,5);
    for(int a:arr){
        cout<<a<<endl;
    }
return 0;
}