// simple program to exercise operators
# include <iostream>
# include <math.h>
int main()
{
	std::cout << "Please enter a value: ";
	double n;
	std::cin >> n;
	std::cout << " n= " << n << std::endl;
	std::cout << " n+1= " << n+1 << std::endl;
	std::cout << " n times 2: " << n*2 << std::endl;
	std::cout << " n squared: " << n*n << std::endl;
	std::cout << " n halved: " << n/2 << std::endl;
	std::cout << " n square root: " << sqrt(n) << std:: endl;
}
