#include <iostream>

namespace math
{
	const double PI = 3.14159;
	const int LIGHT_SPEED = 299792458;
}

int main()
{
	using namespace math;

	double radius = 3;
	double circumference = 2 * PI * radius;//math::PI

	std::cout << "Teste 1" << '\n';
	std::cout << circumference << "cm";

	return 0;
}