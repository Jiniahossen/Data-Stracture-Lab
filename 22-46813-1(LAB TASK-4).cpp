#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter Array size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of the Array: ";

    for(i=0; i<n; i++)
        {
          cin>>arr[i];
        }

    cout<<endl;
    cout<<"Array : ";
    for(i=0; i<n; i++)
        {
          cout<<arr[i]<<" ";;
        }
        cout<<endl;
        cout<<endl;


    for(i=0; i<n-1; i++)
        {
        for(j=0; j<n-i-1; j++)
            if (arr[j] >arr[j+1])
            swap(arr[j], arr[j+1]);
        }

    cout<<"Bubble sort: ";
    for(i=0; i<n; i++)
        {
          cout<<arr[i]<<" ";;
        }

        cout<<endl;
    }
