//Transpose a matrix
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row and col: "<<endl;
    cin>>row>>col;

    int arr[row][col];
    int result[col][row];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){  // use i instead of 0 , if use swap function
            result[i][j]=arr[j][i];
            cout<<result[i][j]<<" ";
            //or
            // swap(arr[i][j],arr[j][i]);
        }cout<<endl;
    }
    // for(int i=0;i<row;i++){      // use this if use swap function
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
}