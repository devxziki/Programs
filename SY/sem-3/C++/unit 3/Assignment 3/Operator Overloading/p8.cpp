#include <iostream>
using namespace std;

class Array 
{
    private:
        int *arr;
        int size;

    public:
        Array(int s) : size(s) 
        {
            arr=new int[size];
        }

        ~Array() 
        {
            delete[] arr;
        }

        int& operator[](int index)  
        {
            if (index<0 || index>=size) 
            {
                throw out_of_range("Index out of bounds");
            }
            return arr[index];
        }

        int display()
        {
            return size;
        }
};

int main() 
{
    Array myArray(5);
    int i;

    for(i=0;i<myArray.display();++i) 
    {
        myArray[i]=i*10;
    }

    for (i=0;i<myArray.display();++i) 
    {
        cout << myArray[i] << " ";
    }
    return 0;
}