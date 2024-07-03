//creating and initializing two dimensional array
#include<iostream>
using namespace std;
int main()
{
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //user input row vise
    // int arr[3][4];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    
    //user input column vise
    int arr[3][4];
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i][j];
        }
    }

    //display
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << arr[j][i] <<" ";
        }
        cout <<endl;
    }
    
    return 0;
}