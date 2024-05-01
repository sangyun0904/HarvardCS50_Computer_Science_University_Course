#include <stdio.h>

void swap(int a, int b);
void swap2(int *a, int *b);

int main(void)
{
    int x = 1; 
    int y = 2; 

    printf("x is %i, y is %i\n", x, y);
    // swap(x, y);
    swap2(&x, &y);
    printf("x is %i, y is %i\n", x, y);  
}

void swap(int a, int b) // 함수에 파라미터로 변수가 들어갈 때 값만 복제되어 새로운 주소에 같은 값이 들어간다. 그리고 함수가 종료되면 그 변수는 사라진다. 
{
    int tmp = a; 
    a = b;
    b = tmp;
}

void swap2(int *a, int *b) 
{
    int tmp = *a; 
    *a = *b;
    *b = tmp;
}