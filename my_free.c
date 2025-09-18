#include "mylibrary.h"

void    my_free(void **freed)
{
    if (freed && *freed)
    {
        free(*freed);
        *freed = NULL;
    }
}
