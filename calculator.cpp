#include<iostream>
using namespace std;
int main()
{
    string ch;
    do
    {
    char oper;
    cout<<"enter any operator to perform the task,like a+b,a-b,a*b,a/b:"<<endl;
    cin>>oper;
    float num1;
    cout<<"enter number1:"<<endl;
    cin>>num1;
    float num2;
    cout<<"enter number2:"<<endl;
    cin>>num2;
    switch(oper)
    {
    case '+':
        cout<<num1<<oper<<num2<<"="<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1<<oper<<num2<<"="<<num1-num2<<endl;
        break;
    case '*':
        cout<<num1<<oper<<num2<<"="<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1<<oper<<num2<<"="<<num1/num2<<endl;
        break;
    default:
        cout<<"Error found"<<endl;
        break;
    }
    cout<<"do you want to exit:"<<endl;
    cin>>ch;
    }while(ch!="yes");
    return 0;
}
