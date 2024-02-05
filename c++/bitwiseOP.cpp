#include<iostream>
using namespace std;
int main()
{
    int num1=4;//100
    cout<<(num1<<1)<<endl;//1000=>8
    cout<<(num1>>1)<<endl;//010=>2
    int num2=6;//110
    cout<<(num1|num2)<<endl;//110=>6
    cout<<(num1&num2)<<endl;//100=>4
    cout<<(num1^num2)<<endl;//010=>2
    return 0;
}

