#include <iostream>
using namespace std;


int main()
{
    int arr1[50], size1 = sizeof(arr1)/sizeof(arr1[0]);



    cout<<"Enter The Size Of The Array: ";
    cin>>size1;

    cout<<endl;

    cout<<"Enter "<<size1<<" Elements Of The Array: "<<endl;

    for(int i=0; i<size1; i++)
    {
        cin>>arr1[i];
    }

    cout<<endl;

    cout<< "Original Array Is: ";

    for(int i=0; i < size1; i++)
    {
        cout <<arr1[i]<<" ";
    }

    cout<<endl;

    cout<<"Elements Of The Array Are: ";

    for(int i=0; i<size1; i++)
    {
        int j;

        for(j=0; j<i; j++)
        {
            if (arr1[i] == arr1[j])
            {
                break;
            }
        }

        if (i == j)
        {
            cout <<arr1[i]<< " ";
        }
    }
}
