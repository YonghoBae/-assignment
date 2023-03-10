#include <stdio.h>
int main()
{
int i;//int형 변수 i 선언
int *ptr;//int형 포인터변수 ptr 선언
int **dptr;//int형 이중포인터변수 dptr 선언
i = 1234;//int형 변수 i에 1234 대입
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
ptr = &i;
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);
dptr = &ptr;
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);
printf("address of i == %p\n", &i);
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr);
printf("value of *ptr == %d\n", *ptr);
printf("value of dptr == %p\n", dptr);
printf("address of dptr == %p\n", &dptr);
printf("value of *dptr == %p\n", *dptr);
printf("value of **dptr == %d\n", **dptr);
*ptr = 7777;
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
**dptr = 8888;
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
printf("value of *ptr == %d\n", *ptr);
printf("value of **dptr == %d\n", **dptr);
return 0;
}