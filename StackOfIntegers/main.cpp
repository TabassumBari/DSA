#include <iostream>
#include"IntegerStack.h"
#include<stack>
using namespace std;


int main()
{
 Stack<int> stack1 ;

 if(stack1.IsEmpty())
 {
     cout<<"Stack is empty"<<endl;
 }

 stack1.Push(5);
 stack1.Push(7);
 stack1.Push(4);
 stack1.Push(2);
 if(!stack1.IsEmpty())
 {
     cout<<"Stack is not empty"<<endl;
 }
 else if(!stack1.IsFull())
 {
     cout<<"Stack is not full"<<endl;
}
cout<<"Stack values"<<endl;
while(!stack1.IsEmpty())
      {
            cout<<stack1.Top()<<"";
            stack1.Pop();

      }
if(stack1.IsFull())
{
    cout<<"Stack is full"<<endl;

}
stack1.Pop();
stack1.Pop();
cout<<"Top item of the stack"<<stack1.Top()<<endl;
return 0;
}
