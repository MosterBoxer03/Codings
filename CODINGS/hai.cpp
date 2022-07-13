#include <iostream>
using namespace std;
//limit size of browser stack to 100
#define MAX_SIZE 100
class Stack {
 public:
  int top;
  int size[MAX_SIZE];
  
  //constructor
  Stack() {
   //no top yet
   top = -1;
  }
  //function declarations
  bool push(int page);
  int pop();
  bool is_empty();
};
//Functions created below
//are we empty?
bool Stack::is_empty() {
 return (top < 0);
}
//pop from stack (back button)
int Stack::pop() {
 if(top < 0) {
  cout << "Nothing here...";
  return 0;
 } else {
  int page = size[top--];
  return page;
 }
}
//push onto stack
bool Stack::push(int page) {
 if(top >= MAX_SIZE) {
  cout << "Can't anymore, Jim";
  return false;
 } else {
  size[++top] = page;
  return true;
 }
}
int main( ) {
 //new stack
 Stack pages;
 pages.push(5);
 pages.push(10);
 pages.push(15);
 pages.push(20);
 
 cout << " Page " << pages.pop() << " popped from stack " << endl;
 cout << " Page " << pages.pop() << " popped from stack " << endl;
 return 0;
} 