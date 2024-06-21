#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return true;
        }
        
        if( key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return false;
}
int main()
{
    int arr[] = {1,5,9,7,2,6,4};
    int size = sizeof(arr) / sizeof(int);
    sort(arr, arr+size);

    int key = 1;
    bool res = binarySearch(arr, size, key);
    if(res){
        cout << "Value found.";
    }else{
        cout << "Not Found";
    }
    return 0;
}