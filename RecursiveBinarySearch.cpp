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

    if(lower<=length){

        if (list[mid] == x){
            // cout<<"hi"<<endl;
            return true;
        }

        //search left subarray
        else if (list[mid] > x){
            // cout<<"hello"<<endl;

            for (int i=0; i<mid+1; i++){
                newList.push_back(list[i]);
            }

            search(newList, x);
        }

        //search in the right subarray

        else if (list[mid] < x){

            // cout<<"PAIN";

            for (int i=mid-1; i<upper; i++){

                newList.push_back(list[i]);
                cout<<newList[i]<<endl;

            }


            search(newList, x);

    }

    }

    return false;

}