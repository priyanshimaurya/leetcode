#include<iostream>
using namespace std;
void increment(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping the value is :- "<<a<<" "<<b<<endl;
    

}
int main(){
    int x=10;
    int y=20;
    cout<<"before swpinig value is :- "<<x<<" "<<y<<endl;
    increment(x,y);
    return 0;
}