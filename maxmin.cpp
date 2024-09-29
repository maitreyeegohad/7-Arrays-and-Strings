#include<iostream>
using namespace std;
int main()
{
    int max,min,i,n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;                   //number of elements in the array

    int a[n];
    cout << "Enter " << n << " elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    max = a[0];
    min = a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max = a[i];
        }
        if(a[i]<=min)
        {
            min = a[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    cout<<"Min is: "<<min<<endl;
}

/*
OUTPUT: 
Enter the number of elements in the array: 5
Enter 5 elements: 23 54 44 12 21
Max is: 54
Min is: 12
*/
