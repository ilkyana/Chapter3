#include<stdio.h>
 void main(){

int numbr,k,count;        
for(numbr=2;numbr<=300;++numbr){
count=0;
for(k=2;k<=numbr/2;k++){
if((numbr%k) == 0){
count++;
break;
    }

  }
 if(count==0)
 printf("\n    %d ",numbr);
 }
   }
