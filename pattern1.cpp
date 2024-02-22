#include<iostream>
using namespace std;
int main(){
    int row=6,i,j;
    for(i=row;i>1;i--){
        for(j=i;j>1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}