#include <bits/stdc++.h>
using namespace std;
  
struct Queue{
  stack<int> a, b;
  void enQueue(int x){
    while (!a.empty()){
      b.push(a.top());
      a.pop();
    }
    a.push(x);
    while (!b.empty()){
      a.push(b.top());
      b.pop();
    }
  }
  int deQueue(){
    if (a.empty()){
      cout << "The size is empty";
      exit(0);
    }
    int x= a.top();
    a.pop();
    return x;
  }
};

int main(){
  Queue c;
  c.enQueue(1);
  c.enQueue(2);
  c.enQueue(3);
  c.enQueue(4);
  c.enQueue(5);
  cout<< c.deQueue()<< endl;
  cout<< c.deQueue()<< endl;
  cout<< c.deQueue()<< endl;
  cout<< c.deQueue()<< endl;
  cout<< c.deQueue();
  return 0;
}