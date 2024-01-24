#include <stdio.h>
int top = -1;
//  #define size='4'
int array[4];
// void pop{
//    top=top-1
// }
void push(int data)
{
    top = top + 1;
    array[top] = data;
}
void dispaly()
{
    for (int i = top; i >= 0; i--)
    //    display()
    {

        printf("%d", array[i]);
    }
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        int a;
        scanf("%d", &a);
        push(a);
    }
    printf("stack elemnts are \n");
    dispaly();

    return 0;
}
