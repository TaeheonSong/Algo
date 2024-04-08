#ifndef FC6E18C6_3F8D_42AF_8F24_CEB0D673EEB7
#define FC6E18C6_3F8D_42AF_8F24_CEB0D673EEB7

#include <stdlib.h>

typedef struct ListElmt_
{
    void *data;
    struct ListElmt_ *next;
} ListElmt;

typedef struct List_
{
    int size;
    int (*match)(const void *key1, const void *key2);
    void (*distory)(void *data);

    ListElmt *head;
    ListElmt *tail;
} List;

#endif /* FC6E18C6_3F8D_42AF_8F24_CEB0D673EEB7 */
