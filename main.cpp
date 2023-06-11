#include <iostream>
int Translate(int years)
{
	return 12 * years;
}
int main()
{
	int years;
	int month;
	setlocale(LC_ALL, "rus");
	std::cout << "¬ведите свой возраст(годы)" << std::endl;
	std::cin >> years;
	month = Translate(years);
	std::cout << "¬аш возраст в мес€цах: " << month << std::endl;
	system("pause");
	return 0;
}