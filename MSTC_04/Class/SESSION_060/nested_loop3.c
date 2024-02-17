#include <stdio.h>>

int main(void)
{
    int i;
    int j;
    
    puts("Using while loop");
    i = 0;
    while(i < 5)
    {
        j = i + 1;
        while(j < 5)
        {
            printf("i = %d, j =%d\n", i , j);
            j = j + 1;
        }
        i = i + 1;
    }

    puts("Using for loop");
    for(i = 0;i < 5; ++i)
    {
        for(j = i+1; j < 5; ++j)
        {
            printf("i = %d, j = %d\n", i , j);
        }
    }
    
    return (0);
}

/*
i = 0, j = 1;
i = 0, j = 2; 
i = 0, j = 3;
i = 0, j = 4;
----------------
i = 1, j = 2;
i = 1, j = 3;
i = 1, j = 4;
------------------
i = 2, j = 3;
i = 2, j = 4;
------------------
i = 3, j = 4;
-----------------
*/