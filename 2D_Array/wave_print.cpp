#include<iostream>
using namespace std;

void wave_print(int arr[][3],int row,int col){
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 1)
        {
            for (int i = row-1; i >= 0; i--)
            {
                cout <<arr[i][j] <<" ";
            }
                
        }else
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] <<" ";
            }
        }
    }
}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    wave_print(arr,3,3);
    return 0;
}