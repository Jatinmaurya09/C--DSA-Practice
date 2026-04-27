#include<iostream>
using namespace std;
int main(){
    int arr[]={5,10,15,20,26};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool found=false;
    int left=0,right=1;
    int target =10;
    while(left<size and right<size){
        int diff = abs(arr[left]-arr[right]);
        if(diff==target){
            cout<<arr[left]<<" "<<arr[right];
            found =true;
            break;
        }
        else if(diff<target){
            right++;
        }
        else{
            left++;
        }
    }
    if(!found){
        cout<<"NO ";
    }
}