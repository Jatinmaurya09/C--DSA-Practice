// FInd element On index
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter Row and Column Value ";
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    bool found=false;
    cout<<"Enter Target Value ";
    cin>>target;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(target==arr[i][j]){
                cout<<"Found at index "<<"("<<i<<","<<j<<")";
                found=true;
                break;
            } 
        }
        if(found){
            break;
        }
    } 
    if(!found){
        cout<<"Element not found";
    }
}