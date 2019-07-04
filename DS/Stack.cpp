//
//  Stack.cpp
//  DS
//
//  Created by 陆慧晨 on 2019/7/3.
//  Copyright © 2019 陆慧晨. All rights reserved.
//

#include "Stack.hpp"


#include <stdlib.h>




Stack *StackInit(int size,int element_size)
{
    if (size<= 0 )
        return NULL;
    
    Stack *pStack = (Stack *)malloc(sizeof(struct Stack));
    
    
//    printf("sizeof(void *)=%d\r\n",sizeof(void *));
    
//    for (int i=0;i<size;++i)
    
//    printf("%08x\r\n",malloc(size*sizeof(void *)));
        pStack->pData = (void **)malloc(size*sizeof(void *));
    
    pStack->top = -1;
    
    pStack->length = size;
    
    return pStack;
}



bool StackIsEmpty(Stack *pStk)
{
    if (pStk->top == -1){
        return true;
    }
    return false;
}

bool StackIsFull(Stack *pStk)
{
    if (pStk->top >= pStk->length -1){
        return true;
    }
    
    return false;
}



void *StackPop(Stack *pStk)
{
    
    if(StackIsEmpty(pStk) == true)
        return NULL;

    pStk->top--;
    
    return pStk->pData[pStk->top+1];
    
}


void StackPush(Stack *pStk, void *pData)
{
    
    if (StackIsFull(pStk) == true){
        return;
    }
    
    pStk->top++;
    
    pStk->pData[pStk->top] = pData;
    
}

