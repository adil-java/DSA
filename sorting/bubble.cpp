#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int s){
    for(int i=0;i<s;i++){
        int swap =0;
        for(int j =0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;

            }

        }
                cout<<"run\n";
            if(swap==0){
                break;
            }
    }
}
int main() {
int arr[7]={7,6,5,4,3,2,1};
int size = 7;
bubble_sort(arr,size);
for(int a:arr){
    cout<<a<<" ";
}
return 0;
}