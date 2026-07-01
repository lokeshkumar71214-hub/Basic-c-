#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    int count=0;
    for (char ch: str)
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            count++;
        }

    }
    cout<<"Number of vowels in the string:"<<count;
    return 0;
    
}