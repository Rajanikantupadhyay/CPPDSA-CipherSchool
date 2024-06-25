#include<iostream>
using namespace std;
void selectionSort(int arr[], int size){
    int indMin;
    for (int i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main()
{
    int arr[7] = {1,5,8,2,18,10,6};
    int size = 7;
    selectionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    
    return 0;
}