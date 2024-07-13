// sorting_algorithms/src/main.cpp
#include <iostream>
#include <vector>
#include "merge_sort.h"

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Given array is \n";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "\nSorted array is \n";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}
