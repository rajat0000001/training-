#include<stdio.h>

void main(){
    int A[10][10],a,f,c=1;
    float B[10],av=0,s;
    printf("Enter the number of the students: ");
    scanf("%d",&a);
    printf("\nEnter the number of the subjects: ");
    scanf("%d",&f);
    for(int i=0;i<a;i++){
        printf("\nEnter the grades of Student %d: ",c);
        for(int j=0;j<f;j++){
            scanf("%d",&A[i][j]);
        }
        
        c++;
    }
    c=1;
    for(int t=0;t<f;t++){
        for(int v=0;v<a;v++){
            av=av+A[v][t];
            s=av/a;
            
        }
        B[t]=s;
        av=0;
    }
    for(int g=0;g<f;g++){
        printf("Subject %d: ",c);
        printf("%f\n",B[g]);
        c++;
    }
}