#include<stdio.h>
void main(){
int a,b,s;
printf("Enter array size:");
scanf("%d",&a);
int j[a];
int *p;
printf("Enter array Elements:\n");
for(b=0;b<a;b++){
printf("j[%d]",b);
scanf("%d",&j[b]);}
for(b=0;b<a;b++){
s=j[b]*j[b];
p=&s;
printf("squre of %d is:",j[b]);
printf("%d\n",*p);
}
}
