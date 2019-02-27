#include <iostream>
#include <string>
#include <initializer_list>
#include <vector>

//curly braces {} -> uniform initialization
//########INITIALIZER LIST######## C++11
/*
template <class T>
class initializer_list;

Ein Objekt vom Typ std::initializer_list<T> ist ein leichtes Proxy-Objekt, das den Zugriff auf ein Array von 
Objekten vom Typ T bietet.
Realisierung als Paar von Zeigern oder Zeiger mit Länge.
*/


//#########
/*
std::vector ist ein sequentieller Container, der Arrays dynamischer Größe kapselt.
Die Elemente werden zusammenhängend gespeichert. Der Speicherplatz des Vektors wird automatisch angepasst.
Der Speicherplatz wird je nach Bedarf erweitert bzw. verkleinert. Die Vektoren benötigen mehr Speicher als
statische Arrays, da mehr Speicher alloziert wird um zukünftiges Wachstum zu behandeln.

Konstruktor für die initialyter list:
vector( std::initializer_list<T> init,
		const Allocator& alloc = Allocator() );
->Was ist ein Allocater? -> Folgt noch...

*/

int main()
{
	//######initialyzer_list#######
	std::initializer_list<int> digits{ 1,3,6,8,2,4,5 };
	std::cout << "Size of digits (initialyser list): " << digits.size() << std::endl;
	//...usw.


	//#####OLD and C++11 Initialization######
	int b = 1;
	//uniform initialization -> it is easier to initialize collections like a vector
	int a{ 4 };
	std::string str{ "test" };
	//old initialization:
	std::vector<int> values;
	values.push_back(2);
	values.push_back(3);
	values.push_back(5);
	values.push_back(8);
	for (int i = 0; i < values.size(); i++)
		std::cout << values.at(i) << "  ";
	std::cout << std::endl;


	//with C++11 initialization list
	std::vector<int> values2{ 2,3,5,8,9,2,4,4 };
	for (int i = 0; i < values2.size(); i++) //print the values
		std::cout << values2.at(i) << "  ";
	std::cout << std::endl;

	//C++11 Initialization list
	std::vector<std::string> names1 { "Steffen", "Peter", "Tom", "Sebastian" };
	
	//names2 == names1
	std::vector<std::string> names2(names1.begin(), names1.end());

	//names3 == names1
	std::vector<std::string> names3(names1);

	//names4
	std::vector<std::string> names4(6, "Steffen");
	for (int i = 0; i < names4.size(); i++)
		std::cout << names4.at(i) << "  ";
	std::cout<< std::endl;



	std::cin.get();
}