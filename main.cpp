#include <iostream>
#include <queue>

using namespace std;
class Stack{
private:
    queue<int> q;
public:
    Stack(){
    }
    void push(int value){
    q.push(value);
    int s = q.size();
    for(int i=0;i<s-1;i++){
       q.push(q.front());
       q.pop();
//       cout<<q.front()<<endl;
    }
    }
    void pop(){
    if(q.empty()){
        cout<<"queue is empty"<<endl;
        return;
    }
    q.pop();
    }
    int top(){
        if(q.empty()){
        cout<<"queue is empty"<<endl;
        return 1;
    }
     return q.front();
    }
};


int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(13);
    s.push(14);
    s.pop();
    cout<<s.top()<<endl;


    return 0;
}
