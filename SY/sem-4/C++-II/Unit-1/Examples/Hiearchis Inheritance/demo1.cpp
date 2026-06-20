#include<iostream>
using namespace std;

class Student_Class
{
    protected:
        int roll_no;
        public:
        void set_roll(int r)
        {
            roll_no = r;
        }
        void get_roll()
        {
            cout<<"The roll number is: "<<roll_no<<endl;
        }
};

class Exam : public Student_Class
{
    protected:
        float maths, physics;
        public:
        void set_marks(float m, float p)
        {
            maths = m;
            physics = p;
        }
        void get_marks()
        {
            cout<<"Marks in Maths: "<<maths<<endl;
            cout<<"Marks in Physics: "<<physics<<endl;
        }
};

class Result : public Exam
{
        float percentage;
        public:
            void display()
            {
                get_roll();
                get_marks();
                percentage = (maths + physics) / 2;
                cout<<"Percentage: "<<percentage<<endl;
            }
};

int main()
{
    Result student1;
    student1.set_roll(101);
    student1.set_marks(85.5, 90.0);
    student1.display();
    return 0;
}