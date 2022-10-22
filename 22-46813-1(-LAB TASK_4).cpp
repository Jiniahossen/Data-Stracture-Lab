#include<iostream>
using namespace std;

int main()

{
    int n,i,num,index;
    cout<<"Enter Array size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the Array: ";

    for(i=0; i<n; i++)
        {
          cin>>arr[i];
        }

    cout<<"Enter a value to search :";
    cin>>num;

    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }


    if(arr[i]!=num)
         {
        cout<<"value not available"<<endl;
        }
    else
         {
        cout<<" the value found at Index--> "<<index;
        }

    cout<<endl;
    return 0;
}

