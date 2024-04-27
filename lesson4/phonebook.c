#include <cs50.h>
#include <stdio.h>
#include <string.h>

// C에서 typedef struct를 통해 타입을 생성할 수 있다. 
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-940-460-2750";

    string name = get_string("Name: ");

    for (int i = 0; i < 2; i++) {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}