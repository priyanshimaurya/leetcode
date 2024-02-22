#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    if(n>=0){
        cout<<n<<" is positive number ";
    }
    else if(n<=0){
        cout<<n<<" is negative number ";
    }
    else{
        cout<<"please enter numeric value  ";
    }
    return 0;
}