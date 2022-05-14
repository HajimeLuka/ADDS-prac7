#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "Sort.h"

using namespace std;

BubbleSort::BubbleSort():Sort(){

}

vector<int> BubbleSort::sort(vector<int> list){
    // vector<int> new_list;
    int length=list.size();

    for (int i=0; i<length; i++){
        for (int j=i+1; j<length; j++){
            if (list[j]<list[i]){
                swap(list[j], list[i]);
            }

        }

    }

    return list;

}
