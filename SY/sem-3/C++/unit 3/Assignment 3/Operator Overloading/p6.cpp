#include <iostream>
using namespace std;

class Matrix 
{
    private:
        int a;
        int b;

    public:
        Matrix(int x,int y) : a(x),b(y) {}

        Matrix operator*(const Matrix &m) 
        {
            return Matrix(a*m.a,b*m.b);
        }

        void display() 
        {
            cout << "Matrix: [" << a << "," << b << "]" << endl;
        }
};

int main() {
    Matrix m1(2,3);
    Matrix m2(4,5);
    Matrix result = m1 * m2;

    printf("\nMatrix 1 details:\n");
    m1.display();
    printf("\nMatrix 2 details:\n");
    m2.display();
    printf("\nMatrix 3 (Matrix1 * Matrix2) details:\n");
    result.display();

    return 0;
}