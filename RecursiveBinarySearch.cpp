#include "RecursiveBinarySearch.h"

#include <vector>
#include <iostream>
using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){

}

bool RecursiveBinarySearch::search(vector<int> list, int x){
    int length = list.size();
    int start = 0;
    vector<int> List = list;
    vector<int> newList;

    int mid = (start+length)/2;

    if(start<=list.size()){

        if (list[mid] == x){
        return true;
        }


        //search left subarray
        if (list[mid] > x){
            for (int i=0; i<mid-1; i++){
                newList[i]=List[i];
            }

            search(newList, x);
        }

        //search in the right subarray

        if (list[mid] < x){
            for (int i=mid+1; i<length; i++){
                newList[i-mid-1]=List[i];
            }

            search(newList, x);
    }

    else{
        return false;
    }

    }


}