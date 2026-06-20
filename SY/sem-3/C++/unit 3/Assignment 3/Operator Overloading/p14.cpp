#include <iostream>
#include <cstring>
using namespace std;

class String 
{
    private:
        char* str;
    public:
        String(const char* s) 
        {
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }

        ~String() 
        {
            delete[] str;
        }

        String operator+(String &other) 
        {
            char* newStr=new char[strlen(str)+strlen(other.str)+1];
            strcpy(newStr,str);
            strcat(newStr,other.str);
            return String(newStr);
        }

        void display() const 
        {
            cout << str;
        }
};

int main() 
{
    String str1("Hello, ");
    String str2("World!");
    String str3=str1+str2;

    
    printf("\nFirst String:\n ");
    str1.display();
    printf("\nSecond String:\n ");
    str2.display();
    printf("\nConcatenated String:\n ");
    str3.display();
    return 0;
}
