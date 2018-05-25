#include <iostream>
#include <string>

int main()
{
	std::string a, b;
	std::cin >> a >> b;

	std::string ra(a.rbegin(), a.rend());
	std::string rb(b.rbegin(), b.rend());

	int nA = std::stoi(ra);
	int nB = std::stoi(rb);

	std::cout << (nA > nB ? nA : nB) << std::endl;
	return 0;
}
