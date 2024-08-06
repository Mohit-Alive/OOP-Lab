#include<iostream>
using namespace std;

class employee{
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
    employee obj1;
    obj1.setSalary(50000);
    cout<<obj1.getSalary()<<endl;

    return 0;
}
