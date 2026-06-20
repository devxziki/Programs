#include <iostream>
using namespace std;

class Student 
{
    private:
        int id;
        string name;
    
    public:
        // Constructor: take name by value or const reference
        Student(int id, const string& name) : id(id), name(name) {}
    
        // Overload == operator to compare students by id
        bool operator==(Student& other)  
        {
            return id == other.id;
        }
    
        // Display student info
        void display() 
        {
            cout << "ID: " << id << ", Name: " << name << endl;
        }
};

int main() 
{
    Student s1(101, "Alice");
    Student s2(102, "Bob");
    Student s3(101, "Charlie");

    s1.display();
    s2.display();
    s3.display();

    cout << "\nComparing s1 and s2: " << (s1 == s2 ? "Same ID" : "Different ID") << endl;
    cout << "Comparing s1 and s3: " << (s1 == s3 ? "Same ID" : "Different ID") << endl;

    return 0;
}
