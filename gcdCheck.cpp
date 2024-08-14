// #include <bits/stdc++.h>
// using namespace std;
// int checkGcd(int N, int M){
//     int gcd =0;
//     for(int i= 1;i<=min(N-M,M);i++){
//         if(N%1==0 && M%i==0){
//             gcd=i;
//         }
//     }
//     return gcd;
// }
// int main() {
// cout<<checkGcd(15,10);
// return 0;
// }
// Using Eucliclean Algo
#include <bits/stdc++.h>
using namespace std;
int check(int N,int M){
    int gcd =0;
    while (N>0 && M>0){
        if(N>M){
            N=N%M;
        }
        else{
            M=M%N;
        }
    }
    if(N==0){
        gcd =M;
    }
    else gcd =N;

    return gcd;
}
int main() {
cout<<check(20,40);
return 0;
}