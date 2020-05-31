#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>

bool allLower(const std::string&);

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите слова:" << std::endl;
	std::string s, word;
	std::getline(std::cin, s);
	std::istringstream instr(s);
	std::istream_iterator<std::string> it(instr), eof;
	std::size_t count = std::count_if(it, eof, allLower);
	std::cout << "Количество слов: " << count << std::endl;
}

bool allLower(const std::string &word)
{
	for (auto const &ch : word)
		if (ch<'a' || ch>'z')
			return false;
	return true;
}
