//
//  AboutArray.cpp
//  LinearList
//
//  Created by www on 2020/5/6.
//  Copyright © 2020年 woodlouse. All rights reserved.
//

#include <algorithm>
#include <unordered_map>
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

// Search in Rotated Sorted Array, No Duplicate exists in the array
// 时间复杂度O(logN) 空间复杂度O(1)
int SearchInRotatedSortedArray(int A[], int len, int target)
{
    int first = 0;
    int last = len;
    
    while (first != last) {
        int mid = (first + last) / 2;
        if (A[mid] == target) {
            return mid;
        }
        
        // first和mid是一个连续的排序区间段
        if (A[first] <= A[mid]) {
            // target在first和mid的区间段，移动last
            if (A[first]<=target && target<A[mid]) {
                last = mid;
            } else {
                first = mid + 1;
            }
        }
        else {
            // mid和last是一个连续的排序区间段
            if (A[mid]<target && target<=A[last-1]) {
                // 移动first
                first = mid + 1;
            } else {
                last = mid;
            }
        }
    }
    
    return -1;
}

// Search in Rotated Sorted Array, Duplicate exists in the array
// 时间复杂度O(N) 空间复杂度O(1)
int searchInRotatedSortedArrayWithDuplicate(int A[], int len, int target)
{
    int first = 0;
    int last = len;
    
    while (first != last) {
        int mid = (first + last) / 2;
        if (A[mid] == target) {
            return mid;
        }
        if (A[first] < A[mid]) {
            // first到mid之间是一个连续的排序区间段
            if (A[first]<=target && target<A[mid]) {
                // target在first和mid之间，移动Last
                last = mid;
            } else {
                first = mid + 1;
            }
        }
        else if(A[first] > A[mid]) {
            // mid到last之间是一个连续的排序区间段
            if (A[mid]<target && target<=A[last-1]) {
                //target在mid和last之间,移动first
                first = mid + 1;
            } else {
                last = mid;
            }
        }
        else {
            // first和mid相等，移动first
            ++first;
        }
    }
    
    return -1;
}


// Find the kth Element in two sorted array
// 时间复杂度O(m+n) 空间复杂度O(1)
int findTheKthElementInTwoSortedArray00(int A[], int m, int B[], int n, int kth)
{
    if (kth > (m+n)) {
        return -1;
    }
    
    int resVal = 0;
    int toThek = 0;
    int i = 0; // A游标
    int j = 0; // B游标
    while (toThek != kth) {
        if (i<m && j<n) {
            if (A[i]<B[j]) {
                resVal = A[i];
                ++i;
            }
            else{
                resVal = B[j];
                ++j;
            }
        }
        else if (i < m) {
            resVal = A[i];
            ++i;
        }
        else {
            resVal = B[j];
            ++j;
        }
        
        ++toThek;
    }
    
    return resVal;
}

/*
 使用二分查找法查找
 保证 m < n
 若A[k2/-1] < B[k/2 - 1] , 则丢弃A[k/2]元素
 若A[K/2-1] > B[k/2 - 1] , 则丢弃B[k/2]元素
 若A[k/2-1] == B[k/2-1], 返回A[K/2-1]
 
 时间复杂度O(log(m+n))，空间复杂度O(1)
*/
int findTheKthElementInTwoSortedArray01(int A[], int m, int B[], int n, int kth)
{
    if (kth > (m+n)) {
        return -1;
    }
    if(m > n) {
        return findTheKthElementInTwoSortedArray01(B, n, A, m, kth);
    }
    if (kth == 1) {
        return std::min(A[0], B[0]);
    }
    if (m == 0) {
        return B[kth-1];
    }
    
    //分割k
    int ia = std::min(kth/2, m);
    int ib = kth - ia;
    
    if (A[ia-1] < B[ib-1]) {
        return findTheKthElementInTwoSortedArray01(A+ia, m-ia, B, n, kth-ia);
    }
    if (A[ia-1] > B[ib-1]) {
        return findTheKthElementInTwoSortedArray01(A, m, B+ib, n-ib, kth-ib);
    }
    
    return A[ia-1];
}

// Find the Longest Consecutive Sequence
int findTheLongestConsecutiveSequence(int A[], int n)
{
    std::unordered_map<int, bool> used;
    
    int longestLen = 0;
    
    for (int i=0; i<n; ++i) {
        used[A[i]] = false;
    }
    
    for(int i=0; i<n; i++) {
        if (used[A[i]]) {
            continue;
        }
        
        int len = 1;
        used[A[i]] = true;
        
        // 向右寻找数字
        for (int j=A[i]+1; used.find(j)!=used.end(); j++) {
            used[j] = true;
            ++len;
        }
        
        //向左寻找数组
        for(int j=A[i]-1; used.find(j)!=used.end(); j--) {
            used[j] = true;
            ++len;
        }
        
        longestLen = std::max(longestLen, len);
    }
    
    return longestLen;
}
