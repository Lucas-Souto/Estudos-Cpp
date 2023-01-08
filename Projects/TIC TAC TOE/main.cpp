#include <iostream>
#include <string>
#include <ctime>
#include <vector>

void drawBoard(char *spaces);
bool playerMove(char *spaces, char player);
bool computerMove(char *spaces, char computer);
bool checkWin(char *spaces, char me);
bool checkTie(char *spaces);

int main()
{
	char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	char player = 'X';
	char computer = 'O';
	bool running = true;

	srand(time(0));
	drawBoard(spaces);

	while (running)
	{
		bool pWin = playerMove(spaces, player), cWin = false, tie = false;

		if (!pWin) cWin = computerMove(spaces, computer);
		
		if (!pWin && !cWin) tie = checkTie(spaces);

		drawBoard(spaces);
		
		if (tie || pWin || cWin)
		{
			if (pWin) std::cout << "Voce venceu!!!";
			else if (cWin) std::cout << "Voce perdeu!!!";
			else std::cout << "Deu empate!!!";

			running = false;
		}
	}
}

void drawBoard(char *spaces)
{
	std::cout << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
	std::cout << "_____|_____|_____" << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
	std::cout << "_____|_____|_____" << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << '\n';
}
bool playerMove(char *spaces, char player)
{
	int number;

	std::cout << "Em que casa voce quer colocar o 'X'? (1-9)\n";
	std::cin >> number;

	if (number < 1 || number > 9)
	{
		std::cout << "Casa invalida. Tente outra.\n";

		playerMove(spaces, player);
	}
	else if (spaces[number - 1] == ' ') spaces[number - 1] = player;
	else
	{
		std::cout << "Essa casa ja esta ocupada. Tente outra.\n";

		playerMove(spaces, player);
	}

	return checkWin(spaces, player);
}
bool computerMove(char *spaces, char computer)
{
	int number;

	while (true)
	{
		number = rand() % 9;

		if (spaces[number] == ' ')
		{
			spaces[number] = computer;

			break;
		}
	}

	return checkWin(spaces, computer);
}
bool checkWin(char *spaces, char me)
{
	bool fRow = spaces[0] == me && spaces[1] == me && spaces[2] == me,
		sRow = spaces[3] == me && spaces[4] == me && spaces[5] == me,
		tRow = spaces[6] == me && spaces[7] == me && spaces[8] == me;
	bool fCol = spaces[0] == me && spaces[3] == me && spaces[6] == me,
		sCol = spaces[1] == me && spaces[4] == me && spaces[7] == me,
		tCol = spaces[2] == me && spaces[5] == me && spaces[8] == me;
	bool fDiag = spaces[0] == me && spaces[4] == me && spaces[8] == me,
		lDiag = spaces[2] == me && spaces[4] == me && spaces[6] == me;

	return fRow || sRow || tRow || fCol || sCol || tCol || fDiag || lDiag;
}
bool checkTie(char *spaces)
{
	for (int i = 0; i < 9; i++)
	{
		if (spaces[i] == ' ') return false;
	}

	return true;
}