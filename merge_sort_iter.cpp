/*	merge_sort_iter.cpp	*/

#include <iostream>
#include <vector>

template <typename T>
void merge(std::vector<T>& arr, int start, int mid, int end) {
    std::vector<T> tmp;
    int start1 = start;
    int start2 = mid + 1;

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
void merge_sort(std::vector<T>& arr) {
    int size = arr.size();
    int step = 1;

    while (step < size) {
        int start = 0;

        while (start + step < size) {
            int mid = start + step - 1;
            int end = mid + step;
            if (end >= size) {
                end = size - 1;
            }
            merge(arr, start, mid, end);
            start = end + 1;
        }

        step *= 2;
    }
}

int main() {
    std::vector<int> arr {6, 2, 7, 4, 8, 9, 8};

    merge_sort(arr);

    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << "\t";
    }

    return 0;
}



