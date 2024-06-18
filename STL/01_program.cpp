#include<iostream>
using namespace std;

template <class T>
class Number{
    private:
    T num;

    public:
    Number(T number){
        num = number;
    }
    T getNum(){
        return num;
    }
};
int main()
{
    Number<int> n1(5);
    Number<float> n2(1.5);
    return 0;
}