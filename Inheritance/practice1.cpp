#include<iostream>
using namespace std;

class Base
{
public:
    void print(){
        cout << "From Base" << endl;
    }
};
class Derived : public Base
{
public:
    void print(){
        cout << "From Derived";
    }
};


int main()
{
    // Base obj;
    // obj.print();
    // Derived obj;
    // obj.print();
    //By using pointer
    Derived obj;
    Base* ptr = &obj;
    ptr->print();
    return 0;
}