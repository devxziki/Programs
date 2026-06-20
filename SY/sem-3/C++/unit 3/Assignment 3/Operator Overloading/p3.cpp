#include<iostream>
using namespace std;

class Book
{
    private:
        string title;
        string author;
    public:

        Book(string a,string b)
        {
            title=a;
            author=b;
        }

        Book operator<<(Book &b)
        {
            return Book(title+" & "+b.title,author+" & "+b.author);
        }
        
        void display()
        {
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
        }
};

int main()
{
    Book b1("The Great Gatsby","F. Scott Fitzgerald");
    Book b2("The Secreat Garden","Frances Hodgson Burnett");
    Book b3=b1<<b2;
    
    printf("Book 1 details:\n");
    b1.display();
    printf("\nBook 2 details:\n");
    b2.display();
    printf("\nCombined Book details:\n");
    b3.display();
    return 0;
}