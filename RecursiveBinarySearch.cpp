#include "RecursiveBinarySearch.h"

#include <vector>
#include <iostream>
using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){

}

bool RecursiveBinarySearch::search(vector<int> list, int x){
    int length = list.size();

    int lower = 0;
    int upper = length-1;

    vector<int> newList;

    int mid = (upper+lower)/2;

    if(lower>0){

        if (x == list[mid]){
            return true;
        }

        //search left subarray
        else if (list[mid] > x){

            for (int i=0; i<mid-1; i++){
                newList.push_back(list[i]);
            }

            return search(newList, x);
        }

        //search in the right subarray
        else if (list[mid] < x){

            for (int i=mid+1; i<length; i++){

                newList.push_back(list[i]);

            }

            return search(newList, x);

        }

    }

    return false;

}