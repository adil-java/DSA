#include <bits/stdc++.h>
using namespace std;
int main() {
int a[6]={1,2,3,4,5,6};
int n =6;
int k =2;
int ans = INT_MIN;
int s =0;
for(int i =0;i<k;i++){
    s+=a[i];
}
ans = max(s,ans);
for(int i =1;i<=n-k;i++){
    s-=a[i-1];
    s+=a[i+k-1];
    ans=max(ans,s);
}
cout<<ans;

return 0;
}