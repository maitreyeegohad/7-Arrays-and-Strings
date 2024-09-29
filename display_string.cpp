#include<iostream>
using namespace std;
int main()
{
    char str1[4] = "C++";
    char str2[] = {'s','+','+','\0'};
    string str3 = "C++";

    cout<<str1<<endl<<str2<<endl<<str3;
}

/*
OUTPUT: 
C++
s++
C++
*/
