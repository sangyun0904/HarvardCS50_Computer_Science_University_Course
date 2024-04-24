    #include <stdio.h>
    
    // 기본 C언어에는 string 타입이 없다.
    // string 은 C언어에서 char 의 Array로 표현한다.
    // 그런데 string 은 몇byte를 사용할지 어떻게 결정할까? 
    // 이것을 과거의 개발자들은 모든 string 마지막에 여기서 string 이 끝난다는 것을 나타내는 0를 추가하는 방식으로 해결하였다.
    // 그래서 string s = "HI!" 는 사실 HI!0 즉 4byte의 메모리를 사용한다.

    // 그리고 C언어에는 string과 관련된 내장 라이브러리들이 많다. ex) string.h, ctype.h ..

    int main(void)
    {
        char c1 = 'H';
        char c2 = 'I';
        char c3 = '!';

        printf("%i %i %i\n", c1, c2, c3);

        char str[] = "HI!"; 

        printf("%i %i %i %i\n", str[0], str[1], str[2], str[3]);
    }
