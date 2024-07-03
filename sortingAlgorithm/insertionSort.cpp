#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
    
}
int main()
{
    int arr[] = {8,9,1,2,4,7,3,5};
    int size = sizeof(arr) / sizeof(int);
    insertionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
    return 0;
}