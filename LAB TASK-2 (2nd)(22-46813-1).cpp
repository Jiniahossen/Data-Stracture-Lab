#include<iostream>
using namespace std;

int main (){

int n,x;
cout<<"enter first array  size :";
cin>>n;
cout<<"enter second array  size :";
cin>>x;
cout<<endl;
int a[n];
int b[x];

cout<<"enter first array elements :";
for (int i=0;i<n;i++)
{
    cin>>a[i];
}

cout<<"enter second array elements :";
for (int i=0;i<x;i++)
{
    cin>>b[i];
}

cout<<" Common Elements of these two array:"<<endl;

for(int i=0; i<n;i++)
{
    for (int j=0;j<x;j++)
    {
        if (a[i]==b[j])
        {
            cout<<a[i]<<" ";
            break;
        }
    }
}
}
