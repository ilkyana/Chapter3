#include<stdio.h>
void main(){
int em_hrs;
int em_no =0;
while(em_no<10){
printf("\nEnter your working hrs\n");
scanf("%d",&em_hrs);
int over_paid=0;
while(em_hrs>40){
over_paid=over_paid+12;
em_hrs--;
}
printf("\nYour overpaid salary is %d" , over_paid);
em_no++;
}


}
