#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = s; // C언어에서는 주소의 값이 아닌 주소를 복사한다.

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n\n", t);

    char *u = get_string("u: ");
    if (u == NULL) // NULL은 \0 (null) 의 주소이다.
    {
        return 1;
    }

    char *v = malloc(strlen(u) + 1); // string s 길이의 메모리 : strlen(s) + (null 메모리) 만큼의 비어있는 공간의 주소를 반환한다.
    if (v == NULL)
    {
        return 1;
    }
    
    // for (int i = 0; i < strlen(s) + 1; i++)  // strlen 함수를 여러번 사용하게 된다. 
    // for (int i = 0, n = strlen(u) + 1; i < n; i++)
    // {
    //     v[i] = u[i];
    // }
    strcpy(v, u); // 위 반복문 string 복사 과정을 strcpy 함수가 대신해준다.

    if (strlen(v) > 0) // 좀더 안전하게 획실히 v[0] 이 존재할 때
    {
        v[0] = toupper(v[0]);
    }
    
    printf("u: %s\n", u);
    printf("v: %s\n\n", v);

    free(v); // malloc으로 메모리를 사용한 후엔 항상 free로 비워주는 것이 좋다. 
    // python, java와 같은 언어들은 이 메모리 비워주는 작업을 개발자 대신 알아서 해준다. 

    return 0;
}