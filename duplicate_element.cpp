#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,4,5,5},i;
    for(i=0;i<7;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<"  is duplicate in this array this is present at index:- "<<i<<endl;
        }
    }
    return 0;
}