#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int width;
    int area;

    public:

        Rectangle(int l){
            length = l;
        }
        Rectangle(int l, int w){
            length = l;
            width = w;
        }

        void sqArea(){
            area = length * length;
        }
        void rectArea(){
            area = length * width;
        }
        int getSqArea(){
            return area;
        }
        int getRectArea(){
            return area;
        }

};

int main(){
    Rectangle obj(5);
    obj.sqArea();
    cout<<"Square Area: "<<obj.getSqArea()<<endl;

    Rectangle obj2(5,6);
    obj2.rectArea();
    cout<<"Rectangle Area: "<<obj2.getRectArea()<<endl;
    

}