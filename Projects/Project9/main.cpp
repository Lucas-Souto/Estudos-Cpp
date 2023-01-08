#include <iostream>
#include <string>

template <typename T, typename U>
auto max(T x, U y)
{
	return (x > y) ? x : y;
}

struct student
{
	std::string name;
	double gpa;
	bool enrolled = true;
};

struct Poke
{
	std::string name;
	std::string type1;
	std::string type2;
	int evolutions = 0;
};

void printPoke(Poke poke);
void mutatePoke(Poke &poke, std::string newTipe);

enum Day { Domingo = 0, Segunda = 1, Terca, Quarta = 3, Quinta = 4, Sexta = 5, Sabado = 75 };

int main()
{
	//std::cout << max(2, 5.5) << '\n';

	/*student student1;
	student1.name = "Jhonas";
	student1.gpa = 3.2;

	student student2;
	student2.name = "Milu";
	student2.gpa = 1.2;
	student2.enrolled = false;

	std::cout << student1.name << '\n';
	std::cout << student1.gpa << '\n';
	std::cout << student1.enrolled << '\n';

	std::cout << student2.name << '\n';
	std::cout << student2.gpa << '\n';
	std::cout << student2.enrolled << '\n';*/

	/*Poke poke1;
	Poke poke2;

	poke1.name = "Squirtle";
	poke1.type1 = "Water";
	poke1.type2 = "Water";
	poke1.evolutions = 2;

	printPoke(poke1);
	mutatePoke(poke1, "Fire");
	printPoke(poke1);*/

	Day today = Terca;

	switch (today)
	{
		case Domingo: std::cout << "Depresso";  break;
		case 1: std::cout << "Depresso2";  break;
		case Terca: std::cout << "Depresso3";  break;
		case Quarta: std::cout << "Depresso4";  break;
		case Quinta: std::cout << "Depresso5";  break;
		case Sexta: std::cout << "Depresso6";  break;
		case 75: std::cout << "Ageria!!!";  break;
	}
}

void printPoke(Poke poke)
{
	std::cout << poke.name << '\n';
	std::cout << poke.type1 << '\n';
	std::cout << poke.type2 << '\n';
	std::cout << poke.evolutions << '\n';
}
void mutatePoke(Poke &poke, std::string newTipe)
{
	poke.type1 = newTipe;
}