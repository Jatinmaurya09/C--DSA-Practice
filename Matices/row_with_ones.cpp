//Row with most one
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the Row and Column ";
    cin>>row>>col;
    vector<vector<int>> vec(row ,vector<int>(col));
    cout<<"Enter the Element ";
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cin>>vec[i][j];
        }
    }
    int maxones=INT16_MIN;
    int maxofrows=-1;
    int column=vec[0].size();
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]==1){
            int numofones= column-j;
            if(numofones>maxones){
                maxones=numofones;
                maxofrows=i;
            }
            break;
            }
        }
    }
    cout<<"Max Row with ones is "<<maxofrows;
}
