#include <iostream>
#include <string>
#include <memory>
/*
"Allocater" sind Objekte, die für das Memory-Management verantwortlich sind.
template <class T>
class allocater;

##--> std::allocater
->Wird genützt um Speicher zu Allozieren und Deallozieren. Nützt einfach new und delete
um Speicher zu "erhalten" und frei zu geben.


*/

int main()
{
	//Example1
	//Allocator for float
	std::allocator<float> myAllocator;

	//allocate memory for 6 floats
	float* arr = myAllocator.allocate(6);

	//define the allocated array
	for (int i = 0; i < 6; i++)
		myAllocator.construct(&arr[i], 27.45);
	
	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << "   ";
	std::cout << std::endl;

	//deallocate the memory
	myAllocator.deallocate(arr, 6);



	//Example2
	//allocator
	std::allocator<std::string> myAllocator2;
	
	//allocate
	std::string* str = myAllocator2.allocate(4);

	//define/construct
	myAllocator2.construct(str, "Das");
	myAllocator2.construct(&str[1], "ist");
	myAllocator2.construct(&str[2], "ein");
	myAllocator2.construct(&str[3], "Test");

	for (int i = 0; i < 4; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;

	//deallocate
	myAllocator2.deallocate(str, 4);



	std::cin.get();

}