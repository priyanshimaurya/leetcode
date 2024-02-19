# include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,4,5,6},i,total,sum=0;
    total=6*(6+1)/2;
    for (i=0;i<6;i++){
        sum=sum+arr[i];
    }
    cout<<"missing number is:-  "<<total-sum<<endl;
}