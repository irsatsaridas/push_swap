#include "../include/push_swap.h"

void pb(t_stack *stack)
{
    int* buff;

    if (stack -> size_a == 0)
        return ;
    stack -> size_b++;
    buff = malloc(sizeof(int) * stack -> size_b);
    ft_memcpy(buff, stack -> b, stack -> size_b - 1);
    buff[stack -> size_b] = stack -> a[stack ->size_a];
    stack -> a[stack ->size_a] = NULL;
    stack -> size_a--;
    stack -> b = buff;
    write(1, "pb\n", 3);
}

void pa(t_stack *stack)
{
    int* buff;

    if (stack -> size_b == 0)
        return ;
    stack -> size_a++;
    buff = malloc(sizeof(int) * stack -> size_a);
    ft_memcpy(buff, stack -> a, stack -> size_a - 1);
    buff[stack -> size_a] = stack -> b[stack ->size_b];
    stack -> b[stack ->size_b] = NULL;
    stack -> size_b--;
    stack -> a = buff;
    write(1, "pa\n", 3);
}