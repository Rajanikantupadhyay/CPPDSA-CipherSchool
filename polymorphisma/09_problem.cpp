#include<iostream>
using namespace std;

class operatorOverloading{
    int value;
    public:
    operatorOverloading(){
        value = 5;
    }
    int operator++(){
        value += 10;
    }
    void display(){
        cout << value << endl;
    }
};
int main()
{
    operatorOverloading obj;
    ++obj;
    obj.display();
    return 0;
}