#include<iostream>
using namespace std;
int main()
{
    int x[6],i,sum=0,avg;

    cout<<"Enter array : ";
    for(i=0;i<6;i++)
    {
        cin>>x[i];   //input from user 
    }

    cout<<"The entered elements are: "<<endl;
    for(i=0;i<6;i++)
    {
        cout<<x[i]<<endl;  //printing the elements
    }

    for(i=0;i<6;i++)
    {
        sum=sum+x[i];
    }
    cout<<"The sum of elements is: "<<sum<<endl;
    avg=sum/6;
    cout<<"The average of elements is: "<<avg<<endl;
}

/*
OUTPUT: 
Enter array : 3 6 5 4 2 1
The entered elements are: 
3
6
5
4
2
1
The sum of elements is: 21
The average of elements is: 3
*/
