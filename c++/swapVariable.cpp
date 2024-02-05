#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"You enterted value for X and Y: "<<x<<y<<endl;
    int z;      //so you need take 3rd varible to swap the values
    z=x;
    x=y;
    y=z;
    cout<<"After Swaping X value: "<<x<<endl;
    cout<<"after swaping Y value: "<<y<<endl;
    return 0;
}