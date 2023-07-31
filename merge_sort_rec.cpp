/*	merge_sort_rec.cpp	*/

#include <iostream>
#include <vector>

template <typename T>
void merge(std::vector<T>& arr, int start, int mid, int end) {
    int start1 = start;
    int start2 = mid + 1;
    std::vector<T> tmp;

    while (start1 <= mid && start2 <= end) {
        if (arr[start1] < arr[start2]) {
            tmp.push_back(arr[start1++]);
        } else {
            tmp.push_back(arr[start2++]);
        }
    }

    while (start1 <= mid) {
        tmp.push_back(arr[start1++]);
    }

    while (start2 <= end) {
        tmp.push_back(arr[start2++]);
    }

    for (int i = 0; i < tmp.size(); ++i) {
        arr[start + i] = tmp[i];
    }
}

template <typename T>
void merge_sort(std::vector<T>& arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    std::vector<int> arr {77,8,1,99,109,3,5};
    int size = arr.size();

    merge_sort(arr, 0, size - 1);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "\t";
    }

    return 0;
}




