#include<iostream>
using namespace std;
int findSum(int n){
    int sum=0;
    for(int i=0;i<=n;i++)
        sum=sum+i;
    
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number :-  ";
    cin>>n;
    cout<<"sum  of number :- "<<findSum(n);
}