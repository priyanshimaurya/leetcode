#include<iostream>
using namespace std;
int main(){
    int arr[7]={12,63,6,9,10,1},i,j,max=-1;
    for(i=0;i<7;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}