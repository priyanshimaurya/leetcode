#include<iostream>
using namespace std;
int main(){
    int i,j,row=8;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}