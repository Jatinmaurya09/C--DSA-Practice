#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int row;
    cout<<"Enter Value ";
    cin>>row;
    vector<vector<int>> vec(row, vector<int>(row));
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<vec.size();i++){
        for(int j=i;j<vec[i].size();j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    for(int i=0;i<vec.size();i++){
       reverse(vec[i].begin(),vec[i].end());
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
           cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
}