#include <iostream>
#include <string>

int main()
{
	std::string questions[] = { "Qual o nome dessa linguagem?", "Que linguagem e a mae dessa?" };
	std::string options[][4] = { { "A.C++", "B.C#", "C.C", "D.Python" }, { "A.C++", "B.C#", "C.C", "D.Python" } };
	char answerKey[] = { 'A', 'C' };

	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << questions[i] << '\n';

		for (std::string option : options[i]) std::cout << option << '\n';

		std::cin >> guess;

		if (answerKey[i] == toupper(guess)) score++;
	}

	std::cout << "Sua pontuacao foi: " << score << "/" << size << "!!!";
}