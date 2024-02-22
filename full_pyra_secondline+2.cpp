#include<iostream>
using namespace std;
int main(){
    int row=5,space,i,j;
    for(i=0;i<=row;i++){
        for (space=1;space<=2*(row-i);space++){
            cout<<" ";
        }
        for(j=0;j<=2*i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}