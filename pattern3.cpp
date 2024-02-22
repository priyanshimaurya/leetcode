#include<iostream>
using namespace std;
int patter3(int row){
    int space,i,j;
    for(i=0;i<row;i++){
        for(space=row-i;space>=0;space--){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"Enter a row number :- ";
    cin>>row;
    patter3(row);
    return 0;
}