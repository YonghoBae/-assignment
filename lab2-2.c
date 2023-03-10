#include <stdio.h>
int main()
{
int i;//int형 변수 i 선언
int *ptr;//int형 포인터변수 ptr 선언
int **dptr;//int형 이중포인터변수 dptr 선언
i = 1234;//i에 1234 대입
printf("[----- [배용호] [2020039008] -----]");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);// i의 값 출력
printf("address of i == %p\n", &i);// i의 주소값 출력
printf("value of ptr == %p\n", ptr);// ptr에 저장된 주소값 출력(쓰레기값)
printf("address of ptr == %p\n", &ptr);// ptr의 주소값 출력
ptr = &i;// ptr에 i의 주소값 대입
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);// i의 값 출력
printf("address of i == %p\n", &i);// i의 주소값 출력
printf("value of ptr == %p\n", ptr);// ptr에 저장된 주소값 출력(i의 주소값을 대입했으므로 i의 주소값과 동일)
printf("address of ptr == %p\n", &ptr);// ptr의 주소값 출력
printf("value of *ptr == %d\n", *ptr);// i의 값 출력
dptr = &ptr;// dptr에 ptr의 주소값 대입
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("address of i == %p\n", &i);//i의 주소값 출력
printf("value of ptr == %p\n", ptr);//ptr에 저장된 주소값 출력
printf("address of ptr == %p\n", &ptr);//ptr의 주소값 출력
printf("value of *ptr == %d\n", *ptr);//i의 값 출력
printf("value of dptr == %p\n", dptr);//dptr의 값 출력
printf("address of dptr == %p\n", &dptr);//dptr의 주소값 출력
printf("value of *dptr == %p\n", *dptr);//ptr의 값 출력
printf("value of **dptr == %d\n", **dptr);//i의 값 출력
*ptr = 7777;//i에 7777 대입
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("value of *ptr == %d\n", *ptr);//i의 값  출력
printf("value of **dptr == %d\n", **dptr);//i의 값 출력
**dptr = 8888;//i에 8888 대입
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);//i의 값 출력
printf("value of *ptr == %d\n", *ptr);//i의 값 출력
printf("value of **dptr == %d\n", **dptr);//i의 값 출력
return 0;
}