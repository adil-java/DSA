// #include <bits/stdc++.h>
// using namespace std;
// int cnt=0;
// void f(){
//     if(cnt==5) return;
//     cout<<"Adil"<<endl;
//     cnt++;
//     f();
// }
// int main() {
// f();
// }
// ===============Back tracking 1 to N=====
// #include <bits/stdc++.h>
// using namespace std;
//  void f(int n){
//     if(n<1) return;
//     f(n-1);
//     cout<<n;
// }
// int main() {
//     f(5);
// return 0;
// }

//================backtracking N to 1
// #include <bits/stdc++.h>
// using namespace std;
// void f(int n,int i){
//     if(i>n) return;
//     f(n,i+1);
//     cout<<i<<endl;
// }
// using namespace std;
// int main() {
// f(5,1);
// return 0;
// }
//=========================
// #include <bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     // cnt++;
//     f(i+1,n);
// }
// int main() {
// f(1,11);
// return 0;
// }
//================
// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }
// int main() {
// cout<<fib(9)<<endl;
// return 0;
// }
//====Sum with single parameter
// #include <bits/stdc++.h>
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// using namespace std;
// int main() {
// cout<<sum(3);
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int fact(int  n){
    if(n==1)return 1;
    return n*fact(n-1);
}
int main() {
    cout<<fact(4);

return 0;
}