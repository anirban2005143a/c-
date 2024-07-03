#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void swap(c1 *p1 , c2 *p2);
    public:
    void setdata(int n){
        val1 = n;
    }
    void display(){
        cout<<"value of c1 is "<<val1<<endl;
    }
};

class c2{
    int val2;
    friend void swap(c1 *p1 , c2 *p2);
    public:
    void setdata(int n){
        val2 = n;
    }
    void display(){
        cout<<"value of c2 is "<<val2<<endl;
    }
};

void swap(c1 *p1 , c2 *p2){
    int temp = (*p1).val1;
    (*p1).val1 = (*p2).val2;
    (*p2).val2 = temp;

}

int main(){
    c1 a;
    c2 b;

    a.setdata(5);
    a.display();

    b.setdata(10);
    b.display();

    swap(&a , &b);

    a.display();
     b.display();

    return 0;
}