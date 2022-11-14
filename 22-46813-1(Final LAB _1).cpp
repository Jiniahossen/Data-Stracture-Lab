
#include<iostream>
using namespace std;
class Queue{
int queue[8];
int front=-1,rare=-1;

public:
    bool isEmpty()
    {
        if(front==-1 && rare==-1 )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
  bool isFull()
  {
      if(rare==8)
      {
          return true;
      }
      else
      {
          return false;
      }
  }

  void enqueue(int element)
  {
      if(isFull()==true)
      {
          cout<<"Queue is full"<<endl;

      }
      else if(isEmpty()==true)
      {
        front=rare=0;

        queue[rare]=element;

      }
      else
      {
          rare++;
          queue[rare]=element;
      }
  }
  void dequeue()
  {
      if(isEmpty()==true)
      {
          cout<<"Queue is empty"<<endl;
      }
      else if(front==rare)
      {
          front=rare=-1;
      }
      else
      {
          front++;
      }
  }

  void display()
  {
      if(isEmpty()==true)
      {
          cout<<"Can't Display:"<<endl;
      }
      else
      {
          for(int i=front;i<=rare;i++)
          {
              cout<<queue[i]<<endl;
          }
      }
  }



};
int main()
{
    Queue q;
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.display();



}
