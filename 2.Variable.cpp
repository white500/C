# include <stdio.h>

// 什么是变量
// 变量的本质是内存中的一段存储空间

// 变量为啥要初始化
// 所谓初始化就是赋值的意思

int main(void)
{
    int i; 

    i = 3; // 3是存放在内存中，程序终止之后3所占的空间被释放
    printf("i = %d\n", i);

    return 0;
}
