#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the size of Row and column: ";
    cin>>row>>col;
    vector<vector<int>> matrices(row, vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if(j==0 or j==i){
                matrices[i][j]=1;
            }
            else{
                matrices[i][j]=matrices[i-1][j]+matrices[i-1][j-1];
            }
            cout<<matrices[i][j]<<" ";
        }cout<<endl;
    }


    // By array
    // int row,col;
    // cout<<"Enter the size of row and col: "<<endl;
    // cin>>row>>col;
    // int arr[row][col];
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<=i and j<col;j++){
    //         if(j==0 || j==i){
    //             arr[i][j]=1;
    //         }
    //         else{
    //             arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
    //         }
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
}