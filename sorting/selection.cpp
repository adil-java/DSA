#include <bits/stdc++.h>
using namespace std;
void sorting_algo(int arr[],int s){
    for(int i =0;i<=s-2;i++){
        int min =i;
        for(int j =i;j<=s-1;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main() {
int size=6;
int arr[size]={13,46,24,53,19,9};
sorting_algo(arr,size);
for(int a:arr){
    cout<<a<<endl;
}
return 0;
}