//
//  AboutArray.cpp
//  LinearList
//
//  Created by www on 2020/5/6.
//  Copyright © 2020年 woodlouse. All rights reserved.
//

#include <algorithm>
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

int removeDuplicatesFromSortedArrayWithSTL(int A[], int n)
{
    return std::distance(A, std::unique(A, A+n));
}

int duplicatesAtMostTwice00(int A[], int n)
{
    if (n<=2) {
        return 2;
    }
    
    int index = 0;
    int repeat = 1;
    for (int i=1; i<n; i++) {
        if (A[i] != A[index]) {
            A[++index] = A[i];
            repeat = 1;
        }
        else {
            if(repeat < 2) {
                ++repeat;
                ++index;
            }
        }
    }
    
    return index+1;
}

int duplicatesAtMostTwice01(int A[], int n)
{
    int duplicateCnt = 2;
    if (n<=duplicateCnt) {
        return n;
    }
    
    int index = duplicateCnt;
    for (int i=duplicateCnt; i<n; i++) {
        if (A[i] != A[index-duplicateCnt]) {
            A[index++] = A[i];
        }
    }
    
    return index;
}
