#include<iostream>
using namespace std;

long long power(int base,int exp)
{
    long long result=1;
    for(int i=1;i<=exp;i++)
    {
        result=result*base;
    }
    return result;
}
int main()
{
    int base, exp;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Enter exponent:";
    cin>>exp;
    cout<<base<<"^"<<exp<<"="<<power(base, exp);
    return 0;
}