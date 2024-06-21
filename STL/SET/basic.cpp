//Set 

#include<iostream>
#include<set>
using namespace std;
int main()
{
    //for asscending order
    set<int> set1 = {5,8,3,1,9};
    for (int i : set1)
    {
        cout << i <<" ";
    }
    cout <<endl;
    
    // For Descending order
    set<float, greater<float>> set2 = {5.5,5.9,6.9,7,2.8};
    for(float i : set2){
        cout <<i <<" ";
    }
    return 0;
}