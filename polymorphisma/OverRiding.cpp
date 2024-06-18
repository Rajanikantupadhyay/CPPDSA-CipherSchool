#include<iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout << "From Base.." << endl;
    }
};
class Derived : public Base{
    void print() override{
        cout << "From Derived" <<endl;
    }
};
int main()
{
    Derived d1;
    Base *ptr = &d1;
    ptr->print();
    return 0;
}