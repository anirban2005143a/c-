#include<iostream>
using namespace std;

int count =0;

class num{
    public:
    num(){
        count++;
        cout<<"constuctor is started with count "<<count<<endl;
    }
    ~num(){
        cout<<"distructor is started with count "<<count<<endl;
        count--;
    }
};

int main(){

    num n1;
    {
        cout<<"block is started"<<endl;
        num n2,n3;
        cout<<"block is ended"<<endl;
    }
    return 0;
}