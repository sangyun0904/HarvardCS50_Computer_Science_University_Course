#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[]) 
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

    // Linked List
    node *linked_list = NULL; 

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        // 이 부분에서 만역 한두번은 malloc으로 메모리를 할당받는것을 성공한 후에 NULL 값을 받고 리턴하면 
        // 사용하지 않는 할당된 메모리 생기게 된다.  
        // 그래서 free list 같은 함숙를 따로 만들어서 모든 메모리를 free 해주는것이 옳은 방법이다. 
        if (n == NULL)
        {
            return 1;
        }
        // n->number = (*n).number
        n->number = number;
        n->next = NULL;

        n->next = linked_list;
        linked_list = n;
    }
    
    node *ptr = linked_list;
    while (ptr != NULL)
    {
        printf("ptr : %i\n", ptr->number);
        ptr = ptr->next;
    }

    printf("\n");

    for (node *ptr = linked_list; ptr != NULL; ptr = ptr->next)
    {
        printf("ptr : %i\n", ptr->number);
    }

    ptr = linked_list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}