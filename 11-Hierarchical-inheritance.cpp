#include<iostream>
using namespace std;

class Person{
    char name[30];

    public:
        void read(){
            cout<<"Enter the name: "<<endl;
            cin>> name;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
        }
};

class Sport: public Person{
    int m = 50;

    public:
        void display(){
            Person::display();
            cout<<m<<endl;
        }
};

class Student: public Person{
    public:
        void display(){
            Person::display();
        }
};

int main(){
    Student st;
    Sport sp;
    st.read();
    sp.read();
    st.display();
    sp.display();
    
    return 0;
}