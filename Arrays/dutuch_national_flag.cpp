// Dutch National Flag Problem (0,1,2 Sort)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int left=0;
    int mid=0;
    int right=size-1;
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[left],arr[mid]);
                left++;
                mid++;
            
        }
        else if(arr[mid]==1){
            mid++;
        }
        else {
            swap(arr[mid],arr[right]);
    
            right--;
        }
    }
    for(int ele: arr){
        cout<<ele<<" ";
    }

}