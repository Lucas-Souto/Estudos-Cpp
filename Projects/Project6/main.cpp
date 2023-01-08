#include <iostream>
#include <string>

void swap(std::string &x, std::string &y);
void printInfo(const std::string name, const int age);

int main()
{
	/*std::string name = "Jhonas";
	int age = 22;
	bool student = false;

	std::cout << "#" << &name << '\n';
	std::cout << "#" << &age << '\n';
	std::cout << "#" << &student << '\n';*/

	/*std::string x = "Kool-Aid";
	std::string y = "Water";

	swap(x, y);

	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y;*/

	std::string name = "Jhonas";
	int age = 22;

	printInfo(name, age);
}

void swap(std::string &x, std::string &y)
{
	std::string temp = x;
	x = y;
	y = temp;
}

void printInfo(const std::string name, const int age)
{
	std::cout << name << '\n';
	std::cout << age;
}