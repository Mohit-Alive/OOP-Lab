#include<iostream>
using namespace std;

class Employee{
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }  
};

int main(){
    Employee obj1;
    obj1.setSalary(50000);
    cout<<obj1.getSalary()<<endl;

    return 0;
}
