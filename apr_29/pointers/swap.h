#include<stdio.h>
void swap(int *p,int *q);
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}

