#include <bits/stdc++.h>
using namespace std;
int main() {
int arr[4]={1,2,1,3};
map <int, int> mpp;
for(int i =0;i<4;i++){
    mpp[arr[i]]++;
}
int q = 5;
int num[5]={0,1,2,4,3};
while(--q){
    cout<<mpp[num[q]]<<endl;
}
for (auto it:mpp){
    cout<<it.first << " : "<<it.second<<endl;
}
return 0;
}