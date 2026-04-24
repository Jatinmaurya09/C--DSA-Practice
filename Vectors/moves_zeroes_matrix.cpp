// Move all zeroes to the end in a 2D matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row and col: "<<endl;
    cin>>row>>col;
    vector<vector<int>> vec(row, vector<int>(col));
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            cin>>vec[i][j];
        }
    }
    int left=0;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]!=0){
                swap(vec[left/col][left%col],vec[i][j]);
                left++;
            }
    }
}
    for(vector<int> row: vec){
    for(int ele: row){
        cout<<ele<<" ";
    }cout<<endl;
}
}