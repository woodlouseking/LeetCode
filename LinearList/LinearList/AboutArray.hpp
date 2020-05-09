//
//  AboutArray.hpp
//  LinearList
//
//  Created by www on 2020/5/6.
//  Copyright © 2020年 woodlouse. All rights reserved.
//

#ifndef AboutArray_hpp
#define AboutArray_hpp

#include <stdio.h>

// Remove Duplicates from Sorted Array
int removeDuplicatesFromSortedArray(int A[], int n);
int removeDuplicatesFromSortedArrayWithSTL(int A[], int n);

// What if duplicates are allowed at most twice
int duplicatesAtMostTwice00(int A[], int n);
int duplicatesAtMostTwice01(int A[], int n);

// Search in Rotated Sorted Array, No Duplicate exists in the array
int SearchInRotatedSortedArray(int A[], int len, int target);

// Seart in Rotated Sorted Array, Duplicates exists in the array
int searchInRotatedSortedArrayWithDuplicate(int A[], int len, int target);

// Find the kth Element in two sorted array
int findTheKthElementInTwoSortedArray00(int A[], int m, int B[], int n, int kth);
int findTheKthElementInTwoSortedArray01(int A[], int m, int B[], int n, int kth);


#endif /* AboutArray_hpp */
