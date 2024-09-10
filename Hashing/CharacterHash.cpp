#include <bits/stdc++.h>
using namespace std;
int main() {
string ch ="abcabgsdawAA";
int s = ch.size();
int hash[256]={0};
for(int i =0;i<s;i++){
    hash[ch[i]]++; 
} 
int q=s;
string a = "abcdgws";
while(q--){
    cout<<a[q]<<" : "<<hash[a[q]]<<endl;
}
// cout<<hash[0]<<endl;
// cout<<hash[1]<<endl;
// cout<<hash[2]<<endl;
// cout<<hash[3]<<endl;

return 0;
}