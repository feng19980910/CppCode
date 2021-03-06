#include <iostream>
#include "stock20.h"

int main() {
	Stock mystuff[3] = { Stock("abc"), Stock() };
	{
		using std::cout;
		cout << "Using constructors to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);
		// stock1.show();
		cout << stock1;
		Stock stock2 = Stock("Boffo Object", 2, 2.0);
		// stock2.show();
		cout << stock2;

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		// stock1.show();
		// stock2.show();
		cout << stock1;
		cout << stock2;


		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		// stock1.show();
		cout << stock1;
		cout << "Done\n";
	}
	return 0;
}
