//
//  BinaryTree.cpp
//  DS
//
//  Created by 陆慧晨 on 2019/7/3.
//  Copyright © 2019 陆慧晨. All rights reserved.
//

#include "BinaryTree.hpp"

#include <stdlib.h>


#include "Stack.hpp"




void BinaryTreePreOrder(BinaryTree *root)
{
    
    if (root==NULL)
        return;
    printf("%d ",root->data);
    BinaryTreePreOrder(root->left);
    BinaryTreePreOrder(root->right);
}



void BinaryTreeMidOrder(BinaryTree *root)
{
    if (root == NULL)
        return;
    
    BinaryTreeMidOrder(root->left);
    printf("%d ",root->data);
    BinaryTreeMidOrder(root->right);
}


void BinaryTreePostOrder(BinaryTree *root)
{
    if (root == NULL)
        return;
    
    BinaryTreePostOrder(root->left);
    BinaryTreePostOrder(root->right);
    printf("%d ",root->data);
}





void BinaryTreePreOrderNonRecurse(BinaryTree *root)
{
    
    Stack *stk = NULL;
    
    stk = StackInit(32, sizeof(BinaryTree *));
    
    BinaryTree *pTree = root;
    
    
    if (root == NULL){
        return; //空🌲
    }
    printf("%d ",pTree->data);
    
    if (pTree->right != NULL)
        StackPush(stk, pTree->right);
    
    pTree = pTree->left;
    
    
    while(!StackIsEmpty(stk) || pTree != NULL){
        
        if (pTree == NULL){
            pTree = (BinaryTree *)StackPop(stk);
            continue;
        }
        
        if (pTree->left){
            printf("%d ",pTree->data);
            pTree = pTree->left;
        }
        
        
    }
}




void BinaryTreePreOrderNonRecurse2(BinaryTree *root)
{

    Stack *stk = NULL;
    
    BinaryTree *pTree = root;
    
    
    if (root == NULL)
        return;
    
    stk = StackInit(32, sizeof(BinaryTree *));
    
    
    while(1){
        printf("%d ",pTree->data);
        if (pTree->right){
            StackPush(stk, pTree->right);
        }
        if (pTree->left){
            pTree = pTree->left;
        }else if (StackIsEmpty(stk)){
            break;
        }else{
            pTree = (BinaryTree *)StackPop(stk);
        }
        
    }
    
}





//中序遍历非递归
void BinaryTreeMidOrderNonRecurse(BinaryTree *root)
{
    BinaryTree *pTree = root;
    
    Stack *stk = NULL;
    
    stk = StackInit(32, sizeof(BinaryTree *));
    
    bool left_end_flag = false;
    
    while(pTree != NULL){
        
        
        

        if (pTree->right != NULL){
            StackPush(stk, pTree->right);
        }else{
            
        }
        
        
       
        if (pTree->left != NULL){
            StackPush(stk, pTree);
            pTree = pTree->left;
            left_end_flag = false;
            continue;
        }else{
            //没有左孩子 //判断右孩子
            
            printf("%d ",pTree->data);
            
            if (StackIsEmpty(stk)){
                break;
            }
            
            pTree = (BinaryTree *)StackPop(stk);
            
            printf("%d ",pTree->data);
            
            if (StackIsEmpty(stk)){
                break;
            }else{
                pTree = (BinaryTree *)StackPop(stk);
            }
            
            
            continue;
            
        }
    }
    
    
    
    
    
    
    
    
    
}



//后序遍历 非递归
void BinaryTreePostOrderNonRecurse(BinaryTree *root)
{
    
    Stack *stk = NULL;
    
    BinaryTree *pTree = root;
    BinaryTree *pPrev = NULL;
    
    stk = StackInit(32, sizeof(BinaryTree *));
    

    
    while(pTree){
    
        if ((pTree->left == NULL && pTree->right == NULL) ||
            (pPrev != NULL &&
                ((pTree->right == NULL && pPrev == pTree->left) ||
                 (pTree->right != NULL && pPrev == pTree->right)))){
            printf("%d ",pTree->data);
            pPrev = pTree;//上次的结点
                    if (StackIsEmpty(stk)){
                        break;
                    }
            pTree = (BinaryTree *)StackPop(stk);
                    continue;
        }
        
        
        if (pTree->left != NULL || pTree->right != NULL){
            StackPush(stk, pTree);
        }
        
        if (pTree->right != NULL){
            StackPush(stk, pTree->right);
        }
        
        if (pTree->left != NULL){
//            StackPush(stk, pTree->left);
            pTree = pTree->left;
        }else{
            pTree = (BinaryTree *)StackPop(stk);
        }
    }
    
    
    
    
}


/*
                            1
                   2                 3
             4        5         6         7
           8   9   10   11   12   13   14   15
 
 //先序遍历 1 2 4 8 9 5 10 11 3 6 12 13 7 14 15
 //中序遍历 8 4 9 2 10 5 11 1 12 6 13 3 14 7 15
 //后序遍历 8 9 4 10 11 5 2 12 13 6 14 15 7 3 1
 
 
*/




BinaryTree *BinaryTreeCreate(void)
{
    
    BinaryTree * node[15];
    
    for (int i=0;i<15;++i){
        node[i] = (BinaryTree *)malloc(sizeof(struct BinaryTree));
        node[i]->data = i+1;
        node[i]->left = NULL;
        node[i]->right = NULL;
    }
  
    
    node[0]->left = node[1];
    node[0]->right = node[2];
    
    node[1]->left = node[3];
    node[1]->right = node[4];
    
    node[2]->left = node[5];
    node[2]->right = node[6];
    
    node[3]->left = node[7];
    node[3]->right = node[8];
    
    node[4]->left = node[9];
    node[4]->right = node[10];
    
    node[5]->left = node[11];
    node[5]->right = node[12];
    
    node[6]->left = node[13];
    node[6]->right = node[14];
    
    
    
    
    
//    if (size <= 0)
//        return NULL;
//
//
//
//    for (int i=0;i<size;++i){
//
//        pTree = (BinaryTree *)malloc(sizeof(struct BinaryTree));
//        pTree->data = i;
//        pTree->left = NULL;
//        pTree->right = NULL;
//
//
//
//        if (i==0)
//            root = pTree;//根结点
//
//    }
    
    
    return node[0];
    
    
}
