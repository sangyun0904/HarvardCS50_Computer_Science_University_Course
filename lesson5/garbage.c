#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int score[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", score[i]);
        // 배열을 선언하고 값을 initialize 해주지 않았을때 garbage value 들이 들어있을 수 있다. 
        // 어떤 garbage value 가 들어있을 지 모르니 반드시 메모리를 할당 받으면 값을 initialize 해주자.
    }
}