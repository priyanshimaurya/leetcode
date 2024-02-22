#include<iostream>
using namespace std;
int main(){
    int row=6,i,j,space;
    for(i=1;i<=row;i++){
        for(space=row-i;space>=0;space--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}