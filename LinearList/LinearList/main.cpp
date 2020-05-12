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

// test find the kth element in two sorted array
void testFindTheKthEleInTwoSortedArray()
{
    const int m = 5;
    const int n = 3;
    
    int A[m] = {1, 8, 9, 10, 45};
    int B[n] = {3, 11, 20};
    
    int k = 2;
    int res = findTheKthElementInTwoSortedArray00(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 4;
    res = findTheKthElementInTwoSortedArray00(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 1;
    res = findTheKthElementInTwoSortedArray00(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 8;
    res = findTheKthElementInTwoSortedArray00(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 10;
    res = findTheKthElementInTwoSortedArray00(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
}

void testFindTheKthEleInTwoSortedArray01()
{
    const int m = 5;
    const int n = 3;
    
    int A[m] = {1, 8, 9, 10, 45};
    int B[n] = {3, 11, 20};
    
    int k = 2;
    int res = findTheKthElementInTwoSortedArray01(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 4;
    res = findTheKthElementInTwoSortedArray01(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 1;
    res = findTheKthElementInTwoSortedArray01(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 8;
    res = findTheKthElementInTwoSortedArray01(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
    
    k = 10;
    res = findTheKthElementInTwoSortedArray01(A, m, B, n, k);
    std::cout<<"find the "<<k<<"th val res ="<<res<<std::endl;
}

void findTheLongestSeq() {
    const int len = 7;
    int A[len] = {100, 4, 200, 1, 3, 2, 5};
    
    int res = findTheLongestConsecutiveSequence(A, len);
    std::cout<<"Find the longest is = "<<res<<std::endl;
}

void testFindTwoSum() {
    const int len = 4;
    int A[len] = {2, 11, 15, 7};
    int target = 9;
    int res1 = -1;
    int res2 = -1;
    
    findTwoSum00(A, len, target, res1, res2);
    std::cout<<"find target by 00"<<target<<" index res1 = "<<res1<<" res2 = "<<res2<<std::endl;
    
    findTwoSum01(A, len, target, res1, res2);
    std::cout<<"find target by 01 "<<target<<" index res1 = "<<res1<<" res2 = "<<res2<<std::endl;
    
    target = 10;
    findTwoSum00(A, len, target, res1, res2);
    std::cout<<"find target by 00"<<target<<" index res1 = "<<res1<<" res2 = "<<res2<<std::endl;
}

void test3Sum() {
    
    vector<int> A{-1, 0, 1, 2, -1, -4};
    
    vector<vector<int>> result = threeSum(A);
    for(int i=0; i<result.size(); i++) {
        vector<int> val = result[i];
        for(int j=0; j<val.size(); j++) {
            cout<<" "<<val[j]<< " ";
        }
        cout<<endl;
    }
}

void test3sumClosest() {
    vector<int> num{-1, 2, 1, -4};
    int target = 1;
    int res = threeSumColset(num, 1);
    cout<<"find closest to "<<target<<" is "<<res<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    testRemoveDuplicatesFromSortedArray();
//    testSearchInRotatedSortedArray();
//    testSearchInRotatedSoredArrayWithDuplicate();
    
//    testFindTheKthEleInTwoSortedArray();
//    testFindTheKthEleInTwoSortedArray01();
    
//    findTheLongestSeq();
//    testFindTwoSum();
    
//    test3Sum();
    
    test3sumClosest();
    
    std::cout<<std::endl;
    return 0;
}
