#include<iostream>
using namespace std;
int main(){
    string str;
    int length=0,i;
    cout<<"Enter string to see a length of string :- ";
    cin>>str;
     for (int i = 0; str[i] != '\0'; i++) { 
        length++; 
    } 
    cout<<"Length of string is :- "<<length;
    return 0;
}