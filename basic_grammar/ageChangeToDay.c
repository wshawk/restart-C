/*
* @auther wsHawk
* @Date 2020-10-30
* 编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。
*/
#include <stdio.h>
int main() { 
	int age;
	age = 24;
	printf("my age is %d \n",age);
	printf("age change to day is %d",age*365);
	return 0;
}