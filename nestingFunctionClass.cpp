#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void isbin(void);
};

void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: isbin(void){
    read();
    for(int i=0 ; i<s.length() ; i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"incorrect binary formate"<<endl;
            exit(0);
        }
    }
}

int main(){

    binary b;

    // b.read();
    b.isbin();

    return 0;
}