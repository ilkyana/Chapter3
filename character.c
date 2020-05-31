#include<stdio.h>
void main(){
int i=0;
while( i<=255 ){
while(i>64 && i<=90){
printf("\nThe value of %d is %c\n",i,i);
i++;
}
while(i>96 && i<=122){
printf("\nThe value of %d is %c\n",i,i);
i++;
} 
} 
i++;

}
