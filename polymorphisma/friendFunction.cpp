#include<iostream>
using namespace std;

class Distance{
    private:
    int meter;

    public:
    Distance(){
        meter = 0;
    }
    friend int increaseDistance(Distance);
};

int increaseDistance(Distance d){
    d.meter = 10;
    return d.meter;
}
int main()
{
    Distance d1;
    cout << increaseDistance(d1);
    return 0;
}