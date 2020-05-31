#include<stdio.h>
void main(){
int n;
printf("\nEnter the number");
scanf("%d",&n);
for(int i = 1 ; i<=10 ; i++){
int mult = i*n;
printf("\n %d * %d = %d", n , i , mult);
}

}
