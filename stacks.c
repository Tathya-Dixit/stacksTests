#include<stdio.h>
#include<stdlib.h>

struct stacks
{
    int top;
    int stack[100];
};
int push(struct stacks*, int);
int pop(struct stacks*);


void main(){
    struct stacks s1;
    int i, running = 1, ans,anspush,valpop;
    s1.top = -1;

    while(running){
        printf("Enter your choice : \n\t\t1.PUSH\n\t\t2.POP\n\t\t3.Print Stack\n\t\t4.Exit\n>>>");
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
            printf("Enter the valuse to push in the stack : ");
            scanf("%d", &anspush);
            push(&s1,anspush);
            printf("\n");
            break;
        case 2:
            valpop = pop(&s1);
            printf("%d\n\n",valpop);
            break;
        case 3:
            printf("\nStack : \n.........\n");
            for(i=0;i<=s1.top;i++){
                printf("| %d |\n",s1.stack[i]);
            }
            printf(".........\n");
            break;
        
        default:
            running = 0;
            break;
        }
    }
}

int push(struct stacks *s, int x){
    if (s->top==99){
        printf("Overflow");
    }
    else{
        s->top++;
        s->stack[s->top] = x;
    }
    
}
int pop(struct stacks *s){
    int x;
    if (s->top==-1){
        printf("Underflow");
    }
    else{
        x=s->stack[s->top];
        s->top--;
        return x;
    }
    
    
}