#include<iostream>
using namespace std;

class Shape{
   
    protected:
        int shape_length;
        int shape_width;
       
    public:
         void getLength(int l){
            shape_length = l;
        }

        void getWidth(int w){
            shape_width = w;
        }

        virtual int getPerimeter() = 0;
       
};

class Rectangle : public Shape{
    public:
        int getPerimeter(){
            return (2*(shape_length + shape_width));
        }

};


class square: public Shape{

     public:
        int getPerimeter(){
            return (4*shape_length);
        }
        friend int circlePerimeter (square obj);
       
};

int circlePerimeter(square sq){
    int radius = sq.shape_length;
    return (2* sq.shape_length* 3.14);
}

int main(){
    square sqobj;
    Rectangle rectobj;
    rectobj.getLength(10);
    rectobj.getWidth(5);
    cout<<rectobj.getPerimeter()<<endl;
    sqobj.getLength(10);
    cout<<circlePerimeter(sqobj)<<endl;

    return 0;
}