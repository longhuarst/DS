//
//  AvlTree.hpp
//  DS
//
//  Created by 陆慧晨 on 2019/7/6.
//  Copyright © 2019 陆慧晨. All rights reserved.
//

#ifndef AvlTree_hpp
#define AvlTree_hpp

#include <stdio.h>




typedef struct AvlTree{
    
    int data;
    struct AvlTree *left, *right;
    
    int height;
}AvlTree;





#endif /* AvlTree_hpp */
