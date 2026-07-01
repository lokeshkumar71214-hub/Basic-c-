#include<iostream>
using namespace std;

int larger(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter two integers:";
    cin>>num1>>num2;
    cout<<"The larger number is:"<<larger(num1,num2);
    return 0;
}