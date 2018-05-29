#include <iostream>
#include <list>

int main()
{
	int N;
	std::cin >> N;

	std::list<int> list;
	for (int i = 0; i < N; ++i)
	{
		int n;
		std::cin >> n;
		list.push_back(n);
	}
	list.sort();

	for (auto& n : list)
		std::cout << n << std::endl;
	return 0;
}
