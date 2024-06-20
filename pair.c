#include<stdio.h>
void main(){
    int a[]={101,55,45,25,78,65,33};
    int n=sizeof(a)/sizeof(int);
    
    int f=a[0];
    for(int i=0;i<n;i++){
        printf("%d,%d \n",f,a[i]);
    }
}