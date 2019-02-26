#include <iostream>
#include <string>


//const reference -> much faster and we cant change the reference
void PrintString(const std::string& string) 
{
	std::cout << string << std::endl;
}


int main()
{
	//C strings
	const char* name = "Steffen";
	char name2[] = { 'S','t','e','f','f','e','n','\0' };
	std::cout << name << std::endl;
	std::cout << name2 << std::endl;

	
	//C++ Strings -> std::string (class) is a templated version of the basicstring class ->char template parameter
	std::string name3 = "Steffen";
	name3 += "3";
	std::cout << name3 << std::endl;

	//C++11 Characters
	const char* name4 = "Steffen"; //one byte

	const wchar_t* name5 = L"Steffen"; //2 byte string on windows and 4 byte on linux -> 'L' signifies that following string with wide characters.
	const char16_t* name6 = u"Steffen"; //always 2 bytes

	const char32_t* name7 = U"Steffen";


	//C++14 "adding strings"
	//std::string name8 = "Steffen" + "Test" ->will not work 
	using namespace std::string_literals;
	std::string name8 = "Steffen"s + "Test";
	std::wstring name9 = L"Steffen"s + L"Test";
	std::u32string name10 = U"Steffen"s + U"Test";

	//use more rows for strings
	const char* test = R"(Row1
Row2
Row3
Row4)";
	const char* test2 = "Row1"
		"Row2"
		"Row3";



	std::cin.get();
}