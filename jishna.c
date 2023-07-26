#include<stdio.h>
main(){
int a,b;
printf("Enter array size:");
scanf("%d",&a);
int j[a];
int *p;
printf("Enter array Elements:\n");
for(b=0;b<a;b++){
printf("j[%d]",b);
scanf("%d",&j[b]);}
for(b=0;b<a;b++){
*p=j[b]*j[b];
printf("%d,",*p);
}
}
