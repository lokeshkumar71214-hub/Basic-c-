#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    int words=0;
    for (char ch: str)
    {
        if (ch!=' ')
        {
            words++;
        }

    }
    cout<<"Number of words in the string:"<<words;

}