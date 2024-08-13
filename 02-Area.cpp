#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int width;
    int area;

    public:
        void rectangle(int l){
            length = l;
        }
        void rectangle(int l, int w){
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
    Rectangle obj;
    obj.rectangle(5);
    obj.sqArea();
    cout<<"Square Area: "<<obj.getSqArea()<<endl;

    obj.rectangle(5,3);
    obj.rectArea();
    cout<<"Rectangle Area: "<<obj.getRectArea()<<endl;
}
