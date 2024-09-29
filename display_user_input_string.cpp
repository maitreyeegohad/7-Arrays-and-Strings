#include<iostream>
using namespace std;
int main()
{
    int x[6],i,j;

    cout<<"Enter array : ";
    for(i=0;i<6;i++)
    {
        cin>>x[i];   //input from user 
    }
    cout<<"The entered elements are: ";
    for(j=0;j<6;j++)
    {
        cout<<x[j]<<endl;  //printing the elements
    }
}

/*
OUTPUT: 
Enter array : 45 67 5 65 43 1
45
67
5
65
43
1
*/
