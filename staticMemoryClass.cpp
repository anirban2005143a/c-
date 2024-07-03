#include<iostream>
using namespace std;

class student{
    int roll;
    static int count;

    public:
    void read(){
        cout<<"enter the roll no ";
        cin>>roll;
        count ++;
    }

    void display(){
        cout<<"the roll no of this student is "<<roll<<" and the count is "<<count<<endl;
    }

    static void getcount(){
        cout<<"the count is "<<count<<endl;//can access only static variables
    }
};

int student :: count;//difault value is 0

int main(){

    student anirban ,dipom,aditya;

    anirban.read();
    anirban.display();
    student::getcount();
    
    dipom.read();
    dipom.display();
    student::getcount();

    aditya.read();
    aditya.display();
    student::getcount();

    
    return 0;
}