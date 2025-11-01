// //  MALLOC FUNCTN 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,n;
//     printf("enter the numbers of integers:");
//     scanf("%d",&n);
//     int *ptr=(int*)malloc(n*sizeof(int));


//     if(ptr==NULL){
//         printf("memory not available");
//         exit(1);
//     }

//     for(i=0;i<n;i++){
//         printf("enter an integer");
//         scanf("%d",ptr+i);
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",*(ptr+i));
//     }
//     return 0;
// }

//REALLOC FUNTN
#include<stdio.h>
int main(){
    int i,n;
    int *ptr=(int*)malloc(2*sizeof(int));//now we taking only 2 integers at starting

    if(ptr==NULL){
        printf("memory  ot available");
        exit(1);
    }
     printf("enter 2 numbers");

    for(i=0;i<2;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }


    return 0;
}

