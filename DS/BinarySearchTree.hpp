//
//  BinarySearchTree.hpp
//  DS
//
//  Created by 陆慧晨 on 2019/7/6.
//  Copyright © 2019 陆慧晨. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <stdio.h>


typedef struct BinarySearchTree{
    struct BinarySearchTree *left, *right;
    
    int data;
    
}BinarySearchTree;

#endif /* BinarySearchTree_hpp */
