#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n\n", s); 
    // 사실 스트링 즉 char의 배열은 가장 처음 char의 주소를 반환하고 %s는 마지막 \0 (null) 가 나오기까지 모든 char들을 차례대로 프린트하기 때문에 
    //지금처럼 실제로 "HI!"의 포인터 즉 첫 char의 주소만 넘겨줘도 HI!를 전부 프린트한다.
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n\n", &s[3]);
    printf("%i\n\n", s[3]);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n\n", *(s+2));
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
    // C언어에서 꼭 char 배열이 아니라 하더라도 다음 값을 찾고 싶을 때 +1을 해주면 된다.
    // 즉, 데이터 타입의 바이트 수를 고려하지 않아도 컴파일러가 데이터 타입에 따라 맞는 바이트 수 만큼 이동하여 값을 가지고 온다.
}