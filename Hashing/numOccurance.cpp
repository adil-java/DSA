#include <bits/stdc++.h>
using namespace std;

int main() {

int arr[4]={1,1,0,2};

int Hash[13]={0};
for(int i=0;i<4;i++){
    Hash[arr[i]]+=1;
}

int q = 2;
cout<<Hash[1];
return 0;
}