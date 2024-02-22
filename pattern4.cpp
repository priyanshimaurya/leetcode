#include<iostream>
using namespace std;
int pattern4(int row){
    int space,i,j;
    for(i=row;i>=0;i--){
        for(space=row-i;space>=0;space--){
            cout<<" ";
        }
        for(j=i;j>=0;j--){
            cout<<'*';
        }
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"Enter row :- ";
    cin>>row;
    pattern4(row);
    return 0;
}