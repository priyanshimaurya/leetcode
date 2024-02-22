#include<iostream>
using namespace std;
int main(){
    string str;
    int vowel=0;
    cout<<"Enter string :- ";
    cin>>str;
    for (int i = 0; str[i] != '\0'; i++) { 
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'
            || str[i] == 'o' || str[i] == 'u'
            || str[i] == 'A' || str[i] == 'E'
            || str[i] == 'I' || str[i] == 'O'
            || str[i] == 'U') { 
            vowel++; 
        } 
    } 
    cout<<"number of vowel in this striing :- "<<vowel;
    return 0;
}