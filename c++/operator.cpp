#include<iostream>
using namespace std;
int main()
{
    int num1=6,num2=3;
    cout<<num1+num2<<endl;//5
    cout<<num1-num2<<endl;//1
    cout<<num1%num2<<endl;//1
    cout<<num1/num2<<endl;//0
    cout<<num1--<<endl;//4
    cout<<num1++<<endl;//2
//RELATIONAL OPERATOR
    cout<<(num1>num2)<<endl; //true
    cout<<(num1<num2)<<endl;//false
    cout<<(num1==num2)<<endl; //false
    cout<<(num1!=num2)<<endl;//true
    cout<<(num1<=num2)<<endl;//false
    cout<<(num1>=num2)<<endl;//true
//ASSIGNMENT OPERATOR
    cout<<(num1+=10)<<endl;
    cout<<(num1-=5)<<endl;    
    return 0;
}

