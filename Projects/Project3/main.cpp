#include <iostream>
#include <string>
#include <ctime>

int main()
{
	/*std::string name;

	std::cout << "Qual seu nome?\n";
	std::getline(std::cin, name);

	if (!name.empty()) std::cout << "Seu nome tem " << name.length() << " caracteres!\n";
	else std::cout << "Ok, entao.";

	//name.clear();
	//name.append("inho");
	//name.insert(0, '@');
	//name.find(' ');
	//name.erase(0, 3);
	std::cout << "A primeira letra e " << name.at(0) << '\n';*/

	/*int i = 0;

	while (i < 3)
	{
		i++;

		std::cout << i;
	}*/

	/*int i = 0;

	do
	{
		i++;

		std::cout << i;
	} while (i < 3);*/
	
	//for (int i = 0; i < 3; i++) std::cout << i;

	/*for (int x = 0; x < 10; x++)
	{
		if (x == 5) continue;
		else if (x == 8) break;
		else std::cout << x;
	}*/

	/*for (int x = 0; x < 15; x++)
	{
		for (int y = 0; y < 5; y++) std::cout << '(' << x << ", " << y - x << ");";
	}*/

	/*srand(time(NULL));

	int num = (rand() % 20) + 1;// 1 - 20

	std::cout << num;*/

	/*srand(time(0));

	int randNum = rand() % 5 + 1;

	switch (randNum)
	{
		case 1: std::cout << "Balala"; break;
		case 2: std::cout << "Biribinha"; break;
		case 3: std::cout << "Sacomé"; break;
		case 4: std::cout << "Sis"; break;
		case 5: std::cout << "Chuhc"; break;
	}*/

	int num;
	int guess;
	int tries = 0;

	srand(time(NULL));

	num = (rand() % 100) + 1;

	std::cout << "Acerta o numero\n";

	do
	{
		std::cout << "Digite um numero entre 1 e 100.\n";
		std::cin >> guess;

		tries++;

		if (abs(num - guess) <= 10) std::cout << "Quente.\n";
		else std::cout << "Frio.\n";
	} while (guess != num);

	std::cout << "Voce acertou!!!! \nVoce so precisou de " << tries << " tentativas!!!";
}