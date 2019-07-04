//
//  Stack.hpp
//  DS
//
//  Created by 陆慧晨 on 2019/7/3.
//  Copyright © 2019 陆慧晨. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>





typedef struct Stack{
    void **pData;
    int top;
    int length;
}Stack;





Stack *StackInit(int size,int element_size);
bool StackIsEmpty(Stack *pStk);
bool StackIsFull(Stack *pStk);
void *StackPop(Stack *pStk);
void StackPush(Stack *pStk, void *pData);






#endif /* Stack_hpp */
