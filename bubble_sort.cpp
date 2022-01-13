#include <iostream>	// 	bubbl_sort

template <typename T>
void swap (T & t1, T & t2)
{
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}

int main()
{
	int size{};
	std::cout<< "Enter arrays size :\n";
	std::cin>> size;
	int *arr = new int[size];
	for (int i=0; i<size; ++i)
	{	
		arr[i] = std::rand() %100;
	}
	std::cout<< std::endl;
	for (int i=0; i<size; ++i)
	{	
		std::cout<< arr[i] << "\t";
	}
	std::cout<< std::endl;
	
	for (int i=0; i<size-1; ++i)
	{
		for (int j=0; j<size-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
	}
	
	std::cout<< std::endl;
	for (int i=0; i<size; ++i)
	{	
		std::cout<< arr[i] << "\t";
	}
	delete [] arr;
	arr = nullptr;


	return 0;
}
