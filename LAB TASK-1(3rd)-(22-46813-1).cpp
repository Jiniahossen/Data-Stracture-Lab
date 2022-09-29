#include<iostream>
using namespace std;
 void ODD(int x,int y)
 {
     for(int i=x;i<=y;i++)
     {
         if(i%2!=0)
         {
             cout<<i<<" ";
         }
     }
 }
int main()
{
    int a,b;
    cin>>a>>b;
    ODD(a,b);
}
