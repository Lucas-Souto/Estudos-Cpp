#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
	double balance = 0;
	int choice = 0;

	do
	{
		std::cout << "Qual a sua escolha?\n";
		std::cout << "1.Mostrar conta;\n";
		std::cout << "2.Depositar;\n";
		std::cout << "3.Sacar;\n";
		std::cout << "4.Sair.\n";
		std::cin >> choice;

		switch (choice)
		{
			case 1: showBalance(balance); break;
			case 2:
				balance += deposit();

				showBalance(balance);
				break;
			case 3:
				balance -= withdraw(balance);

				showBalance(balance);
				break;
			case 4: std::cout << "Te cheiro mais tarde.\n"; break;
			default: std::cout << "Escolha invalida!\n"; break;
		}
	} while (choice != 4);

	return 0;
}

void showBalance(double balance)
{
	std::cout << "Sua conta tem R$" << std::setprecision(2) << std::fixed << balance << ".\n";
}

double deposit()
{
	double amount = 0;

	std::cout << "Quanto voce quer depositar?\n";
	std::cin >> amount;

	if (amount > 0) return amount;
	else std::cout << "Valor invalido!\n";

	return 0;
}

double withdraw(double balance)
{
	double amount = 0;

	std::cout << "Quanto voce quer sacar?\n";
	std::cin >> amount;

	if (amount < 0) std::cout << "Valor invalido!\n";
	else if (amount > balance) std::cout << "Voce nao tem esse dinheiro.\n";
	else return amount;

	return 0;
}