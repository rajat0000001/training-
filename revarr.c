#include<stdio.h>

int rev(int *b,int t,int g){
    int i,j=g-1,temp;
    for(i=t,j=g-1;i<j;i++,j--){
    
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
 }
    
int main(){
    int a[]={1,2,3,4,5};
    int k;
    int t=sizeof(a)/sizeof(int);
    printf("Enter the no. of element fron which you want to reverse from 1 to %d: ",t);
    scanf("%d",&k);
    k=k%t;
    rev(a,0,k);
    rev(a,k,t);
    rev(a,0,t);
    for(int i=0;i<t;i++){
        printf("%d",a[i]);
    }
    return 0;
}