#include <stdio.h>

/*
当然你的内存中有0地址，但是0地址通常是个不能随便碰的地址所以你的指针不应该具有0值因此可以用0地址来表示特殊的事情：
返回的指针是无效的指针没有被真正初始化（先初始化为0）
NUL是一个预定定义的符号，表示0地址有的编译器不愿意你用0来表示0地址
*/

int main()
{
    int *p = NULL; //表示0地址
    printf("Hello World!\n");
    return 0;
}