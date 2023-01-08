#include <iostream>
#include <string>

int main()
{
	/*std::string name = "Jhonas";
	int age = 22;
	std::string freePizzas[5] = { "Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5" };

	std::string *pName = &name;
	int *pAge = &age;
	std::string *pFreePizzas = freePizzas;

	std::cout << '#' << pName << " : " << *pName << '\n';
	std::cout << '#' << pAge << " : " << *pAge << '\n';
	std::cout << '#' << pFreePizzas << " : " << *pFreePizzas << '\n';*/

	int *pointer = nullptr;
	int x = 123;

	pointer = &x;

	if (pointer == nullptr) std::cout << "O endereco nao foi escrito.\n";
	else
	{
		std::cout << "O endereco foi escrito.\n";
		std::cout << *pointer;
	}
}