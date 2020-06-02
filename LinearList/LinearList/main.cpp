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

void testRemoveElement() {
    const int len = 5;
    int A[len] = {1, 2, 5, 7, 2};
    int target = 2;
    int newLen = removeElement(A, 5, target);
    cout<<"new array len = "<<newLen<<"  elements is -> "<<endl;
    for(int i=0; i<newLen; ++i) {
        cout<<" "<<A[i];
    }
}


void testNextPermutation() {
    const int len = 3;
    int A[len] = {1, 2, 3};
    nextPermutation(A, len);
    cout<<"1 2 3 next -> ";
    for(int i=0; i<len; i++) {
        cout<<A[i]<<" ";
    }
}

// 第k个排列
void testKthPermutation() {
    int n = 3;
    vector<int> s(n);
    for (int i=0; i<n; ++i) {
        s[i] = (i+1);
    }
    vector<int> res = kthPermutation01(s, 1);
    for (int i=0; i<n; ++i) {
        cout<<res[i]<< " ";
    }
    cout<<endl;
}

void showList(ListNode *pHead) {
    ListNode *pCur = pHead;
    while (pCur) {
        cout<<pCur->val<<" ";
        pCur = pCur->next;
    }
    
    cout<<endl;
}

void testReverse() {
    ListNode head(1);
    ListNode *pCur = &head;
    for(int i=2; i<=10; i++) {
        ListNode *p = new ListNode(i);
        pCur->next = p;
        pCur = p;
    }
    
    cout<<"Init List : " <<endl;
    showList(&head);
    
    
    ListNode* pReverseHead = reverseList(&head);
    cout<<"Reverse List : " <<endl;
    showList(pReverseHead);
    
};

void testReverseM2N() {
    ListNode head(1);
    ListNode *pCur = &head;
    for(int i=2; i<=10; i++) {
        ListNode *p = new ListNode(i);
        pCur->next = p;
        pCur = p;
    }
    
    cout<<"Init List : " <<endl;
    showList(&head);
    
    
    ListNode *result = reverseListM2N(&head, 2, 9);
    cout<<"Reverse List : " <<endl;
    showList(result);
    
};

void testPartitionList()
{
    ListNode head(1);
    ListNode val1(4);
    ListNode val2(3);
    ListNode val3(2);
    ListNode val4(5);
    ListNode val5(2);
    
    head.next = &val1;
    val1.next = &val2;
    val2.next = &val3;
    val3.next = &val4;
    val4.next = &val5;
    val5.next = nullptr;
    cout<<"Init list"<<endl;
    showList(&head);
    
    int val = 3;
    ListNode *result = partition(&head, val);
    cout<<"partition list with value "<<val<<endl;
    showList(result);
}

void testRemoveAllDuplicatesFromStoredList()
{
    ListNode *head = new ListNode(1);
    ListNode *v1 = new ListNode(2);
    ListNode *v2 = new ListNode(3);
    ListNode *v3 = new ListNode(3);
    ListNode *v4 = new ListNode(4);
    ListNode *v5 = new ListNode(4);
    ListNode *v6 = new ListNode(5);
    head->next = v1;
    v1->next = v2;
    v2->next = v3;
    v3->next = v4;
    v4->next = v5;
    v5->next = v6;
    
    cout<<"Init List:"<<endl;
    showList(head);
    
    head = removeAllDuplicatesFromSortedList(head);
    cout<<"Afer remove:"<<endl;
    showList(head);
    
    freeList(head);
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
    
//    test3sumClosest();
    
//    testRemoveElement();
    
//    testNextPermutation();
    
//    testKthPermutation();
    
    //    testReverse();
//    testReverseM2N();
    
//    testPartitionList();
    
    testRemoveAllDuplicatesFromStoredList();
    
    std::cout<<std::endl;
    return 0;
}
