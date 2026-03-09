#include<iostream>
using namespace std;

class Shape
{
    public:
        void s()
        {
            cout << "Call from First Base class " << endl;
        }
};

class Shape2d : virtual public Shape
{
    public:
        float r;
        void s2()
        {
            cout << "Enter Radius of cyclynder : ";
            cin >> r;
        }
        void sdisplay()
        {
            cout << "Radius is : " << r << endl;
        }
};

class Shape3d : virtual public Shape
{
    public:
        float h;
        void s3d()
        {
            cout << "Enter Hieght of Cylinder : ";
            cin >> h;
        }
        void s3doutput()
        {
            cout << "Hiegth is : " << h << endl;
        }
};

class Cylinder : public Shape2d , public Shape3d
{
    public:
    void cyclinderoutput()
    {
        cout << "Call From Cylinder " << endl;
    }
};

int main()
{
    Cylinder c;
    c.s();
    c.s2();
    c.s3d();
    c.sdisplay();
    c.s3doutput();
    c.cyclinderoutput();

    cin.get();
    cin.get();

    return 0;
}