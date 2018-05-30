#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string input;
	std::cin >> input;

	std::vector<int> nums;
	for (auto& c : input)
		nums.push_back(c - 48);

	std::sort(nums.rbegin(), nums.rend());
	for (auto& n : nums)
		std::cout << n;

	std::cout << std::endl;
	return 0;
}
