#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::cout << "Digite seu nome: " << '\n';

	std::string name;

	std::getline(std::cin, name);
	std::cout << "Ola, " << name << "! Voce precisa de ajuda?" << '\n';

	std::string answer;

	std::getline(std::cin, answer);

	if (answer == "sim")
	{
		int first, second, third;

		std::cout << "Pois digite suas tres notas, homi!" << '\n';

		std::cin >> first;
		std::cin >> second;
		std::cin >> third;

		double result = (double)(first + second + third) / 3;

		std::cout << "Suas notas foram: " << first << ", " << second << ", " << third << ". Sua media final foi: " << result << '\n';
		std::cout << "Voce " << (result >= 5 ? "passou!" : "reprovou...");
	}
	else
	{
		std::cout << "Entao me desafia na hipotenusa ai. Fala o a e o b." << '\n';

		int a, b;

		std::cin >> a;
		std::cin >> b;

		std::cout << "C e igual a " << sqrt(pow(a, 2) + pow(b, 2));
	}

	return 0;
}