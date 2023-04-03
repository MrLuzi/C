#include <stdio.h>

#pragma pack(1)
typedef struct Test1
{
	char c;  
    int a;  
	short sh;
    char *s; 
    double d;
    float f; 
   	int *p;  
}stTest;
#pragma pack()

struct temp{
    short a;
    char b;
    char c;
    long d;
    char e;
    int f;
};

struct Student {
    int num;
    char name[7];   
    short age;
    char sex;
} student1;
int sz = sizeof(student1);

int main()
{
    // int a = 2543;

    // printf("%d\n",a/1000);
    // printf("%d\n",a/100%10);
    // printf("%d\n",a/10%10);
    // printf("%d\n",a%10);

    // int a = 1234;

    // unsigned char * n = (unsigned char*)&a;

    // a = n[0] << 24 | n[1]<<16 | n[2]<<8 | n[3];

    // printf("%x,%d %d\n",a,sizeof(int),sizeof(char));

    // char * a;
    // short * b;
    // int * c;
    // double *d;

    // printf("%d %d %d %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    
    // stTest a;
    // printf("%d,%d,%d,%d,%d,%d,%d,%d\n",sizeof(a),&a.c,&a.a,&a.sh,&a.s,&a.d,&a.f,&a.p);

    // unsigned  int a = 6;
    // int b = -20;
    // (a + b > 6)? printf("> 6") : printf(" <= 6");

    // struct temp stTemp;

    // printf("%d,%d,%d,%d,%d,%d,%d\n",sizeof(stTemp),&stTemp.a,&stTemp.b,&stTemp.c,&stTemp.d,&stTemp.e,&stTemp.f);
    // int n = 2;
    // printf("%d\n",n+=n-=n*n);

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

    printf("sizeof(str):%d sizeof(p):%d sizeof(n):%d sizeof(int):%d sizeof(struct person):%d\n",sizeof(str),sizeof(p),sizeof(n),sizeof(int),sizeof(struct person));
 
    printf("%p\n%p\n%p\n%p\n%p\n",&pe.a,&pe.m,&pe.b,&pe.q,&pe.c);
    return 0;
}