#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    int i=0;
    while(!queue.empty()){
        cout<<"Elements are: "<<queue.front()<<endl;
        queue.pop();
        i++;
    }
}