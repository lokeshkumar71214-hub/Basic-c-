#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    
    if(marks>=90 && marks<=100)
    {
    cout<<"Grade is A+";
    }
    else if(marks>=80)
    {
    cout<<"Grade is A";
    }
    else if(marks>=70)
    {
    cout<<"Grade is B";
    }
    else if(marks>=60)
    {
    cout<<"Grade is C";
    }
    else if(marks>=50)
    {
    cout<<"Grade is D";
    }
    else
    {
    cout<<"Grade is Fail";
    }
}