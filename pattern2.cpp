#include<iostream>
using namespace std;
int pattern1(int row){
    for(int i=row;i>=0;i--){
        for(int j=i;j>0;j--){
            cout<<'*';
        }
        cout<<endl;
    }
}
int main(){
    int row=5;
    pattern1(row);
    cout<<endl;
    return 0;
}