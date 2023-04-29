#include <iostream>
#include"ParenthesisBalance.h"
#include<stack>
using namespace std;
bool IsBalancedParentheses(string ParenthesesString){

 stack<char> s1;
    for (char c : ParenthesesString) {
        if (c == '(') {
            s1.push(c);
        }
        else if (c == ')') {
            if (s1.empty()) {
                return false;
            }
            s1.pop();
        }
    }
    return s1.empty();
}


int main()
{
  string ParenthesesString;
  cout<<"Enter a string of parentheses"<<endl;
  getline(cin,ParenthesesString);
  if(IsBalancedParentheses(ParenthesesString))
  {
      cout<<"Balanced"<<endl;

  }
  else{
    cout<<"Not balanced"<<endl;

  }
  return 0;

}
