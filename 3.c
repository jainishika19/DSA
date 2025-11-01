#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int stack[MAX];
int top=-1;
void push(int data){
    if(top==MAX-1){
        printf("stack overflow");
    }
    top=top+1;
    stack[top]=data;
}
int pop(){
    int val;
    if(top==-1){
        printf("stack underflow");
        exit(1);
    }
    val=stack[top];
    return val;
    
}
void dec2bin(int n){
    while(n!=0){
        push(n%2);
        n=n/2;
    }
}

void print(){
    if(top==-1){
        printf("stack underflow");
    }
    while(top!=-1){
        printf("%d",pop());
    }
}
int main(){
    int dec;
    printf("enter decimal number:");
    scanf("%d",&dec);
    dec2bin(dec);
    print();


    return 0;
}