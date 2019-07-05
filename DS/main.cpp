//
//  main.cpp
//  DS
//
//  Created by 陆慧晨 on 2019/7/2.
//  Copyright © 2019 陆慧晨. All rights reserved.
//

#include <iostream>
#include <stdio.h>


#include "BinaryTree.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    BinaryTree *btree = NULL;
    
    btree = BinaryTreeCreate();
    
    printf("\r\n-----     BinaryTreePreOrder     -----\r\n");
    BinaryTreePreOrder(btree);
    
    
    printf("\r\n-----     BinaryTreeMidOrder     -----\r\n");
    BinaryTreeMidOrder(btree);
    
    
    printf("\r\n-----     BinaryTreePostOrder     -----\r\n");
    BinaryTreePostOrder(btree);
    
    printf("\r\n-----     BinaryTreePreOrderNonRecurse     -----\r\n");
    BinaryTreePreOrderNonRecurse2(btree);
    
    
    
    printf("\r\n-----     BinaryTreeMidOrderNonRecurse     -----\r\n");
    BinaryTreeMidOrderNonRecurse(btree);
    
    
    printf("\r\n-----     BinaryTreePostOrderNonRecurse     -----\r\n");
    BinaryTreePostOrderNonRecurse(btree);
    
    
    
    printf("\r\n-----     BinaryTreeLevelOrder     -----\r\n");
    BinaryTreeLevelOrder(btree);
    
    
    
    
    return 0;
}
