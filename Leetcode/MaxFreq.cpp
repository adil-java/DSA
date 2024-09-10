#include <bits/stdc++.h>
using namespace std;
int main() {
int k =5;
int a[3]={1,2,4};
int first=0;
int last=0;
int res=1;
int s=0;
while(last<a.size()){
s+=a[last++];

    if(s+k<a[last-1]*(last-first)){
      s-=a[start++];
    }
     res=max(res,last-first);
}
cout<<res;
return 0;
}