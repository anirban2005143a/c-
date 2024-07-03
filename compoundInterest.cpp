#include<iostream>
using namespace std;

class bankinvest{
    int principle;
    int year;
    float interest;
    float returnvalue;

    public:
    bankinvest(int p,int y,float r){
        principle =p;
        year =y;
        interest =r;
        returnvalue = principle;

        for(int i=1;i<=y;i++){
            returnvalue = returnvalue * (1+interest);
        }
    }

    bankinvest(int p,int y,int R){
        principle =p;
        year =y;
        interest =float(R)/100;
        returnvalue = principle;

        for(int i=1;i<=y;i++){
            returnvalue = returnvalue * (1+interest);
        }
    }

    void show(){
        cout<<"the return value of principle ammount "<<principle<<" for "<<year<<" years is "<<returnvalue<<endl;
    }
};

int main(){


    int p,y,R;
    float r;

    cout<<"enter the p , y ,r "<<endl;
    cin>>p>>y>>r;

    bankinvest b1(p,y,r);
    b1.show();

    cout<<"enter the p , y ,R "<<endl;
    cin>>p>>y>>R;

    bankinvest b2(p,y,R);
    b2.show();

    return 0;
}