#include <stdio.h>

typedef int(*funP)(int,int);

int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x > y ? y : x;
}

int process(int x, int y, funP fun)
{
    return fun(x, y);
}


int main()
{
    printf("3 and 5 max is:%d\n" process(3,5,max));
    printf("3 and 5 min is:%d\n" process(3,5,min));
    return 0;
}
