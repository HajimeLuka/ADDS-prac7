#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

#include <iostream>
#include <vector>

class QuickSort: public Sort{
public:

    QuickSort();
    virtual std::vector<int> sort(std::vector<int> list);

};

#endif



