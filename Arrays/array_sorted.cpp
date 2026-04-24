#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row and col: "<<endl;
    cin>>row>>col;
    vector<vector<int>>vec(row, vector<int>(col));
    bool so=true;
    cout<<"Enter the value: "<<endl;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
             cin>>vec[i][j];   
        }
    }
    int sorted= vec[0][0];
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(i==0 && j==0){
                continue;
            }
            if(vec[i][j]<sorted){
                so=false;
            }
                sorted=vec[i][j];            
        }
    }
    if(so){
        cout<<"Sorted ";
    }
    else{
        cout<<"Not Sorted ";
    }
}