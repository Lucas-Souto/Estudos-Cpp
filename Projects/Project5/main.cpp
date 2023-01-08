#include <iostream>
#include <string>
#include <iomanip>

double getTotal(double prices[], int size);
int searchArray(int array[], int size, int element);
void sort(int array[], int size);

int main()
{
	/*double prices[] = { 5, 25.23, 6.05, 3 };

	std::cout << "O total foi R$" << std::setprecision(2) << std::fixed << getTotal(prices, sizeof(prices) / sizeof(double)) << '\n';*/

	/*int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int index;
	int myNum;

	std::cout << "Digite um elemento para procurar: \n";
	std::cin >> myNum;

	index = searchArray(numbers, size, myNum);

	if (index != -1) std::cout << "O index desse elemento e: " << index << '\n';
	else std::cout << "Esse elemento nao existe no array. (" << myNum << ')';*/

	/*int array[] = { 10, 1, 9, 2, 5, 4, 6, 8, 7, 3 };
	int size = sizeof(array) / sizeof(array[0]);


	sort(array, size);

	for (int element : array) std::cout << element << " ";*/

	/*const int SIZE = 30;
	std::string foods[SIZE];

	fill(foods, foods + SIZE / 3, "Brigadeiro");
	fill(foods + SIZE / 3, foods + SIZE / 3 * 2, "Jhonatas");
	fill(foods + SIZE / 3 * 2, foods + SIZE, "Baixo");

	for (std::string food : foods) std::cout << food << '\n';*/

	/*std::string foods[5];
	int size = sizeof(foods) / sizeof(foods[0]);

	for (int i = 0; i < size; i++)
	{
		std::string temp;

		std::cout << "Digite uma comida que você gosta (#" << i + 1 << ") ou 'q' para sair: \n";
		std::getline(std::cin, temp);

		if (temp == "q") break;

		foods[i] = temp;
	}

	std::cout << "Voce gosta dessas comidas: ";

	for (int i = 0; !foods[i].empty(); i++) std::cout << foods[i] << "; ";*/

	std::string pokes[2][3] = 
	{
		{ "Squirtle", "Wartortle", "Blastoise" },
		{ "Bulbassaur", "Ivyssaur", "Venussaur" }
	};
	int rows = sizeof(pokes) / sizeof(pokes[0]), columns = sizeof(pokes[0]) / sizeof(pokes[0][0]);

	for (int x = 0; x < rows; x++)
	{
		for (int y = 0; y < columns; y++) std::cout << pokes[x][y] << "; ";

		std::cout << '\n';
	}
}

double getTotal(double prices[], int size)
{
	double total = 0;

	for (int i = 0; i < size; i++) total += prices[i];

	return total;
}

int searchArray(int array[], int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == element) return i;
	}

	return -1;
}

void sort(int array[], int size)
{
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}