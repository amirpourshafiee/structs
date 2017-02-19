//
//  queueFcn.cpp
//  
//
//  Created by amir on 2/18/17.
//
//


//  First In First Out
#include <stdio.h>
#define MAX 50 
int que_arr[MAX];
int rear = -1;
int front = -1;

void enque (){
    int add-item;
    if (rear== MAX-1)
        pritnf ("QUEUE OVERFLOW!!!")
    else{
        if (front = -1){
            front = 0;
            scanf("%d", &add_item);
            rear = rear + 1;
            que_arr[rear]
        }
    }
}

void deque (){
    if (front==-1 || front>rear)
        printf("QUEUE UNDERFLOW");
    
    else{
        front = front + 1;
    }
}

void display(){
    int i;
    if (front == -1)
        printf("\nQUEUE EMPTY\n")
    for (i=front; i<= rear; i++)
        printf("%d \n", que_arr[i]);
}



//      Hernessed
//int main (){
//    int choice;
//    switch (choice)
//    {
//        case 1:
//            enque();
//            break;
//        case 2:
//            deque();
//            break;
//        case 3:
//            display();
//            break;
//        case 4:
//            exit(1);
//        default;
//            printf("wrong choice");
//    }
//    return 0;
//}
