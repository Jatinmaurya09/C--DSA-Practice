#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row and col "<<endl;
    cin>>row>>col;
    vector<vector<int>> vec(row,vector<int>(col));
    cout<<"Enter the value "<<endl;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cin>>vec[i][j];
        }
    }
    //prefix sum 
    for(int i=0;i<vec.size();i++){
        for(int j=1;j<vec[i].size();j++){
            vec[i][j]+=vec[i][j-1];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter Coordinates "<<endl;
    cin>>l1>>r1>>l2>>r2;
    int sum=0;

    // calculate with coordinate
    for(int i=l1;i<=l2;i++){
        if(r1!=0){
            sum+=vec[i][r2]-vec[i][r1-1];
        }else{ 
            sum+=vec[i][r2];
        }
        }
        //print matrix of prefix sum
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                cout<<vec[i][j]<<" ";
            }cout<<endl;
        }
    cout<<"Sum "<<sum;
}