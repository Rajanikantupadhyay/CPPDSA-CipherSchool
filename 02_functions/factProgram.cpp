#include<iostream>
using namespace std;

void fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of the given value is : " <<fact;
    
}
int main()
{
    int num;
    cin >> num;
    fact(num);
    return 0;
}