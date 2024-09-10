#include <bits/stdc++.h>
using namespace std;
// 01
// // the below code has un appropiate base case!!!!!!!!!
// bool checkPalindrom(string w,int s){
//     int size =(w.length())-1;
//     int flag= false;
//     if (s <= 0) {
//         return true;
//     }
//         if(w[size-s]!=w[s]){
//             return false;
//         }
//         return checkPalindrom (w,s-1);
 
// }

// 02

// bool checkPalindrom(string w,int e,int s){
  
//     // int flag= false;
//     if(e>=s){
//         return true;
//     }
//         if(w[s-e]!=w[e]){
//             return false;
//         }
//         return checkPalindrom (w,e+1,s-1);
// }
// 03
bool f(int n , string w){
    if(n>w.size()) return true;
    if(w[n]!=w[w.size()-n-1]) return false;
    return f(n+1,w);
}

int main() {
    string word ="ada";
    cout<<endl;
//  cout<<boolalpha<<checkPalindrom(word,size);
    // cout<<boolalpha<<checkPalindrom(word,0,size);
    cout<<boolalpha<<f(0,word);
return 0;
}

// 
