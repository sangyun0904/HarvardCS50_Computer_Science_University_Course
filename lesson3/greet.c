#include <cs50.h>
#include <stdio.h>

// C언어 프로그램에 Command line argument를 추가하는 법
// argc는 argument의 갯수를 argv는 실제 argument가 담긴 배열을 나타낸다.
int main(int argc, string argv[])
{
    if (argc > 1)
    {
        // ./greet Sangyoon 에서 argv[0]은 ./greet이 된다.
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}