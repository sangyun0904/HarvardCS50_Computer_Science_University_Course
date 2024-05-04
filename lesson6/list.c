#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // ... 

    // list = realloc(list, 4 * sizeof(int)); 
    //이렇게 해도 가능하지만 realloc이 실패하고 NULL 이 리턴됐을 때 모든 list의 값을 잃어버린다. memory leak

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL) 
    {
        free(list);
        return 1;
    }

    list = tmp;

    list[3] = 4; 

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}