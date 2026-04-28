#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the value of row and col "<<endl;
    cin>>row>>col;
    cout<<"Enter the Element "<<endl;
    vector<vector<int >> vec(row,vector<int>(col));
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cin>>vec[i][j];
        }
    }
    //column wise prefix sum
    for(int i=1;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            vec[i][j]+=vec[i-1][j];
        }
    }
    //row wise prefix sum
    for(int i=0;i<vec.size();i++){
        for(int j=1;j<vec[i].size();j++){
            vec[i][j]+=vec[i][j-1];
        }
    }
       int l1,l2,r1,r2;
       cout<<"Enter Coordinate "<<endl;
       cin>>l1>>r1>>l2>>r2;
       int top_sum=0,left_sum=0,topleft_sum=0;
       if(l1!=0) {
        top_sum=vec[l1-1][r2];
       }
       if(r1!=0){
        left_sum=vec[l2][r1-1];
       }
       if(l1!=0 && r1!=0){
        topleft_sum=vec[l1-1][r1-1];
       }
    int sum=vec[l2][r2]-top_sum-left_sum+topleft_sum;
       for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
       }
       cout<<"Sum "<<sum;
}