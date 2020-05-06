//
//  AboutArray.cpp
//  LinearList
//
//  Created by www on 2020/5/6.
//  Copyright © 2020年 woodlouse. All rights reserved.
//

#include "AboutArray.hpp"

//Remove Duplicates from Sorted Array

int removeDuplicatesFromSortedArray(int A[], int n)
{
    if(n==0) {
        return 0;
    }
    
    int index = 0;
    for(int i=1; i<n; i++) {
        if (A[i] != A[index]) {
            A[++index] = A[i];
        }
    }
    return index + 1;
}

