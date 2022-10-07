# include<iostream>
using namespace std;
struct student{
    string id;
    int year;
    double salary;
};
int main(){
    struct student a[10];
    for(int i=0;i<10;i++){
        cout<<"Employee Number : "<<i+1<<endl;
        cout<<"ID : ";
        cin>>a[i].id;
        cout<<"Joining year : ";
        cin>>a[i].year;
        cout<<"salary : ";
        cin>>a[i].salary;
    }
    cout<<"All the employees ID whose has joined before 2009"<<endl;
    for(int i=0;i<10;i++){
        if(a[i].year<2009) {
            cout << "ID : " << a[i].id << endl;
        }else{
            continue;
              }
    }
    cout<<"All the employees ID who has salary more then 20,000"<<endl;
    for(int i =0;i<10;i++)
    {
        if(a[i].salary>20000){
            cout<<"ID : "<<a[i].id<<endl;
        }else{
            continue;
        }
    }
}
