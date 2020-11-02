/* print1.c - 演示printf()的一些特性 */
/**
* 在第一行输出中，第1个%d对应int类型变量ten；
* 第2个%d对应int类型常量2；第3个%d对应int类型表达式ten - two的值。
* 在第二行输出中，第1个%d对应ten的值，但是由于没有给后两个%d提供任何值，所以打印出的值是内存中的任意值
*（读者在运行该程序时显示的这两个数值会与输出示例中的数值不同，因为内存中存储的数据不同，而且编译器管理内存的位置也不同）。
**/
#include <stdio.h>
int main(void)
{
     int ten = 10;
     int two = 2;
     printf("Doing it right: ");
     printf("%d minus %d is %d\n", ten, 2, ten - two);
     printf("Doing it wrong: ");
     printf("%d minus %d is %d\n", ten);  // 遗漏2个参数
     return 0;
}