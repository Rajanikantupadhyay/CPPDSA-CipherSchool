#include<iostream>
using namespace std;
string print(string name, int age, int height){
    cout << "My name is : " <<name << endl <<" my age is : " <<age << endl <<" Height is : " <<height;
}
int main()
{
    print("rajanikant",10,5);
    return 0;
}
//! if we give any parametre to default value then we only give to rightest most 