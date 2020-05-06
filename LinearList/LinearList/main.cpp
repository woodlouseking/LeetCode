//
//  main.cpp
//  LinearList
//
//  Created by www on 2020/5/6.
//  Copyright © 2020年 woodlouse. All rights reserved.
//

#include <iostream>
#include "AboutArray.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    const int len = 5;
    int A[len] = {1, 1, 2, 3, 3};
    int res = removeDuplicatesFromSortedArray(A, len);
    std::cout<<"res = "<<res<<std::endl;
    for(int i=0; i<res; i++) {
        std::cout<<A[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
