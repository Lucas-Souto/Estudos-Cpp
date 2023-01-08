#include <iostream>
#include <string>
#include <ctime>

class Human
{
	public:
		std::string name;
		std::string nickname;
		std::string occupation = "Desempregado";
		int age = 0;

		Human(std::string name, std::string occupation, int age)
		{
			std::cout << "Nasci!\n";

			this->name = name;
			this->nickname = name;
			this->occupation = occupation;
			this->age = age;
			this->id = rand() % 150;
		}
		Human(std::string name, std::string nickname, std::string occupation, int age)
		{
			std::cout << "Nasci!\n";

			this->name = name;
			this->nickname = nickname;
			this->occupation = occupation;
			this->age = age;
			this->id = rand() % 150;
		}

		void hello()
		{
			std::cout << "Prazer! Me chamo " << name << "! Mas voce pode me chamar de " << nickname << ".\n";
			std::cout << "Sou " << occupation << ".\n";
			std::cout << "Tenho " << age << " anos.\n";
		}

		void eat()
		{
			std::cout << "To comeno.\n";
		}
		void drink()
		{
			std::cout << "To bebeno.\n";
		}
		void sleep()
		{
			std::cout << "To dormino.\n";
		}

		int getId()
		{
			return this->id;
		}
		void setId(int id)
		{
			if (id > 149) this->id = 149;
			else if (id < 0) this->id = 0;
			else this->id = id;
		}

	private:
		int id;
};

class Animal
{
	public:
		void eat()
		{
			std::cout << "Comeno...\n";
		}
};
class Dog : public Animal
{
	public:
		void eat()
		{
			std::cout << "Me nego.\n";
		}
		void bark()
		{
			std::cout << "AUAU!\n";
		}
};

class Shape
{
	public:
		double area, volume;
};
class Cube : public Shape
{
	public:
		double side;
		
		Cube(double side)
		{
			this->side = side;
			this->area = side * side * 6;
			this->volume = side * side * side;
		}
};
class Sphere : public Shape
{
	public:
		double radius;

		Sphere(double radius)
		{
			this->radius = radius;
			this->area = 4 * 3.14 * (radius * radius);
			this->volume = 4 / 3.0 * 3.14 * (radius * radius * radius);
		}
};

int main()
{
	srand(time(0));

	Human human1("Jhonas", "Jojo", "Protetor da floresta", 22);

	human1.hello();
	human1.eat();
	human1.drink();
	human1.sleep();

	human1.setId(1505);
	std::cout << human1.getId() << '\n';

	Dog dog;

	dog.eat();
	dog.bark();

	Cube cube(10);
	Sphere sphere(16);

	std::cout << "Area do cubo: " << cube.area << ".\n";
	std::cout << "Volume do cubo: " << cube.volume << ".\n";

	std::cout << "Area da esfera: " << sphere.area << ".\n";
	std::cout << "Volume do esfera: " << sphere.volume << ".\n";
}