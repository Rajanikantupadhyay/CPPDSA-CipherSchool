//Maximum Element in arra
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,5,4,8,7,15,14,10};
    int size = sizeof(arr) / sizeof(int);
    int largest = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    cout << "Largest : " <<largest <<endl;
    cout << "Minimunm : " <<min;
    return 0;
}