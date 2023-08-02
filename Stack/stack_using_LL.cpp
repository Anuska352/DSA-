#include<iostream>
#include<list>
using namespace std;

class Node{
    public:
      int data;
      Node* link;

      //Constructor
      Node(int n){
        this -> data = n;
        this -> link = NULL;
      }
};

class Stack{
    Node* top;

    public:
    Stack() {
        top = NULL;
    }

    void push(int data){
        Node* temp = new Node(data);

        if(!temp){
            cout<<"Stack Overflow";
            
        }
    }

}