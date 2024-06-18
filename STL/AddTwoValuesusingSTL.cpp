#include<iostream>
using namespace std;
template <class T>

class Add{
    private:
    T num1,num2;
    public:
    Add(T n1, T n2){
        this->num1 = n1;
        this->num2 = n2;
    }
    T getSum(){
        return num1 + num2;
    }   
};

int main()
{
    Add <int> obj1(5,5);
    Add <float> obj2(5.5,5.5);
    cout << "Sum of the Int = " << obj1.getSum() <<endl;
    cout << "Sum of the Float = " << obj2.getSum() <<endl;
    return 0;
}