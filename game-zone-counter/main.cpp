#include <iostream>

int main()
{
	std::cout << "=== GAME ZONE COUNTER ===" "\n";

	std::cout << "Enter number of visitors: " "\n";						// кількість відвідувачів
		int visitor { };
			std::cin >> visitor;

	std::cout << "Enter ticket price (UAH): " "\n";						// ціна квитку
		int price { };
			std::cin >> price;

	std::cout << "Enter electricity costs (UAH): " "\n";			// ціна електрики
		int elect { };
			std::cin >> elect;

	std::cout << "--- DAILY REPORT ---" "\n";
	
	int dirtcash { visitor * price};
	std::cout << "Total income: " << dirtcash << " UAH " "\n";

	int clearcash { dirtcash - elect};
	std::cout << "Net profit: " << clearcash << " UAH " "\n";

	return 0;
}