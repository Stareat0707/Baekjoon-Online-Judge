#include <iostream>
#include <set>

int d(int n)
{
	int result = n;
	int dividedNum = n;
	int divideNum = 10000;

	while (divideNum >= 1)
	{
		result += dividedNum / divideNum;
		dividedNum %= divideNum;
		divideNum /= 10;
	}

	return result;
}

int main()
{
	std::set<int> notSelfNum;
	for (int i = 1; i <= 10000; ++i)
	{
		if (notSelfNum.find(i) == notSelfNum.end())
			std::cout << i << std::endl;
		notSelfNum.insert(d(i));
	}
	return 0;
}
