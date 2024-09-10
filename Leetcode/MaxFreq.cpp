#include <bits/stdc++.h>
using namespace std;
int main() {
int k =5;
int a[3]={1,2,4};
for(int i =0 ;i<3;i++){
    while(k--){
        a[i]+=1;
    }

}
for(int aa: a){
    cout<<aa<<endl;
}
return 0;
}