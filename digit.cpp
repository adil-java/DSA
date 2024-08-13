// modulo work
// 7789%10 = 9
// how 7789 divide by 10 = 778.9
// 778.9-778= .9 x 10 =10
// ============ reverse Num , Count the number of digits and also Palindrome =============
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int num;
// cin>>num;
// int c =num;
// int count =0;
// int rev(0);
// while(num){

//     int d = num%10;
//     rev= (rev*10)+d;
//     // count++;
//     num=num/10;
// };
// // cout<<(int)(num)<<endl;
// if((c==rev)){

// cout<<boolalpha<< true;
// }
// else{
// cout<<boolalpha<< false;

// }
// return 0;
// }
// //
//==========================Print All divisors=======
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int num = 36;
// int count =0;
// vector <int > ls;
// // for (int i = 1; i <=sqrt(num); i++)
// for (int i = 1; i*i <=num; i++)
// {
//     count++;
//     if(num%i==0){
//         ls.push_back(i);
//     if(num/i!=i){
//         ls.push_back(num/i);
//     }}}
//     sort(ls.begin(),ls.end()); // for sorting the output
//     for(auto i: ls){
//         cout<<i<<endl;
//     }

// return 0;
// }


// =================Prime Number=============
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int p=11;
// int c= 0;
// for(int i=1;i<=p;i++)
// {if(p%i==0){
//     c++;

// }}
// if(c==2){
//     cout<<"Prime num";
// }
// else{
//     cout<<"Not a prime num";
// }
// return 0;
// }
// Alternative Way
#include <bits/stdc++.h>
using namespace std;
int main() {
int p =11;
int c= 0;
for(int i =1;i*i<=p;i++){
    if(p%i==0){
        c++;
        if(p/i!=i){
            c++;
        }
    }
}
if(c==2){
cout<<p<<" Is prime number";
}
else
cout<<p<<" Is not a prime number";

return 0;
}