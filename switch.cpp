#include<iostream>
using namespace std;

int main(){
    
    //char button;
    //cout<<"input your button"<<endl;
    //cin>>button;

    //if (button=='a')
    //{
   //     cout<<"hello"<<endl;
   // }
   // else if (button=='b')
   // {
   //   cout<<"namastye"<<endl;
  //  }
   // else if (button=='c')
   // {
    //  cout<<"how are you"<<endl;
   // }
   // else if (button=='d')
   // {
  //    cout<<"good morning"<<endl;
   // }
   // else if (button=='e')
    //{
   //   cout<<"how can i help you"<<endl;
  //  }
    //switch (button)
    //{
    //case'a':
   //     cout<<"hello"<<endl;
    //    break;
    //case'b':
    //    cout<<"namastye"<<endl;
    //    break;
    //case'c':
    //    cout<<"how are you"<<endl;
     //   break;
    //case'd':
   //     cout<<"good morning"<<endl;
    //    break;
    
   // default:
  //  cout<<"i still learning more!"<<endl;
   //     break;
   // }
   
    int n1,n2;
    cout<<"input two numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<" input an operator"<<endl;
    cin>>op;
    
    
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;

    default:
    cout<<"enter another operator"<<endl;
        break;
    }


    return 0;
}