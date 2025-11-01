// #include<stdio.h>
// #include<stdlib.h>
// #define MAX 4 //******note here ';' not come

// int stack_arr[MAX];
// int top=-1;

// void push(int data){
//     if(top==MAX-1){
//         printf("stack overflow");
//         return;
//     }
//     top=top+1;
//     stack_arr[top]=data;
// }
// int pop(){
//     int value;
//     if(top==-1){
//         printf("stack underflow");
//         exit(1);}
//        // return 0;
//         value=stack_arr[top];//it prints the element present in the topmost index--at the top place
//         top=top-1;
//         return value;
// }
// void print(){
//     int i;
//     if(top==-1){
//         printf("stack underflow\n");
//         return;
//     }
//     for(i=top;i>=0;i--)
//         printf("%d  ",stack_arr[i]);//space after %d for giving spaces after each no.
//         printf("\n");
   
// }
// int main(){
//     int data;
//     //push operation
//     push(1);
//     push(2);
//     push(3);
//     push(5);//till here prints nothing but store data in array
//             // push(7);//prints stack overflow
//     //pop operation
//     data=pop();
//     data=pop();
//     printf("%d",data);
//     return 0;
// }

//******updated stack*****
// #include<stdio.h>
// #include<stdlib.h>
// #define MAX 4

// int stack_arr[MAX];
// int top=-1;

// int isfull(){
//     if(top==MAX-1)
//         return 1;//indicates the end of the funtn
//         else
//         return 0;
 
// }
// int isEmpty(){
//      if(top==-1)
//         return 1;//indicates the end of the funtn
//         else
//         return 0;

// }

// void push(int data){
//     if(isfull()){//here direct we call isfull funtn
//         printf("stack overflow\n");
//         return;
//     }
//     top=top+1;
//     stack_arr[top]=data;
    
// }
// int pop(){
//    int value;
//     if(isEmpty()){
//         printf("stack underflow");
//         exit(1);}
//         value=stack_arr[top];//it prints the element present in the topmost index--at the top place
//         top=top-1;
//         return value;


    
// }
// int peek(){//returns top of the stack
//     if(isEmpty()){
//         printf("stack underflow\n");
//         exit(1);
//     }
//     return stack_arr[top];

// }
// void print(){
//     int i;
//     if(top==-1){
//         printf("stack underflow\n");
//         return;
//     }
//     for(i=top;i>=0;i--)
//         printf("%d  ",stack_arr[i]);//space after %d for giving spaces after each no.
//         printf("\n");
// }
// int main(){
//     int choice,data;
//     while(1){
//         printf("\n");
//         printf("1.Push\n");
//         printf("2.Pop\n");
//         printf("3.Print the top element\n");
//         printf("4.Print all the elements of stack\n");
//         printf("5.quit\n");
//         printf("please enter your choice:");
//         scanf("%d",&choice);
        
//         switch(choice){
//             case 1:
//             printf("enter the element to be pushed:");
//             scanf("%d",&data);
//             push(data);
//             break;

//             case 2:
//             data=pop();
//             printf("deleted element is%d\n",data);
//             break;

//             case 3:
//             printf("the topmost element of stack is%d\n",peek());
//             break;

//             case 4:
//             print();
//             break;

//             case 5 :
//             exit(0);
//             break;

//             default:
//             printf("wrong choice\n");
//         }
        
//     }
//     return 0;
// }