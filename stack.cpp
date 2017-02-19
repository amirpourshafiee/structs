//
//  stack.cpp
//  
//
//  Created by amir on 2/18/17.
//
//


//  Last In First Out
//  insertion done by push, deletion by pop
#include "stack.hpp"
#include <stdio.h>
#define MAXSIZE 5 

struct stack{
    int stk[MAXSIZE];
    int top;
};

typedef struct stack STACK;
STACK   s;


//  push
void push (void)
{
    int num;
    scanf("%d", &num);
    s.top =s.top +1;
    s.stk[s.top]=num;
}
//  pop
int pop (void){
    int num;
    num = s.stk[s.top];
    s.top =s.top - 1;
    return num;
}
//  display
void display (void){
    int i;
    for (i=s.top; i>=0; i-- )
        print ("%d \n", s.stk[i]);
}

//  Test harness for prototypping
int main void
{
    int choice;
    int option =1;
    s.top = -1;
    
    while (option){
        scanf("%d", &choice);
        switch (choice){
            case 1:
                push();
                break;
                
            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;
                
            case 4:
                return;
        }
        fflush(stdin);
    }
    return 0;
}
