// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     pair <int,int> p[] = {{1,2},{3,4}};
//     cout<<p[1].second<<endl;
// }
// ====================Vectors/iterator======================
#include <bits/stdc++.h>
using namespace std;
int main() {
vector<int> v = {1,2,3,4,5};
// iterator in for loop :
//1. for(vector<int>::iterator i = v.begin();i!=v.end();i++) 
//2. for(auto i = v.begin();i != v.end();i++){
// the auto keyword will automatically assign data type    
// cout<<*(i)<<endl;

// }
// erase and insert element in vector
// v.erase(v.begin()+1,v.end()); //output : remove element from 2 to 5
// v.insert(v.begin(),5);//output:5 1
// v.insert(v.begin(),5,5);//at 0th position add five occurance of 5 output:5 5 5 5 5 5 1
// vector <int>copy = v;
// v.insert(v.begin(),copy.begin(),copy.end());// add an entire vector into another vector
// for(auto i = v.begin();i != v.end();i++){
//     cout<<*i;
// }

return 0;
}