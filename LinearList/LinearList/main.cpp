//
//  main.cpp
//  LinearList
//
//  Created by www on 2020/5/6.
//  Copyright © 2020年 woodlouse. All rights reserved.
//

#include <iostream>
#include "AboutArray.hpp"

void testRemoveDuplicatesFromSortedArray()
{
    const int len = 6;
    int A[len] = {1, 1, 1, 2, 3, 3};
    //    int res = removeDuplicatesFromSortedArray(A, len);
    //    int res = removeDuplicatesFromSortedArrayWithSTL(A, len);
    
    //    int res = duplicatesAtMostTwice00(A, len);
    int res = duplicatesAtMostTwice01(A, len);
    std::cout<<"res = "<<res<<std::endl;
    for(int i=0; i<res; i++) {
        std::cout<<A[i]<<" ";
    }
}

void testSearchInRotatedSortedArray()
{
    const int len = 10;
    int A[len] = {4, 5, 6, 7, 8, 9, 0, 1, 2, 3};
    
    int index = SearchInRotatedSortedArray(A, len, 3);
    std::cout<<"find 3 in array index = "<<index<<std::endl;
    
    index = SearchInRotatedSortedArray(A, len, 11);
    std::cout<<"find 11 in array index ="<<index<<std::endl;
    
    index = SearchInRotatedSortedArray(A, len, 5);
    std::cout<<"find 5 in array index ="<<index<<std::endl;
    
    index = SearchInRotatedSortedArray(A, len, 0);
    std::cout<<"find 0 in array index ="<<index<<std::endl;
}

void testSearchInRotatedSoredArrayWithDuplicate()
{
    const int len = 15;
    int A[len] = {5, 5, 5, 5, 5, 7, 8, 9, 1, 1, 1, 2, 2, 3, 5};
    
    int index = searchInRotatedSortedArrayWithDuplicate(A, len, 5);
    std::cout<<"find 5 in array index ="<<index<<std::endl;
    
    index = searchInRotatedSortedArrayWithDuplicate(A, len, 7);
    std::cout<<"find 7 in array index ="<<index<<std::endl;
    
    index = searchInRotatedSortedArrayWithDuplicate(A, len, 17);
    std::cout<<"find 17 in array index ="<<index<<std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    testRemoveDuplicatesFromSortedArray();
//    testSearchInRotatedSortedArray();
    testSearchInRotatedSoredArrayWithDuplicate();
    std::cout<<std::endl;
    return 0;
}
