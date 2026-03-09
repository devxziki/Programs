#include<iostream>
using namespace std;

class Library
{
    public:
        class Book
        {
            public:
            string author;
            string title;
            void input()
            {
                cout << "Enter Author Name: ";
                cin >> author;
                cout << "Enter Title: ";
                cin >> title;
            }

            void output()
            {
                cout << "Author Name: " << author << endl;
                cout << "Title: " << title << endl;
            }
        };

        Book b[100];
        int i,n;

        void getdata()
        {
            cout << "Enter Number of Books: ";
            cin >> n;

            for(i=0;i<n;i++)
            {
                b[i].input();
                cout << endl;
            }
        }

        void display()
        {
            for(i=0;i<n;i++)
            {
                b[i].output();
            }
        }
};

int main()
{
    Library l;
    l.getdata();
    l.display();

    cin.get();
    cin.get();
    
    return 0;
}