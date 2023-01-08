#include <iostream>
#include <string>

int getDigit(const int number);
int sumOdd(const std::string cardNumber);
int sumEven(const std::string cardNumber);

int main()
{
	std::string cardNumber;
	int result = 0;

	std::cout << "Coloque seu cartao aqui. Confia: ";
	std::cin >> cardNumber;

	result = sumOdd(cardNumber) + sumEven(cardNumber);

	if (result % 10 == 0) std::cout << "Vou te botar no SERASA!";
	else std::cout << "Tentando me enganar, parsa?";
}

int getDigit(const int number)
{
	return number % 10  + (number / 10 % 10);
}
int sumOdd(const std::string cardNumber)
{
	int sum = 0;

	for (int i = cardNumber.size() - 1; i >= 0; i -= 2) sum += getDigit(cardNumber[i] - '0');

	return sum;
}
int sumEven(const std::string cardNumber)
{
	int sum = 0;

	for (int i = cardNumber.size() - 2; i >= 0; i -= 2) sum += getDigit((cardNumber[i] - '0') * 2);

	return sum;
}