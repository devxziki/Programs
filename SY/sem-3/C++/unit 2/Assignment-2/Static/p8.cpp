#include <iostream>
using namespace std;

class Product 
{
	private:
	    string name;
	    double price;
	    static double discountRate;  // Static discount rate shared by all products
	
	public:
	    // Constructor
	    Product(string n,double p) 
		{
	        name=n;
	        price=p;
	    }
	
	    // Function to display product info with discount applied
	    void displayProduct() 
		{
	        double discountedPrice=price-(price*discountRate/100);
	        cout << "Product: " << name; 
	        cout << ", Original Price: $" << price ;
	        cout << ", Price after " << discountRate << "% discount: $"; 
	        cout << discountedPrice << endl;
	    }
	
	    // Static function to change the discount rate
	    static void setDiscountRate(double rate) 
		{
	        discountRate=rate;
	    }
};

// Initialize static member
double Product::discountRate=0.0;  // Default discount 0%

int main() 
{
    Product p1("Laptop",1200);
    Product p2("Phone",800);

    // Display products with default discount
    p1.displayProduct();
    p2.displayProduct();

    // Change discount rate using static function
    Product::setDiscountRate(10.0);  // 10% discount

    cout << "\nAfter applying discount:\n";
    p1.displayProduct();
    p2.displayProduct();

    return 0;
}
