#include <iostream>
using namespace std;

class item
{
    int itemid;
    int itemPrice;
    int count = 0;

public:
    void read()
    {
        cout << "enter itemid of item no " << count << endl;
        cin >> itemid;
        cout << "enter itemprice of item no " << count << endl;
        cin >> itemPrice;
        count++;
    }
 
    void display()
    {
        for (int i = 0; i < count; i++)
        {
            cout << "the price of itemid " << itemid << " is " << itemPrice << endl;
        }
    }
};

int main()
{

    item a;
    a.read();
    a.read();
    a.read();
    a.display();
    return 0;
}