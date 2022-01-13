#include <iostream>	// selection_sort
#include <vector>

template <typename T>
void swap (T & t1, T & t2)
{
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}
const int size = 10;

int main()
{
	std::vector <int> vec;
	for (int i=0; i<size; ++i)
	{
		vec.push_back(std::rand() %10);
	}
	for (int i=0; i<size; ++i)
	{
		std::cout<< vec[i] << "\t";
	}
	std::cout<< std::endl;

	for (int i=0; i<size-1; ++i)
	{
		int min = i;
		for (int j=i+1; j<size; ++j)
		{
			if (vec[j] < vec[min])
			min = j;
		}		
			if (min != i)
			swap(vec[i], vec[min]);
		
	}
	for (int i=0; i<size; ++i)
	{
		std::cout<< vec[i] << "\t";
	}
	std::cout<< std::endl;
return 0;
}
