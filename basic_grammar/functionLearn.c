/*
* @auther wsHawk
* @Date 2020-10-29
*/
#include <stdio.h>
/** 
* 方法(函数)声明
**/
int addResult(int a, int b);

int main() { 
	/**
	* 变量定义
	**/
     int a, b;
      a = 5;
      b = 2; 
      b = a; 
      a = b; 
      printf("%d %d\n", b, a);
    return 0;
}

int addResult(int a, int b){
    return a+b;
}