/*	sorting.cpp	*/

#include <iostream>

template <typename T>
void bubble_sort (T*, const int);

template <typename T>
void selection_sort (T*, const int);

template <typename T>
void insertion_sort (T*, const int);

template <typename T>
void print_array (T*, const int);


int main () {
	const int size {5};
	int arr[size] {5,4,3,2,1};
	bubble_sort(arr, size);
//	selection_sort(arr, size);
//	insertion_sort(arr, size);
	print_array(arr, size);
	
} 


template <typename T>
void bubble_sort (T* arr, const int size) {
	for (int i {}; i<size; ++i) {
		for (int j{}; j<size-i-1; ++j) {
			if (arr[j] > arr[j+1]) {
				std::swap(arr[j], arr[j+1]);
				}
			}
		}
}

template <typename T>
void selection_sort (T* arr, const int size) {
	for (int i{}; i<size; ++i) {
		bool flag {true};
		int min_index {i};
		for (int j{i+1}; j<size; ++j) {
			if (arr[j] < arr[min_index]) {
				flag = false;
				std::swap(arr[j], arr[min_index]);
				}
			if (flag) {
				break;
				}
			}
		}
}

template <typename T>
void insertion_sort (T* arr, const int size) {
	for (int i{1}; i<size; ++i) {
		T tmp {arr[i]};
		int j{i-1};
		while (j >= 0 and tmp < arr[j]) {
			arr[j+1] = arr[j];
			--j;
			}
		arr[++j] = tmp;
		}
}

template <typename T>
void print_array (T* arr, const int size) {
	for (int i{}; i<size; ++i) {
		std::cout<< arr[i] << '\t';
		}
}



