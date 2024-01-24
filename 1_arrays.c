#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n;
     int i = 0;
     printf("enter the number of element");
     scanf("%d", &n);
     // int *ptr= (int *)malloc(n + sizeof(int));
     int *ptr = (int *)calloc(n, sizeof(int));
     // for ( i = 0; i < n; i++)
     // {
     //      printf("%d \n",ptr[i]);
     // }
     for (i = 0; i < n; i++)
     {
          scanf("%d \n", ptr + i);
     }
     printf("enter again two elemnnts");
     for (i = 0; i < n; i++)
     {
          scanf("%d \n", ptr + i);
     }
     *ptr=(int*) realloc(ptr,4*sizeof(int));
     for (i = 0; i < n; i++)
     {
          printf("%d \n", *(ptr + i));
     }
     // free(ptr);
     // for (i = 0; i < n; i++)
     // {
     //      printf("%d \n", *(ptr + i));
     // }
     return 0;
}