#include <stdio.h>

int main()
{
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };

    struct emp
    {
        char name[25];
        struct address a;
    };

    struct emp e = {"Jeru", "531046", "Nagpur", 10};

    printf("Name = %s  Phone = %s\n", e.name, e.a.phone);
    printf("City = %s  Pin = %d\n", e.a.city, e.a.pin);

    return 0;
}