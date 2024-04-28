#include <stdio.h>

int main(void)
{
    int n = 50; // integer : 4bytes
    int *p = &n; // int *p : int가 아닌 int의 주소를 p에 저장한다는 것을 나타낸다. &n : n 의 주소를 반환한다. 
    // pointer 즉 주소를 저장할 때 컴퓨터의 메모리 사양에따라 다르지만 주로 8bytes를 사용한다.
    printf("address: %p\n", p);
}