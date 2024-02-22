#include<iostream>
using namespace std;
int pattern8(int row){
    int i,j,space;

    for(i=1;i<=row;i++)
    {
        for(space=row-i;space>0;space--)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;

    }
}
int pattern9(int row){
    int i,j,space;

    for(i=row;i>=1;i--)
    {
        for(space=row-i;space>0;space--)
            cout<<" ";
        for(j=i;j>=1;j--)
            cout<<"* ";
        cout<<endl;

    }
}
int main(){
    int row;
    cout<<"Enter row:- ";
    cin>>row;
    pattern8(row);
    cout<<endl;
    pattern9(row);
    cout<<endl;
    return 0;
}