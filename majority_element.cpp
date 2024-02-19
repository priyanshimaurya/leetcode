#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,2,2,3,3,4},i,j;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]==arr[j]){
                cout<<"majority  elemen tfound at index :- "<<i<<endl;
            }
            // else{
            //     cout<<"not found majority element"<<endl;
            // }
        }
    }
    return 0;
}