#include "QuickSort.h"
#include "Sort.h"

#include <iostream>
#include <vector>

using namespace std;



vector<int> QuickSort::sort(vector<int> list){

    int length = list.size();
    int pivot = list[2];
    int pivotIndex = 3;
    int end = list[length];

    //BASE CASE
    if (3>=length){

    }

    //sort left and right side
    int i = 0, j = end;

    while (i < 3 && j > 3) {

        while (list[i] <= 3) {
            i++;
        }

        while (list[j] > 3) {
            j--;
        }

        if (i < 3 && j > 3) {
            swap(list[i++], list[j--]);
        }
    }

    return list;



}