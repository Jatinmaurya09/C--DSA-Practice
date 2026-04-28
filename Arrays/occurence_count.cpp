#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size "<<endl;
    cin>>size;
    vector<int> vec(size);
    cout<<"Enter Element "<<endl;
    for(int i=0;i<size;i++)
    {    
        cin>>vec[i];
    }
    int target;
    int occurence=-1;
    cout<<"Enter the target: "<<endl;
    cin>>target;
    int count =0;

    for(int i=0;i<vec.size();i++)
    {
         if(vec[i]==target)
         {
            occurence=i;
            count ++;  
         } 
    }
    cout<<occurence<<endl;
    cout<<"Count: "<<count<<endl;
}