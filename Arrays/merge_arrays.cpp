#include<iostream>
using namespace std;

int main(){
    cout<<"Enter size of array 1 ";
    int size1;
    cin>>size1;

    int arr1[size1];
    cout<<"Enter array 1 elements ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    cout<<"Enter size of array 2 ";
    int size2;
    cin>>size2;

    int arr2[size2];
    cout<<"Enter array 2 elements ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    int m=size1;
    int n=size2;
    int result[m+n];

    int i=0,j=0,k=0;

    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            result[k]=arr1[i];
            i++;
        }
        else{
            result[k]=arr2[j];
            j++;
        }
        k++;
    }

    while(i<m){
        result[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n){
        result[k]=arr2[j];
        j++;
        k++;
    }

    for(int i=0;i<m+n;i++){
        cout<<result[i]<<" ";
    }
}