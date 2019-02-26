#include <iostream>

#include <array>

int main()
{
	//Array on the stack:
	std::cout << "Stack" << std::endl;
	static const int size = 5;
	int stack_array[size];
	stack_array[0] = 2;
	stack_array[1] = 3;
	stack_array[2] = 4;
	stack_array[3] = 5;
	stack_array[4] = 1;
	int count = sizeof(stack_array) / sizeof(int);
	std::cout << "Adresse Array: " << stack_array << std::endl;
	std::cout << "Anzahl der Bytes: " << count << std::endl;
	

	//Array on the heap
	std::cout << "Heap" << std::endl;
	int* heap_array = new int[5];
	heap_array[0] = 2;
	heap_array[1] = 3;
	heap_array[2] = 4;
	heap_array[3] = 5;
	heap_array[4] = 1;
	std::cout << "Adresse Pointer: " << &heap_array << std::endl;
	std::cout << "Adresse Array: " << heap_array << std::endl;


	//C++11 standard array
	std::cout << "C++11 standard array" << std::endl;
	std::array<int, 5> another;
	for (int i = 0; i < another.size(); i++)
	{
		another[i] = i;
		std::cout << another[i] << std::endl;
	}



	std::cin.get();
}