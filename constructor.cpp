#include<iostream>
using namespace std;

class anirban{
    int a,b;
    public:
    anirban(int a1,int b1){
        a=a1;
        b=b1;
    }

    void display(){
        cout<<"value of component a and b is "<<a<<" "<<b<<endl;
    }
};


int main(){
    //inplicit declearation
    // anirban c(3,4);

    //explicit declearation
    anirban c = anirban(4,5);
    c.display();

    return 0;
}