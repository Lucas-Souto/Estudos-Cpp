#include <iostream>

#pragma region Declaration
void happyBirthday(int repeat = 1);
int sum(int a, int b);
int sum(int a, int b, int c);
#pragma endregion

int two = 2;// Evite

int main()
{
	happyBirthday(2);
	happyBirthday();

	int two = 3;

	std::cout << sum(5, ::two) << '\n';
	std::cout << sum(8, 3, 3) << '\n';
}

void happyBirthday(int repeat)
{
	for (int i = 0; i < repeat; i++)
	{
		std::cout << "Feliz parabens!!!\n";
		std::cout << "Feliz parabens pra ti!!!\n";
	}

	std::cout << '\n';
}

int sum(int a, int b)
{
	return a + b;
}
int sum(int a, int b, int c)
{
	return a + b + c;
}