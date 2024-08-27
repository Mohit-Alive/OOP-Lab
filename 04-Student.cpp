#include <iostream>
using namespace std;
class Marks
{

    int rno;
    float percentage;

public:
    Marks()
    {
        rno = 0;
        percentage = 0.0;
    }
    Marks(int r, float p)
    {
        rno = r;
        percentage = p;
    }
    void printMarks()
    {
        cout << rno << endl;
        cout << percentage << endl;
    }
};
class Student
{
    Marks Mobj;
    string name;

public:
    void setName()
    {
        cin >> name;
    }
    void getResult(Marks obj)
    {
        Mobj = obj;
        cout << name;
        Mobj.printMarks();
    }
};

int main()
{
    Marks mk[5] = {Marks(100, 80), Marks(101, 56), Marks(102, 87), Marks(61, 00), Marks(91, 05)};
    Student st[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "ENTER THE NAME";
        st[i].setName();
    }
    for (int i = 0; i < 5; i++)
    {
        st[i].getResult(mk[i]);
    }
    return 0;
}