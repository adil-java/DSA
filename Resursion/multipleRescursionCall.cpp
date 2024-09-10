#include <bits/stdc++.h>
using namespace std;

bool f(int n , string w){
    if(n>w.size()) return true;
    if(w[n]!=w[w.size()-n-1]) return false;
    return f(n+1,w);
}
int fib(int n){
    if(n==0||n==1) return n;
    else return fib(n-1)+fib(n-2);
}
int main() {

    for(int i =0 ;i<5;i++)cout<<fib(i)<<" ";
    cout<<endl;
    return 0; }