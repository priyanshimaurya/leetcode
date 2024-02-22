using namespace std;
int main(){
    string str;
    cout<<"Enter a string value :- ";
    cin>>str;
    for(int i=0;str[i]='\0';i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
    cout<<"toggle string is :- "<<str<<endl;
    return 0;
}
C++ Program to toggle string 
