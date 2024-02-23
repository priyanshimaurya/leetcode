#include<iostream>
using namespace std;
int swapit(int a,int b){
    // we can't change rthe value in call bye value // that's why affter swiping the value is not change //
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10,b=20;
    swapit(a,b);
    cout<<"value of a is :- "<<a<<endl;
    cout<<"value of b is :- "<<b<<endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// int main(){
//     int a=10,b=20,temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"value of a is :- "<<a<<endl;
//     cout<<"value of b is :- "<<b<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void fun(int a){
//     // we can't change the call by value //
//     // there for we use this a =300 to check
//   a=300;
//  cout<<"inside function value is :- "<<a<<endl;
// }
// int main(){
//     int number =200;
//     fun(number);
//     cout<<"value inside main:- "<<number;
//     return 0;
// }