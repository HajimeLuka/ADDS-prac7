#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main(){
    string input;
    vector<int> userInput;
    vector<int> resultVectorB;
    vector<int> resultVectorQ;
    bool SearchResult;


    //create Bubble Sort object
    Sort* bSort = new BubbleSort();
    Sort* qSort = new QuickSort();

    //create sorting object
    RecursiveBinarySearch* search = new RecursiveBinarySearch();

    //get user input and push into vector userInput
    getline(cin, input);
    stringstream str_strm;

    str_strm << input;
    string temporaryStr;

    // add numbers to vector
    int temporaryInt;

    while(!str_strm.eof()) {
        str_strm >> temporaryStr;
        if(stringstream(temporaryStr) >> temporaryInt) {
            userInput.push_back(temporaryInt);
        }


        temporaryStr = "";

    }

    //SORT
    resultVectorB = bSort->sort(userInput);
    resultVectorQ = qSort->sort(userInput);


    //SEARCH
    SearchResult = search->search(userInput, 1);

    string res;

    if (SearchResult==1){
        res = "true";
    }


    if (SearchResult==0){
        res = "false";
    }


    // for(int i=0; i<resultVectorB.size(); i++){
    //     cout<<resultVectorB[i]<<" ";
    // }

    cout<<res<<" ";

    for(int i=0; i<resultVectorQ.size(); i++){
        cout<<resultVectorQ[i]<<" ";
    }


}