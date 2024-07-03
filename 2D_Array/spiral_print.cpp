#include<iostream>
using namespace std;

void spiral_print(int arr[][5],int row, int col){
    int topRow = 0;
    int bottomRow = row - 1; 
    int leftColumn = 0;
    int rightColumn = col - 1;
    while ( topRow <= bottomRow && leftColumn <= rightColumn)
    {
        //printing top row
        for (int i = leftColumn; i <= rightColumn; i++)
        {
            cout << arr[topRow][i] <<" ";
        }
        cout<<endl;
        topRow++;

        //printing right column
        for (int i = topRow; i <= bottomRow; i++)
        {
            cout << arr[i][rightColumn] <<" ";
        }
        cout<<endl;
        rightColumn--;

        //printing bottom row
        for (int i = rightColumn; i >= leftColumn; i--)
        {
            cout << arr[bottomRow][i] <<" ";
        }
        cout<<endl;
        bottomRow--;

        //printing left column
        for (int i = bottomRow; i >= topRow; i--)
        {
            cout << arr[i][leftColumn] <<" ";
        }
        cout<<endl;
        leftColumn++;
    }
}
int main()
{
    int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    spiral_print(arr,5,5);
    return 0;
}