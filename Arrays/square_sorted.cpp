#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-2, -1, 0, 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = size-1;
    int result[size];
    int index=size-1;
    while (left <= right and index>=0 )
{
        if (abs(arr[left]) > abs(arr[right]))
        {
            result[index] = (arr[left]*arr[left]);
            left++;
            index--;    
        }
        else {
            result[index]=arr[right]*arr[right];
            index--;
            right--;
        }
    }
    for(int ele: result){
        cout<<ele<<" ";
    }
}