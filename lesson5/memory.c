#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 10;
    x[2] = 11;
    x[3] = 12345;

    // 아무 문제가 없어 보이지만 x[0] 을 사용하지 않거나, free(x)를 해주지 않는등 버그들이 존재한다. 
    // valgrind라는 툴은 이러한 메모리 버그를 찾는데에 도움이 된다.
}