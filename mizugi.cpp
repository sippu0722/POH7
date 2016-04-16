#include <iostream>


int main(int argc, char **argv)
{
	std::ios::sync_with_stdio(false);

	size_t N, result = 1, limit = 1000000000;
	std::cin >> N;

	for (size_t i = (size_t)N; 1 < i; --i)
	{
		result *= i;

		while (result % 10 == 0)
			result /= 10;
		result %= limit;	// *10;
	}
	std::cout << result % limit << std::endl;
	return 0;
}
