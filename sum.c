#include<stdio.h>
void main(){
    int a[]={101,101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
    int l=sizeof(a)/sizeof(int);
    
    int sum=0;
    for(int i=0;i<l;i++){
        sum = sum+a[i];
       
    }
    printf("sum = %d",sum);
}