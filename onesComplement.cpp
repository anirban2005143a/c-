#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;

public: 
    void read(){
        cout<<"enter your binary number"<<endl;
        cin>>s;
    }

    int isbin(){
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"invalid binary number"<<endl;
                exit(0);
            }
        }
        display();
    }

    void display(){
        cout<<"your number is " ;
        for(int i=0;i<s.length();i++){
            cout<<s.at(i);
        }
        cout<<endl;
    }

    void ones_complement(){

        isbin();
        for(int i=0;i<s.length();i++){
            if(s.at(i) =='0'){
                s.at(i) ='1';
            }
            else{
                s.at(i) ='0';
            }
        }
        display();
    }
};

int main(){
    binary b;
    b.read();
    b.ones_complement();

    return 0;
}