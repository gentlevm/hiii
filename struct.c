#include<stdio.h>
    
struct student
{
    int a;
    float b;
    char c;
};
int main()
{
 
 struct student s1,s2;
 s1.b=12.34;
 printf("%f\n",s1.b);
 s2.a=12;
 printf("%d",sizeof(s2.a));

     return 0;
}