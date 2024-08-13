// modulo work
// 7789%10 = 9
// how 7789 divide by 10 = 778.9
// 778.9-778= .9 x 10 =10
// ============ reverse Num =============
#include <bits/stdc++.h>
using namespace std;
int main() {
int num;
cin>>num;
string n = to_string(num);
int len = n.length();
int rev(0);
for(int i =0;i<len;i++){
    int d= num%10;
    rev =(rev*10)+d;
    num=num/10;
}
    cout<<rev;
return 0;
}
//