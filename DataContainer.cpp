// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     pair <int,int> p[] = {{1,2},{3,4}};
//     cout<<p[1].second<<endl;
// }
// ====================Vectors/iterator======================
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// vector<int> v = {1,2,3,4,5};
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
// v.pop_back();//remove element at the end th index;
// v.clear();//vector is clear!!
// for(auto i = v.begin();i != v.end();i++){
    // cout<<*i;
// }
// cout<<boolalpha<<v.empty();//for checking is vector is empty or not
//
// vector <int > v1= {10,20};
// vector <int > v2= {20,10};
// v1.swap(v2);
// cout<<v1[0]<<endl;
// cout<<v2[0]<<endl;
//  return 0;
// }

// ===========================list=======================
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// list <int> l ={1,2,3,4};
// l.push_front(10);// better the vectors insert operation time complexity wise;
// for(auto i = l.begin();i!=l.end();i++){
//     cout<<*i<<" ";
// }
// return 0;
// }
// rest of the operations are same as vectors
// ===========================deque===========
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// deque <int> d ={1};
// d.push_back(2);
// d.emplace_back(3);
// d.emplace_front(0);
// for(auto i =d.begin();i!=d.end();i++){
//     cout<<*i<<" ";
// }//output: 0 1 2 3 
// cout<<endl;
// d.pop_back();
// d.pop_front();

// for(auto i =d.begin();i!=d.end();i++){
//     cout<<*i<<" ";
// }//output:1 2 
// return 0;
// }
// rest of operation are same//

// ======================stack=======
#include <bits/stdc++.h>
using namespace std;
int main() {
stack<int>s;//lifo:last in first out
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
cout<<s.top();//output: 50

return 0;
}
