#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortevenodd(vector<int> &v){
    int left=0;
    int right=v.size()-1;

while (left<right){
    if(v[left]%2==0){
        left++;
    }
    else if(v[right]%2!=0){
        right--;
    }
    else {
        swap(v[left],v[right]);
        left++;
        right--;
    }
}
int mid=left;
    sort(v.begin(),v.begin()+mid);
    sort(v.begin()+mid,v.end());
}


int main(){
    int size;
    cout<<"Enter Size of vector ";
    cin>>size;
    vector<int> v;
    cout<<"Enter vector Elements ";
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortevenodd(v);
  
    for(int ele: v){
        cout<<ele<<" ";
    }
    return 0;
}