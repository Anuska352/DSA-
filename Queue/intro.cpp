#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int> d;

    d.push_front(12);
    d.push_back(14);

   

    d.pop_front();
     cout<<d.front() <<endl;
    cout<<d.back() <<endl;
    d.pop_back();

    if(d.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }


    //create a queue
    // queue<int> q;

    // q.push(11);
    // cout<<"Front of queue "<<q.front()<<endl;
    // q.push(15);
    // q.push(13);

    // cout<<"size of queue is "<<q.size()<<endl;

    // q.pop();
    //  cout<<"Front of queue "<<q.front()<<endl;
    // cout<<"size of queue is "<<q.size()<<endl;

    // if(q.empty()){
    //     cout<<"Queue is empty"<<endl;
    // }
    // else{
    //     cout<<"Queue is empty"<<endl;
    // }


}