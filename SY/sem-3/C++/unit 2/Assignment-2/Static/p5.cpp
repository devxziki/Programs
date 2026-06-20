#include <iostream>
using namespace std;

class AppSettings 
{
	private:
	    static string theme;  // Static data member for theme
	
	public:
	    // Static function to set the theme
	    static void setTheme(const string& newTheme) 
		{
	        theme=newTheme;
	    }
	
	    // Static function to display the current theme
	    static void displayTheme() 
		{
	        cout << "Current App Theme: " << theme << endl;
	    }
};

// Initialize static member
string AppSettings::theme="Light";  // Default theme

int main() 
{
    // Display default theme
    AppSettings::displayTheme();

    // Update theme using static function
    AppSettings::setTheme("Dark");

    // Display updated theme
    AppSettings::displayTheme();

    return 0;
}
