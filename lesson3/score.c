#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int score1 = get_int("Score: ");
    int score2 = get_int("Score: ");
    int score3 = get_int("Score: ");

    printf("Average: %f\n", (score1 + score2 + score3) / (float) 3); 

    // Array를 사용하면 코드의 반복을 줄여줄 뿐 아니라 모든 Array안에 데이터가 인덱싱 되고
    // 메모리 상에서 각각의 데이터가 이전 데이터 바로 옆에 저장되어 메모리를 효율적으로 사용할 수 있다. 
    // C 언어에서는 Array에게 길이를 물어볼 수 없다...

    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}