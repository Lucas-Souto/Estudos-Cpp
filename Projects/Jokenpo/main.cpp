#include <iostream>
#include <ctime>
#include <string>

void game();

int main()
{
	srand(time(NULL));

	char answer;

	std::cout << "Eu ja te contei que eu sou o melhor jogador de jokenpo do mundo?\nNao acredita? Jogue comigo! (s/n)\n";
	std::cin >> answer;

	if (tolower(answer) == 's') game();
	else std::cout << "Tchau, galinha!";

	return 0;
}

std::string getName(int choice)
{
	if (choice == 1) return "Pedra";
	else if (choice == 2) return "Papel";
	else return "Tesoura";
}

void game()
{
	int choice;

	std::cout << "Escolha entre:\n1.Pedra\n2.Papel\n3.Tesoura\n";
	std::cin >> choice;

	if (choice < 1 || choice > 3) std::cout << "Voce esta inventando coisas. Nao quero jogar com voce!";
	else
	{
		int computerChoice = rand() % 3 + 1;

		std::cout << "Voce jogou: " << getName(choice) << "\nEu joguei: " << getName(computerChoice) << '\n';

		if ((choice == 1 && computerChoice == 3) || (choice == 2 && computerChoice == 1) || (choice == 3 && computerChoice == 2)) std::cout << "Voce ganhou!!! Nao fez mais que a obrigacao.\n";
		else if (choice == computerChoice) std::cout << "Deu empate... :(\n";
		else std::cout << "Voce perdeukkkkkkkkk.\n";

		char answer;

		std::cout << "Quer uma revanche? (s/n)";
		std::cin >> answer;

		if (tolower(answer) == 's') game();
		else std::cout << "Covarde!";
	}
}