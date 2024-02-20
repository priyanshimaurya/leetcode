#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,3,4,5,6},i,sum=0,total;
    total=6*(6+1)/2;
    for(i=0;i<6;i++){
        sum=sum+arr[i];
    }
    cout<<"Missing number is :- "<<total-sum;
    return 0;
}