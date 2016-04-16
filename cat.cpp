#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s;
	std::cin >> s;
	size_t c, a, t;

	c = std::count(s.cbegin(), s.cend(), 'c');
	a = std::count(s.cbegin(), s.cend(), 'a');
	t = s.size() - c - a;

	size_t min_cat, max_cat, c2, a2, t2;
	min_cat = std::min(c, std::min(a, t));
	max_cat = std::max(c, std::max(a, t));
	c2 = max_cat - c;
	a2 = max_cat - a;
	t2 = max_cat - t;

	std::cout
		<< min_cat << std::endl
		<< c2 << std::endl
		<< a2 << std::endl
		<< t2 << std::endl;
}
