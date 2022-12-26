# include <stdio.h>

/**
 * 基本数据类型 
 *     整数
 *          整型 --- int 4字节
 *          短整型 --- short int 2字节
 *          长整型 --- long int 8字节
 *     浮点数【实数】
 *          单精度浮点数 ---- float   4字节
 *          双精度浮点数 ---- double  8字节
 *     字符
 *          char ----------- 1字节
 */
int main(void)
{
    printf("欢迎来到C语言世界\n");

    int i = 10.6; // 表示i变量是整型变量

    printf("%d\n", i);

    return 0;
}