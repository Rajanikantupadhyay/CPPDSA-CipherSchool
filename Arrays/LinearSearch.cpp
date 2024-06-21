#include<iostream>
using namespace std;

void linearSearch(int arr[], int val, int size){
    for (int i = 0; i < size; i++)
    {
        if (val == arr[i])
        {
            cout << "Element found on the index " << i+1 <<endl;
        }
    }
    
}
int main()
{
    int arr[] = {5,8,7,9,6,4,2,1};
    int size = sizeof(arr) / sizeof(int);
    int val;

    cout << "Enter the Value you want to search : " ;
    cin >> val;

    linearSearch(arr, val, size);
    return 0;
}