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
#include <vector>

using namespace std;

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

// Find the Longest Consecutive Sequence
int findTheLongestConsecutiveSequence(int A[], int n);

// Two Sum
void findTwoSum00(int A[], int n, int target, int &index1, int &index2);
void findTwoSum01(int A[], int n, int target, int &index1, int &index2);

// ThreeSum
vector<vector<int>> threeSum(vector<int> &num);

// 3sum closest
int threeSumColset(vector<int> &num, int target);

#endif /* AboutArray_hpp */
