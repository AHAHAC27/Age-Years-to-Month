#include <iostream>
int Translate(int years)
{
	return 12 * years;
}
int main()
{
	int years;
	int month;
	std::cout << "Enter age in years: ";
	std::cin >> years;
	std::cout << std::endl;
	month = Translate(years);
	std::cout << "Your age in month: " << month << std::endl;
	system("pause");
	return 0;
}
