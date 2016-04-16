#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
	size_t N;
	std::cin >> N;
	std::vector<size_t> m_N(N);
	for (auto& m : m_N)	std::cin >> m;

	for (const auto m : m_N)
	{
		size_t slp = m / 3, oclock = 0;
		while (60 <= slp)
		{
			++oclock;
			slp -= 60;
		}
		if (slp != 0)	++oclock;
		size_t res1 = (oclock < 2 ? 1 : 25) - oclock;
		std::cout << std::setw(2) << std::setfill('0') << res1 << ":";
		std::cout << std::setw(2) << std::setfill('0') << (slp == 0 ? 0 : 60 - slp) << std::endl;
	}
}
