#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int width;
    int area;

    public:
        Rectangle(){
            length = 0;
            width = 0;
            area = 0;
        }

        void sqArea(int l){
            length = l;
            area = length * length;
        }
        void rectArea(int l, int w){
            length = l;
            width = w;
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
    obj.sqArea(5);
    cout<<"Square Area: "<<obj.getSqArea()<<endl;
    
    obj.rectArea(5,4);
    cout<<"Rectangle Area: "<<obj.getRectArea()<<endl;
}