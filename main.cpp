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
	std::cout << "������� ���� �������(����)" << std::endl;
	std::cin >> years;
	month = Translate(years);
	std::cout << "��� ������� � �������: " << month << std::endl;
	system("pause");
	return 0;
}