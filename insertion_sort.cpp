#include <iostream>	//	insertion_sort
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
	std::cout<< "The vectors random nambers is: \n";
	for (int i=0; i<size; ++i)
	{
		std::cout<< vec[i] << "\t";
	}
	std::cout<< std::endl;

	for (int i=0; i<size; ++i)
	{
		int j = i;
		while ((j >0) and (vec[j-1] > vec[j]))
		{
		  	swap(vec[j-1], vec[j]);
			--j;	
		}
	}

	for (int i=0; i<size; ++i)
	{
		std::cout<< vec[i] << "\t";
	}
	std::cout<< std::endl;
return 0;
}
