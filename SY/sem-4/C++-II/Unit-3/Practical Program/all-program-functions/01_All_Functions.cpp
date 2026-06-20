#include<iostream>
using namespace std;

int main(){

	// ============================================================
	// 1. width() - Setting Output Width
	// ============================================================
	{
		cout << "--- 1. width() ---" << endl;

		cout.width(10);
		cout << 123 << endl;

		cout.width(10);
		cout << "Hello" << endl;

		cout.width(15);
		cout << 3.14159 << endl;

		cout << endl;
	}

	// ============================================================
	// 2. precision() - Setting Numeric Precision
	// ============================================================
	{
		cout << "--- 2. precision() ---" << endl;

		// Default precision (significant digits)
		cout.precision(3);
		cout << 3.14159 << endl;       // Output: 3.14

		cout.precision(5);
		cout << 3.14159 << endl;       // Output: 3.1416

		// precision() with fixed flag
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		cout << 3.14159 << endl;       // Output: 3.14

		cout.precision(4);
		cout << 3.14159 << endl;       // Output: 3.1416

		cout.unsetf(ios::fixed);       // reset for next topic

		cout << endl;
	}

	// ============================================================
	// 3. fill() - Setting Fill Character
	// ============================================================
	{
		cout << "--- 3. fill() ---" << endl;

		// Default fill is space
		cout.width(10);
		cout << 123 << endl;           // Output: _______123

		// Fill with *
		cout.fill('*');
		cout.width(10);
		cout << 123 << endl;           // Output: *******123

		// Fill with -
		cout.fill('-');
		cout.width(10);
		cout << "Hi" << endl;          // Output: --------Hi

		// Fill with 0
		cout.fill('0');
		cout.width(8);
		cout << 456 << endl;           // Output: 00000456

		// Reset fill to space (default)
		cout.fill(' ');

		cout << endl;
	}

	// ============================================================
	// 4. setf() - Setting Format Flags
	// ============================================================
	{
		cout << "--- 4. setf() ---" << endl;

		// (a) Left alignment
		cout.setf(ios::left, ios::adjustfield);
		cout.width(10);
		cout << 123 << endl;           // Output: 123_______

		cout.setf(ios::left, ios::adjustfield);
		cout.width(10);
		cout << "Hello" << endl;       // Output: Hello_____

		// (b) Right alignment (default)
		cout.setf(ios::right, ios::adjustfield);
		cout.width(10);
		cout << 123 << endl;           // Output: _______123

		// (c) fixed floating point
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		cout << 3.14159 << endl;       // Output: 3.14

		// (d) Scientific notation
		cout.setf(ios::scientific, ios::floatfield);
		cout.precision(3);
		cout << 123.456 << endl;       // Output: 1.235e+02

		// (e) showpoint - always show decimal point
		cout.setf(ios::fixed, ios::floatfield);
		cout.setf(ios::showpoint);
		cout.precision(5);
		cout << 5.0 << endl;           // Output: 5.00000

		// (f) showpos - show + for positive numbers
		cout.setf(ios::showpos);
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		cout << 42.5 << endl;          // Output: +42.50
		cout.unsetf(ios::showpos);

		// (g) uppercase - uppercase E in scientific
		cout.setf(ios::uppercase);
		cout.setf(ios::scientific, ios::floatfield);
		cout.precision(2);
		cout << 123.45 << endl;        // Output: 1.23E+02
		cout.unsetf(ios::uppercase);

		// (h) hex, oct, dec number bases
		cout.setf(ios::hex, ios::basefield);
		cout << 255 << endl;           // Output: ff

		cout.setf(ios::oct, ios::basefield);
		cout << 255 << endl;           // Output: 377

		cout.setf(ios::dec, ios::basefield);
		cout << 255 << endl;           // Output: 255

		cout << endl;
	}

	// ============================================================
	// 5. unsetf() - Clearing Format Flags
	// ============================================================
	{
		cout << "--- 5. unsetf() ---" << endl;

		// Set left alignment then remove it
		cout.setf(ios::left, ios::adjustfield);
		cout.width(10);
		cout << "Left" << endl;        // Output: Left______

		cout.unsetf(ios::left);        // remove left alignment
		cout.width(10);
		cout << "Right" << endl;       // Output: _____Right

		// Set fixed then unset it
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		cout << 9.9999 << endl;        // Output: 10.00

		cout.unsetf(ios::fixed);
		cout.precision(4);
		cout << 9.9999 << endl;        // Output: 10 (significant digits mode)

		// Set showpoint then unset it
		cout.setf(ios::fixed, ios::floatfield);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << 7.0 << endl;           // Output: 7.000

		cout.unsetf(ios::showpoint);
		cout.precision(3);
		cout << 7.0 << endl;           // Output: 7.000 (fixed keeps it)

		cout.unsetf(ios::fixed);

		// Set hex then unset it (goes back to dec)
		cout.setf(ios::hex, ios::basefield);
		cout << 255 << endl;           // Output: ff

		cout.unsetf(ios::hex);
		cout.setf(ios::dec, ios::basefield);
		cout << 255 << endl;           // Output: 255

		cout << endl;
	}

	// ============================================================
	// COMBINED EXAMPLE - All 5 Functions Together
	// ============================================================
	{
		cout << "--- Combined Example ---" << endl;

		// Student report card style output
		cout.setf(ios::left, ios::adjustfield);
		cout.fill(' ');

		cout.width(15); cout << "Name";
		cout.width(10); cout << "Marks";
		cout.width(12); cout << "Percentage" << endl;
		cout.fill('-');
		cout.width(37); cout << "" << endl;
		cout.fill(' ');

		// Student 1
		cout.width(15); cout << "Ali";
		cout.setf(ios::right, ios::adjustfield);
		cout.width(10); cout << 85;
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		cout.width(12); cout << 85.00 << endl;

		// Student 2
		cout.setf(ios::left, ios::adjustfield);
		cout.width(15); cout << "Sara";
		cout.setf(ios::right, ios::adjustfield);
		cout.width(10); cout << 92;
		cout.width(12); cout << 92.00 << endl;

		// Student 3
		cout.setf(ios::left, ios::adjustfield);
		cout.width(15); cout << "Ahmed";
		cout.setf(ios::right, ios::adjustfield);
		cout.width(10); cout << 78;
		cout.width(12); cout << 78.00 << endl;

		cout.unsetf(ios::fixed);
		cout.fill('-');
		cout.width(37); cout << "" << endl;
		cout.fill(' ');

		cout << endl;
	}

	return 0;
}