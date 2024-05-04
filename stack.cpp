#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    int i=0;
    while(!stack.empty()){
        cout<<"top element: "<<stack.top()<<endl;
        stack.pop();
        i++;
    }
}