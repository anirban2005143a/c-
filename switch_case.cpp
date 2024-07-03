#include <iostream>
using namespace std;

int main()
{

    char a;
    cout << "enter a charecter" << endl;
    cin >> a;

    switch (a)
    {
    case '+':
        cout << "plus" << endl;
        break;
    case '-':
        cout << "minus" << endl;
        break;
    case '*':
        cout << "multiplication" << endl;
        break;
    case '/':
        cout << "division" << endl;
        break;

    default:
        cout << "wrong" << endl;
        break;
    }

    return 0;
}