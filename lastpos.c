#include<stdio.h>
void main(){
    int a[]={101,101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
    int l=sizeof(a)/sizeof(int);
    int b,i,f=0,g;
    printf("Enter the number you want to search:");
    scanf("%d",&b);
    for(i=0;i<l;i++){
        if(b==a[i]){
            g=i+1;
            f++;
        }
    }
       printf("Element found at %d position.",g);

    if(f==0){
            printf("Element not found.");
        }
}