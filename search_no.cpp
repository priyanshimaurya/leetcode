#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,5,7,9,10,13,16,19,23},left,right,mid,target=10;
    mid=0*(10-0)/2;
    while(left<=right){
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]<target){
            left=mid+1;
            break;
        }
        else {
            right=mid-1;
            break;
        }
    }
    cout<<"target found "<<target;
    return 0;
}