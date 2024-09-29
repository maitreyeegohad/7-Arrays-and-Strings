#include<iostream>
using namespace std;
int main()
{
    int x[5],i,j,key=25,a=0;

    cout<<"Enter array elements: ";
    for(i=0;i<5;i++)
    {
        cin>>x[i];
    }

    for(j=0;j<5;j++)
    {
        if(key==x[j])
        {
            a=a+1;
            cout<<"Key is present at "<<j<<endl;
        }
    }
    if(a==0)
    {
        cout<<"key is not present in the array";
    }
}

/*
OUTPUT:
Enter array elements: 1 2 4 6 5
key is not present in the array

Enter array elements: 1 43 35 25 6
Key is present at 3
*/
