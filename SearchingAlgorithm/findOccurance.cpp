#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid -1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastOccurance(int arr[],int size,int key){
    int start = 0; 
    int end = size -1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {2,3,3,3,3,3,3,4};
    int size = 6;
    int key = 3;
    
    int f = firstOccurance(arr,size,key);
    int l = lastOccurance(arr,size,key);
    int finalOc = (l-f) +1;
    cout << "First Occurance : " <<f<<endl;
    cout << "Last Occurance : " <<l<<endl;
    cout << "Total Occurance : " <<finalOc;
    return 0;
}