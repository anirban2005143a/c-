#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float salary = 10;

    employee(int emid){
        id =emid;
    }
    employee(){};

    void display(){
        cout<<"the id is"<<id<<endl;
        cout<<"the salary is"<<salary<<endl;

    }
};
//default visibility mode is privet

class programmer :public employee{
    public:
    programmer(int pmid){
        id = pmid;
    }
    int language =9;
};

int main(){

    programmer p1(2);
    p1.display();
    return 0;
}