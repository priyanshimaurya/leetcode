#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,6,1,1,6,5},i,j;
    for(i=0;i<=6;i++){
        for(j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
               cout<<"at index :- "<<i<<endl;
            }
        }
    }
    return 0;
}