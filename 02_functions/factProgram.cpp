#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    int num = fact(n);
    int dem = fact(r) * fact(n-r);
    return num/dem;
}
int main()
{
    int num;
    cin >> num;
    fact(num);
    return 0;
}