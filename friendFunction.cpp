#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    // friend complex addcomplex(complex c1 , complex c2);
    // friend int calculator ::addrealcomplex(complex c1, complex c2);
    friend class calculator;
public:

    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    // void addcomplex(complex c1 , complex c2){
    //     a = c1.a + c2.a;
    //     b = c1.b + c2.b;

    //     cout<<a<<" "<<b<<endl;
    // }

    void display()
    {
        cout << "the ans is " << a << " + " << b << "i" << endl;
    }
};

// complex addcomplex(complex c1 , complex c2){
//     complex c3;
//     c3.setdata((c1.a+c2.a) , (c1.b+c2.b));
//     c3.display();
// }

class calculator
{
public:
    int addrealcomplex(complex c1, complex c2)
    {
        return (c1.a + c2.a);
    }
};

int main()
{

    complex c1, c2;
    c1.setdata(4, 5);
    c2.setdata(2, 3);

    calculator cal;

    int res = cal.addrealcomplex(c1, c2);
    cout<<res<<endl;

    return 0;
}