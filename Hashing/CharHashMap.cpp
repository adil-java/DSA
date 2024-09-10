#include <bits/stdc++.h>
using namespace std;
int main() {
string m="abcds";
map<char,int>mp;
for(int i=0;i<m.size();i++){
    mp[m[i]]++;
}
for(auto i:mp){
    cout<<i.first<<" : "<<i.second<<endl;
}
return 0;
}