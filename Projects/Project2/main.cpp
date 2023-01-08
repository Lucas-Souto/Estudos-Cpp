#include <iostream>

int main()
{
	char op;
	double num1;
	double num2;
	double result;

	std::cout << "------------------- CALCULADORA MASSA -------------------" << '\n';
	std::cout << "Qual operador queres usar, meo?" << '\n';
	std::cin >> op;

	std::cout << "Primeiro numero?" << '\n';
	std::cin >> num1;

	std::cout << "Segundo numero?" << '\n';
	std::cin >> num2;

	switch (op)
	{
		case '+': result = num1 + num2; break;
		case '-': result = num1 - num2; break;
		case '*': result = num1 * num2; break;
		case '/': result = num1 / num2; break;
		default:
			std::cout << "Operador invalido!";
			return 0;
	}

	std::cout << "O resultado foi: " << result << '\n';

	std::cout << "------------------- FIM DA CALCULADORA MASSA -------------------\n";

	int temp;
	char unit;

	std::cout << "------------------- CONVERSOR C-F -------------------\n";
	
	std::cout << "Qual a temperatura?\n";
	std::cin >> temp;

	std::cout << "Quer converter para o que (C/F)?\n";
	std::cin >> unit;

	std::cout << "Joia. Espera um pouco.\n";

	unit = tolower(unit);

	if (unit == 'c') std::cout << "O resultado foi: " << (temp - 32) / 1.8 << "C\n";
	else if (unit == 'f') std::cout << "O resultado foi: " << (1.8 * temp) + 32 << "F\n";
	else std::cout << "So sei em Celso e Farinha.\n";

	std::cout << "------------------- FIM DO CONVERSOR C-F -------------------";
}