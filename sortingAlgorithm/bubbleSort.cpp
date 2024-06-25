#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for (int  i = size-1; i > 0; i--)
    {
        int hasSwapped = 0;
        for (int j = 0; j <= i-1; j++)
        {
            if (arr[j] <arr[j+1])
            {
                swap(arr[j+1], arr[j]);
                hasSwapped++;
            }
        }
        if (hasSwapped == 0)
        {
            break;
        }
    }
    
}
int main()
{
    int arr[] = {2,3,1,6,8,5,9,7};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
    selectionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}