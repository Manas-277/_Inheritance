//SINGLE INHERITANCE

#include <iostream>;
using namespace std;

class Base
{
    int data1; // Private by default and not inheritable
public:
    int data2;
    void setData();
    int getData1(); // data1 directly cannot be used as it is a private member but through this public function we can call the value of data1
    int getData2();
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Derived : public Base
{ // Class is being derived publically
    int data3;

public:
    void proccess();
    void display();
};

void Derived ::proccess()
{
    data3 = data2 * getData1();
}
void Derived ::display()
{
    cout << "Value od data1 is " << getData1() << endl;
    cout << "Value od data1 is " << data2 << endl;
    cout << "Value od data1 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.proccess();
    der.display();
    return 0;
}
