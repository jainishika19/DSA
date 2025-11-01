// #include<stdio.h>
// #include<stdlib.h>
// #define MAX 5

// int stack_arr[MAX];
// int first=-1;
// void push(int data){
//     int i;
//     first=first+1;
//     for(i=first;i>0;i--){
//         stack_arr[i]=stack_arr[i-1];
//     }
//     stack_arr[0]=data;
// }
// int pop(){
//   int i,value;
//   value=stack_arr[0];
//   for(i=0;i<first;i++){
//     stack_arr[i]=stack_arr[i+1];
//   }
//   first-=1;
//   return value;
// }
// void print(){
//     int i;
//   if(first==-1){
//     printf("stack underflow");
//     exit(1);
//   }
//   for(i=0;i<=first;i++){
//     printf("%d  ",stack_arr[i]);
//     //printf("\n");
//   }
// }

// int main(){
//   int data;
//     push(1);
//     push(2);
//     push(3);//o/p is 3 2 1 here topmost element is at index 0 i.e 3
//     //data=pop();
//     pop();

//     print();
    

//     return 0;
// }

//******updated version*****
//  #include<stdio.h>
// #include<stdlib.h>
// #define MAX 5

// int stack_arr[MAX];
// int first=-1;
// int isfull(){
  //   if(first==MAX-1)
//   return 1;
//   else
// return 0;
//
// }

// int isempty(){
//   if(first==-1)
//     return 1;
//     else
//     return 0;
  
// }
// void push(int data){
//   int i;
//   if(isfull()){
//     printf("stack overflow\n");
//     exit(1);
//   }
//   first=first+1;
//   for(i=first;i>0;i--){
//     stack_arr[i]=stack_arr[i-1];
//   }
//   stack_arr[0]=data;
// }

// int pop(){
//   int i,value;
//   if(isempty()){
//     printf("stack underflow\n");
//     exit(1);
//   }
//   value=stack_arr[0];
//   for(int i=0;i<first;i++){
//     stack_arr[i]=stack_arr[i+1];
//   }
//   first-=1;
//   return value;
// }

// int peek()
// {
//   if(isempty()){
//   printf("stack underflow\n");
//   exit(1);
// }
// return stack_arr[0];
// }

// void print(){
//   int i;
//   if(first==-1){
//     printf("stack underflow\n");
//     exit(1);
//   }
//   for(i=0;i<=first;i++){
//     printf("%d ",stack_arr[i]);
//   }
// }
// int main(){
//   int choice,data;

//   while(1){

//   printf("\n");
//   printf("1.Push\n");
//   printf("2.Pop\n");
//   printf("3.Print the top element\n");
//   printf("4.Print all the elements of stack\n");
//   printf("5.quit\n");
//   printf("please enter your choice:");
//   scanf("%d",&choice);

//   switch(choice){
//     case 1:
//     printf("enter element to be pushed:");
//     scanf("%d",&data);
//     push(data);
//     break;

//     case 2:
//   pop();
//   break;

//   case 3:
//   printf("%d",peek());
//   break;

//   case 4:
//   print();
//   break;

//   case 5:
//   exit(1);

//   default:
//   printf("wrong choice");
//   }
// }
// return 0;
// }

//program 3:to print all the prime factors of numnber in descending order
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int stack[MAX];
int top=-1;

void push(int n){
    if(top==MAX-1){
        printf("stack overflow\n");
        //exit(1);it is also right
    }
    top=top+1;
    stack[top]=n;
  }

 int pop(){
    int val;
    if(top==-1){
      printf("stack underflow\n");
      exit(1);
    }
    val=stack[top];
    top--;
    return val;
  }

void prime_fact(int num)
{
  int i=2;
  while(num!=1)
  {
    while(num%i==0){
      push(i);
      num=num/i;
    }
    i++;
  }
  printf("prime factors of number in descending order are:");
  while(top!=-1){
    printf("%d ",pop());
  }

}

int main(){
  int number;
  printf("enter positive no.:");
 scanf("%d",&number);
 prime_fact(number);
 return 0;
                
}