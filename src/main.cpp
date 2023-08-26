#include <iostream>

#include "functions.h"
#include "dog.h"
#include "swiming.h"
#include "counting.h"
#include "dancing.h"

int main() {
	std::cout << "\tTASK 29.1 SUPERDOG\n\n";

	std::string name;
	std::cout << "Dog name\n";
	name = myCin<std::string>();
	std::unique_ptr<Animal> dog = std::make_unique<Dog>(name);

	int64_t value = 0;

	do{
		std::cout << "\nEnter 1 to add new talent swim\n";
		std::cout << "Enter 2 to add new talent count\n";
		std::cout << "Enter 3 to add new talent dance\n";
		std::cout << "Enter 4 to see all dogs talents\n";
		std::cout << "Enter 9 to exit programm\n";

		value = myCin<int64_t>();

		switch (value)
		{
		case 1:
			dog->add_talent(std::make_unique<Swiming>());
			break;
		case 2:
			dog->add_talent(std::make_unique<Counting>());
			break;
		case 3:
			dog->add_talent(std::make_unique<Dancing>());
			break;
		case 4:
			dog->show_talents();
			break;
		case 9:
			break;
		default:
			std::cout << "You've entered something wrong. Try again!\n";
			break;
		}
	} while (value != 9);


	return 0;
}