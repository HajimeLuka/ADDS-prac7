#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

#include <iostream>
#include <vector>

class BubbleSort: public Sort{
public:

    std::vector<int> sort(std::vector<int> list);


};
#endif