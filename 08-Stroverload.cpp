#include <iostream>
using namespace std;
 

class Stroverload {
private:
int i;
 

public:
 

Stroverload(int in){
i = in;
}
 

Stroverload& operator++(){
++i;
return *this;
}
Stroverload& operator++(int){
++i;
return *this;
}
 

void display(){
cout << i << endl;
}
};
 

 

int main(){
Stroverload i1(3);
 

cout << "Before increment: ";
i1.display();
 

cout << "After increment: " << endl;
    ++i1;
i1.display();
    i1++;
i1.display();
 

 

}