//
//  BinaryTree.hpp
//  DS
//
//  Created by 陆慧晨 on 2019/7/3.
//  Copyright © 2019 陆慧晨. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>



#define element_type int


typedef struct BinaryTree{
    element_type data;
    struct BinaryTree *left, *right;
}BinaryTree;




void BinaryTreePreOrder(BinaryTree *root);
void BinaryTreeMidOrder(BinaryTree *root);
void BinaryTreePostOrder(BinaryTree *root);

void BinaryTreePreOrderNonRecurse(BinaryTree *root);
void BinaryTreeMidOrderNonRecurse(BinaryTree *root);
void BinaryTreePostOrderNonRecurse(BinaryTree *root);


void BinaryTreePreOrderNonRecurse2(BinaryTree *root);

BinaryTree *BinaryTreeCreate(void);

#endif /* BinaryTree_hpp */
