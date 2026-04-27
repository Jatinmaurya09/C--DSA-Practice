#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={-1,-2,3,4,-1,5,-5,6,-7};
    int left=0;
    int right=v.size()-1;
    while(left<right){
        if(v[left]<0){
            left++;
        }
        else if(v[right]>0){
            right--;
        }
        else{
            swap(v[left],v[right]);
            left++;
            right--;
        }
        }  
        for(int ele: v){
            cout<<ele<<" ";
        }
}


