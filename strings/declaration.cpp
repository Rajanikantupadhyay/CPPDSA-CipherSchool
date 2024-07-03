#include<iostream>
#include<string>
using namespace std;
int getLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char arr[100];
    cout <<"Enter Your Name : ";
    cin.getline(arr,100);

    // cout <<arr;Ra
    // int count = 0;
    // int i = 0;
    // while (arr[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    cout << "Length of your name is : " <<getLength(arr);
    return 0;
}   