#include<stdio.h>
int main() {
   int array[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
   int i, lar, sec;

   if(array[0] > array[1]) {
      lar = array[0];
      sec  = array[1];
   } else {
      lar = array[1];
      sec  = array[0];
   }

   for(i = 2; i < 10; i++) {
      if( lar < array[i] ) {
         sec = lar;
         lar = array[i];
      } else if( sec < array[i] ) {
         sec =  array[i];
      }
   }

   printf("Second - %d \n",sec);   

   return 0;
}