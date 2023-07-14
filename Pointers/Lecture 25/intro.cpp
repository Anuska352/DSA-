#include<iostream>
using namespace std;

int main(){
   
 

// int i=5;
// int *q=&i;
// cout<<q<<endl;
// cout<<*q<<endl;

// int *p=0;
// p=&i;

// cout<<p<<endl;
// cout<<*p<<endl;

// int num = 5;
// int a = num;
// a++;

// cout<<num<<endl;

// int *p = &num;
// cout<<num<<endl;
// (*p)++;
// cout<<num<<endl;
//Copy Pointer
// int *q = p;
// cout<<q<<endl;
// cout<<*q<<endl;


//important concept
int i=3;
int *t = &i;
// cout<<(*t)++<<endl;
*t=*t+1;
cout<<*t<<endl;

cout<<"before t "<<t<<endl;
t=t+1;
cout<<"after t "<<t<<endl;

}