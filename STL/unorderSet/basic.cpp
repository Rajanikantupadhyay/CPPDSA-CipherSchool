#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> set1 = {8,4,7,2,6,5};

    set1.insert(20); 

    for(int i : set1){
        cout << i <<" ";
    }
    return 0;
}