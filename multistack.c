#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX], top1 = -1, top2 = MAX;
void push_stack1(int value){
    if(top1 == top2-1)
        printf("Stack-1 overflow. Cannot push element in stack-1\n");
        else{
            stack[++top1] = value;
            printf("\nPushed %d into stack-1. \n",value);
        }
    }

void push_stack2(int value){
    if(top1 == top2-1)
    printf("Stack-2 overflow. Cannot push element in stack-2\n");
    else{
        stack[--top2] = value;
        printf("\nPushed %d into stack-2.\n",value);
    }
}

int pop_stack1(){
    if(top1 == -1){
        printf("\nStack-1 underflow. Cannot pop from empty stack\n");
        return -1;
    }
    else{
        int val = stack[top1];
        top1--;
        return val;
    }
}

int pop_stack2(){
    if(top2 == MAX){
        printf("\nStack-2 underflow. Cannot pop from empty stack\n");
        return -1;
    }
    else{
        int val = stack[top2];
        top2++;
        return val;
    }
}

int peek_stack1(){
    if(top1 == -1){
        printf("\nStack-1 underflow. Cannot peek from empty stack\n");
        return -1;
    }
    else
    return stack[top1];
}

int peek_stack2(){
    if(top2 == MAX){
        printf("Stack-2 is empty.\n");
        return -1;
    }
    return stack[top2];
}

void display1(){
    if(top1 == -1)
        printf("\nStack-1 is empty\n");
    else{
        printf("Stack-1 elements are : \n");
        for(int i=top1 ; i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

void display2(){
    if(top2 == MAX)
        printf("\nStack-2 is empty\n");
    else{
        printf("Stack-2 elements are : \n");
        for(int i=top2 ; i<MAX;i++){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    int choice, val, res, num;
    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter Stack number(1-2): ");
                scanf("%d", &num);
                printf("Enter value: ");
                scanf("%d", &val);
                if(num == 1)
                    push_stack1(val);
                else if(num == 2)
                    push_stack2(val);
                break;
            case 2:
                printf("Enter Stack number (1-2): ");
                scanf("%d", &num);
                if(num == 1){
                    res = pop_stack1();
                    if(res != -1)
                        printf("\n%d Pop from stack-1\n", res);
                }
                else if(num == 2){
                    res = pop_stack2();
                    if(res != -1)
                        printf("\n%d Pop from stack-2.\n", res);
                }
                break;
            case 3:
                printf("Enter Stack number (1-2): ");
                scanf("%d", &num);
                if(num == 1){
                    res = peek_stack1();
                    if(res != -1)
                        printf("%d is available at the top of stack-1: \n", res);
                }
                else if(num == 2){
                    res = peek_stack2();
                    if(res != -1)
                        printf("%d is available at the top of stack-2: \n", res);
                }
                break;
            case 4:
                printf("Enter Stack number (1-2): ");
                scanf("%d", &num);
                if(num == 1)
                    display1();
                else if (num ==2)
                    display2();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice...\n");
        }
    }
    return 0;
}
