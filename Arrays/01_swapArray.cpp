//Swap the array with zeros must be on the end 

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,0,5,6,9,0};
    int size = sizeof(arr) / sizeof(int);
    int temp[size] = {0};
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
    
    return 0;
}