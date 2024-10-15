#include<iostream>
using namespace std;

class Person{
    char name[30];

    public:
        void read(){
            cout<<"Enter name: ";
            cin>>name;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
        }
};

class Sport{
    int m = 50;
    public:
        void display(){
            cout<<"Marks in sport: "<<m<<endl;
        }
};

class Student : public Person, public Sport{
    
    public:
        void display(){
            Person::display();
            Sport::display();
        }
};

int main(){
    Student s;
    
    s.read();
    s.display();

    return 0;
}
