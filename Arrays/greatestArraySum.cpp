#include<iostream>
using namespace std;
int maxSubarraySum(int arr[], int size){
    int max = INT16_MIN;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
         sum += arr[i];
         if (sum > max)
         {
            max = sum;
         }
         if (sum < 0)
         {
            sum = 0;
         }
    }
    return max;
}

int main()
{
    int arr[10] = {-2,-8,5,8,2,4,1,1,-1,-1};
    int size = sizeof(arr) / sizeof(int);
    int ans = maxSubarraySum(arr,size);
    cout <<"Maximum Sum of the Array :" <<ans <<endl;
    return 0;
}