#include<iostream>
using namespace std;
int pattern5(int row){
    int i,j;
    for(i=1;i<=row;i++){
        
        for(j=1;j<=i;j++){
            cout<<i;
        }
    cout<<endl;

    }
}
int pattern6(int row){
    int i,j,space;
    for(i=1;i<=row;i++){
        for(space=row-i;space>=0;space--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int pattren7(int row){
    int i,j,space;
    for(i=row;i>=0;i--){
        for(space=row-i;space>=0;space--){
            cout<<" ";
        }
        for(j=i;j>=0;j--){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"Enter row :- ";
    cin>>row;
    pattern5(row);
    cout<<endl;
    pattern6(row);
    cout<<endl;
    pattren7(row);
    cout<<endl;
    return 0;
}