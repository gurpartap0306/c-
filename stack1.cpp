#include<iostream>
using namespace std;

#define max 10

class stack{
private:
  int arr[max];
  int top;

public:
  stack(){
    top=-1;
  }
  void push(int a){
    if(top==max-1){
      cout<<"stack is full"<<endl;
      return;
    }
    top++;
    arr[top]=a;
  }
  int pop(){
    if(top==-1){
      cout<<"stack is empty";
      return NULL;
    }
    top--;
    return arr[top+1];
  }
};
int main(){
  stack s;
  s.push(3);
  int a = s.pop();
  cout<<a<<endl;
  return 0;
}
