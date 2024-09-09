#include <bits/stdc++.h>
using namespace std;
// the below code has un appropiate base case!!!!!!!!!
bool checkPalindrom(string w,int s){
    int size =(w.length())-1;
    int flag= false;
    if (s <= 0) {
        return true;
    }
        if(w[size-s]!=w[s]){
            return false;
        }
        return checkPalindrom (w,s-1);
 
}
int main() {
    string word ="civi";
    int size = word.length()-1;
    cout<<boolalpha<<checkPalindrom(word,size);
return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
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
// int main() {
//     string word ="ad";
//     int size = word.length()-1;
//     cout<<boolalpha<<checkPalindrom(word,0,size);
// return 0;
// }