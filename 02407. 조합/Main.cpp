#include <iostream>
#include <string>

void reverse(std::string& string)
{
	for (int i = 0; i < string.length() / 2; ++i)
	{
		char c = string[i];
		string[i] = string[string.length() - 1 - i];
		string[string.length() - 1 - i] = c;
	}
}

class LargeInteger
{
public:
	std::string getValue() const
	{
		return value;
	}

	void operator=(const int temp)
	{
		do
		{
			value += temp % 10 + 48;
		} while (temp >= 10);
	}

	void operator=(const std::string& temp)
	{
		value = temp;
	}

	std::string operator+(const LargeInteger& temp)
	{
		std::string result = value.size() > temp.value.size() ? value : temp.value;
		std::string b = result == value ? temp.value : value;

		reverse(result);
		reverse(b);

		for (int i = 0; i < result.size() && i < b.size(); ++i)
		{
			int n = (result[i] - 48) + (b[i] - 48);
			result[i] = n % 10 + 48;

			for (int j = 1; n / 10 == 1; ++j)
			{
				if (i + j < result.size())
				{
					n = ++result[i + j] - 48;
					if (result[i + j] >= 58)
						result[i + j] -= 10;
				}
				else
				{
					result += 49;
					break;
				}
			}
		}

		reverse(result);
		return result;
	}

private:
	std::string value;
};

int main()
{
	int n, m;
	std::cin >> n >> m;

	LargeInteger* bc = new LargeInteger[(n + 1) * (m + 1)];
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m && j <= i; ++j)
		{
			if (i == j || j == 0)
				bc[i * (m + 1) + j] = 1;
			else
				bc[i * (m + 1) + j] = bc[(i - 1) * (m + 1) + (j - 1)] + bc[(i - 1) * (m + 1) + j];
		}
	}

	std::cout << bc[n * (m + 1) + m].getValue() << std::endl;
	delete[] bc;
	return 0;
}
