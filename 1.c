#include <stdio.h>
 
int main(int argc, const char *argv[])
{
     struct person
     {
         int a;
         unsigned short int m;
         char b;
         char *q;
         char c;
     };
     char str[]="yikoulinux";
     char *p = str;
     int n = 10;
 
     struct person pe;
 
     printf("sizeof(str):%d sizeof(p):%d sizeof(n):%d sizeof(int):%d sizeof(struct person):%d\n",
                sizeof(str),sizeof(p),sizeof(n),sizeof(int),sizeof(struct person));
 
    printf("%p\n %p\n %p\n %p \n %p \n",&pe.a,&pe.m,&pe.b,&pe.q,&pe.c);
     return 0;
 }