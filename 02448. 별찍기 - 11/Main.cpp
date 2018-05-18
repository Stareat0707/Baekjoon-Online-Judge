#include <iostream>
/*
24
					   *
					  * *
					 *****
					*     *
				   * *   * *
				  ***** *****
				 *           *
				* *         * *
			   *****       *****
			  *     *     *     *
			 * *   * *   * *   * *
			***** ***** ***** *****
		   *                       *
		  * *                     * *
		 *****                   *****
		*     *                 *     *
	   * *   * *               * *   * *
	  ***** *****             ***** *****
	 *           *           *           *
	* *         * *         * *         * *
   *****       *****       *****       *****
  *     *     *     *     *     *     *     *
 * *   * *   * *   * *   * *   * *   * *   * *
***** ***** ***** ***** ***** ***** ***** *****
*/

void printStar(int row)
{
	switch (row % 3)
	{
	case 0:
		std::cout << "  *  ";
		break;
	case 1:
		std::cout << " * * ";
		break;
	default:
		std::cout << "*****";
	}
}

int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 3 * (i / 3 + 1); ++j)
			std::cout << ' ';

		std::cout << i / 3 + 1;
		for (int j = 0; j < i / 3 + 1; ++j)
		{
			printStar(i);
			std::cout << ' ';
		}

		std::cout << std::endl;
	}
	return 0;
}
