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

// remove element
int removeElement(int A[], int n, int target);

// Next Permutation
void nextPermutation(int A[], int n);

// all Permutation
bool allPermutation(int A[], int n);

// Permutation Sequence
int factorial(int n);
vector<int> kthPermutation01(const vector<int>&num, int k);

// List Node
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):
    val(x),
    next(nullptr) {
        
    }
};

//reverse list
ListNode* reverseList(ListNode *head);

//reverse list
//void reverseListM2N(ListNode *head, int m, int n);
ListNode* reverseListM2N(ListNode *head, int m, int n);

// Partition List
ListNode* partition(ListNode* head, int x);

// Remove Duplicates from Sorted List
ListNode *removeDuplicatesFromSortedList(ListNode *head);
ListNode *removeDuplicatesFromSortedListUseRecursion(ListNode *head);

#endif /* AboutArray_hpp */
