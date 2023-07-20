#include<iostream>
#include<string.h>
using namespace std;

class Hero{

   //properties
    private:
    int health;
     
     public:
    char level;
    char *name; 
   
   
    //parameterised
    Hero(int health){
        cout<<"this "<<this<<endl;
       this -> health = health; 
    }

    Hero(int health,char level){
       this -> level = level;
       this -> health = health; 
    }

    //copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"Copy constructor called"<<endl;
       this->health = temp.health;
       this->level = temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"Name: "<<this->name<<" ,";
        cout<<"health: "<<this->health<<" ,";
        cout<<"level: "<<this->level<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    } 

    void setHealth(int h){
       
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Babbar";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor

    Hero hero2(hero1);
    hero2.print();




    
//     //object created statically
//     Hero ramesh(10);
    
//     ramesh.print();
   
//    //dynamically
//    Hero *h = new Hero(11);
//    h->print();

//    Hero temp(22,'B');
//    temp.print();










    /*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;

    //dynamically
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout<<"level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;

     cout<<"level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;

    //creation of Object
    // Hero ramesh;
    // cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    // ramesh.setHealth(70);//use setter

    //ramesh.health =70;
    // ramesh.level = 'A';
    
    // cout<<" health is : "<<ramesh.getHealth()<<endl;
    // cout<<" level is : "<<ramesh.level<<endl;


 
    // cout<<"size of : "<<sizeof(h1)<<endl;

    */
}