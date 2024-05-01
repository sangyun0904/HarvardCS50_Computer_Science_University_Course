#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    string s = get_string("s: ");
    string t = get_string("t: ");

    if (s == t) // s와 t의 주소를 비교한다.
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    if (strcmp(s, t) == 0) // 실제 string 값을 비교한다.
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}