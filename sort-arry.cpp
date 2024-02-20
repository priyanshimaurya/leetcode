#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,2,1,2,0},i,j,temp;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"after assending the array value is :- ";
    for(i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}