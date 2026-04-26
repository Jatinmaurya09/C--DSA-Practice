#include<iostream>
using namespace std;

int main(){
    int arr[] = {-2,-1,0,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 0;

    for(int i=0; i<size; i++){

        if(i>0 && arr[i]==arr[i-1]) continue;

        int left = i+1;
        int right = size-1;

        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];

            if(sum == target){
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;

                int leftval = arr[left];
                int rightval = arr[right];

                while(left < right && arr[left] == leftval) left++;
                while(left < right && arr[right] == rightval) right--;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
    }
}