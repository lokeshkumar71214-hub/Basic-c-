#include<iostream>
using namespace std;

int main()
{
    int p,r,t,si;
    cout<<"Enter principal, rate, time:";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"Simple interest is:"<<si;
    return 0;
}