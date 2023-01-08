#include <iostream>
#include <string>

int main()
{
	/*int *pNum = NULL;

	pNum = new int;

	*pNum = 22;

	std::cout << "Endereco: " << pNum << '\n';
	std::cout << "Valor: " << *pNum << '\n';

	delete pNum;*/

	char *pGrades = NULL;
	int size;

	std::cout << "Quantas notas tu quer botar?\n";
	std::cin >> size;

	pGrades = new char[size];

	for (int i = 0; i < size; i++)
	{
		std::cout << "Coloca a nota #" << i + 1 << " ai.\n";
		std::cin >> pGrades[i];
	}

	for (int i = 0; i < size; i++) std::cout << "A nota #" << i + 1 << " ai: " << pGrades[i] << ".\n";

	delete[] pGrades;
}