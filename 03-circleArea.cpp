#include <iostream>
using namespace std;

class Circle{
    float radius;
    const float PI = 3.14;
    
    public:
        static int count;
        
        Circle(){
            radius = 0;
        }

        Circle(float r){
            radius = r;
        }
        
        float circleArea() const{
            return PI*radius*radius;
        }
};
int Circle:: count = 1;

int main() {
    Circle obj(5);
    cout<<obj.circleArea()<<endl;

    return 0;
}
