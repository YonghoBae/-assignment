#include <stdio.h>
int main()
{
char charType;//char형 변수 charType 선언
int integerType;//int형 변수 integerType 선언
float floatType;//float형 변수 floatType 선언
double doubleType;// double형 변수 dobleType 선언
printf("[----- [배용호] [2020039008] -----]");
printf("Size of char: %ld byte\n",sizeof(charType));// charType에 할당된 메모리크기 출력
printf("Size of int: %ld bytes\n",sizeof(integerType));// integerType에 할당된 메모리크기 출력
printf("Size of float: %ld bytes\n",sizeof(floatType));// floatType에 할당된 메모리크기 출력
printf("Size of double: %ld bytes\n",sizeof(doubleType));// doubleType에 할당된 메모리크기 출력
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char));// 자료형 char의 크기 출력
printf("Size of int: %ld bytes\n",sizeof(int));// 자료형 int의 크기 출력
printf("Size of float: %ld bytes\n",sizeof(float));// 자료형 float의 크기 출력
printf("Size of double: %ld bytes\n",sizeof(double));// 자료형 double의 크기 출력
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));// 자료형 char*의 크기 출력
printf("Size of int*: %ld bytes\n",sizeof(int*));// 자료형 int*의 크기 출력
printf("Size of float*: %ld bytes\n",sizeof(float*));//자료형 float*의 크기 출력
printf("Size of double*: %ld bytes\n",sizeof(double*));//자료형 double*의 크기 출력
return 0;
}