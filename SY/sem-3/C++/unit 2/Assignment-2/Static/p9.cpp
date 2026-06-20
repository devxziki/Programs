#include <iostream>
using namespace std;

class Logger 
{
	private:
	    static string logLevel;  // Static data member for log level
	
	public:
	    // Static function to set the log level
	    static void setLogLevel(const string &level) 
		{
	        logLevel=level;
	    }
	
	    // Static function to display the current log level
	    static void displayLogLevel() 
		{
	        cout << "Current Log Level: " << logLevel << endl;
	    }
};

// Initialize static member
string Logger::logLevel="INFO";  // Default log level

int main() 
{
    // Display default log level
    Logger::displayLogLevel();

    // Change log level
    Logger::setLogLevel("DEBUG");

    // Display updated log level
    Logger::displayLogLevel();

    // Change log level again
    Logger::setLogLevel("ERROR");

    Logger::displayLogLevel();

    return 0;
}
