#include <bits/stdc++.h>
using namespace std;
int main() {
string m="abcda";
map<char,int>mp;
for(int i=0;i<m.size();i++){
    mp[m[i]]++;
}
cout<<mp['b'];
return 0;
}