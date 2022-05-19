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




//MULTIPLE INHERITANCE

#include<iostream>;
using namespace std; 

//Syntax for inheriting in multiple inheritance
// // class Derived: visibility-mode base1 , visibility-mode base2{
//     class body of Derived class
// };

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int = b ;
    }
};

class Base3{
    protected:
    int base3int;
    public:
    void set_base3int(int c){
        base3int = c;
    }
};

class Derived:public Base1 , public Base2 , public Base3{
    public:
    void show(){
        cout<<"The Value of Base1 is "<<base1int<<endl;
        cout<<"The Value of Base2 is "<<base2int<<endl;
        cout<<"The Value of Base3 is "<<base3int<<endl;
        cout<<"The Sum of Base1, Base2 and Base3 is "<<(base1int+base2int+base3int)<<endl;
    }
};

int main(){
    Derived Khushi;
    Khushi.set_base1int(23);
    Khushi.set_base2int(24);
    Khushi.set_base3int(25);
    Khushi.show();
    return 0;
}
