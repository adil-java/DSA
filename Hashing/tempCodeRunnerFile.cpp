#include <bits/stdc++.h>
using namespace std;
int main() {
int arr[4]={1,2,1,3};
map <int, int> mpp;
for(int i =0;i<4;i++){
    mpp[arr[i]]++;
}
int q = 4;
int num[4]={1,2,4,3};
while(--q){
    cout<<mpp[num[q]]<<endl;
}
return 0;
}