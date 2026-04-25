#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter Row and Column ";
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int size=row*col;
    int max=INT16_MIN;
    int second=-1;
    for(int i=0;i<size;i++){
        if(arr[i/col][i%col]>max){
            second=max;
            max=arr[i/col][i%col];
        }
        else if(arr[i/col][i%col]>second && arr[i/col][i%col]!= max){
            second=arr[i/col][i%col];
        }
    }
    cout<<"Largest: "<<max<<endl;
    cout<<"Second Largest: "<<second<<endl;
}