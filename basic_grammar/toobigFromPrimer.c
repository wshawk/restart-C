/* toobig.c-- 超出系统允许的最大int值*/
/**
 * @date 2020-11-02 21:04:52
 * output: 2147483647    -2147483648    -2147483647
 *	   4294967295    0    1
 *
 **/
#include <stdio.h>
int main(void)
{
     int i = 2147483647; 
      unsigned int j = 4294967295;
      printf("%d %d %d\n", i, i+1, i+2);
      printf("%u %u %u\n", j, j+1, j+2);
      return 0;
}
