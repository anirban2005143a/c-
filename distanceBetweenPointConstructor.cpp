#include<iostream>
#include<cmath>
using namespace std;

class point{
    float x,y;
    friend void distance(point p1,point p2);
    public:
    point(float a,float b){
        x=a;
        y=b;
    }
};

void distance(point p1,point p2){
    float len;
    len = sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));

    cout<<"the distance between point p1 and p2 is "<<len<<endl;
}

int main(){

    point p1(1,1) , p2(1,1);
    distance(p1,p2);

    return 0;
}