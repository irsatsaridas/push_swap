#include "../include/push_swap.h"

void sa(t_stack *stack)
{
    int temp;

    if (stack -> size_a < 2)
        return ;
    temp = stack -> a[stack -> size_a];
    stack -> a[stack -> size_a] = stack -> a[stack -> size_a - 1];
    stack -> a[stack -> size_a - 1] = temp;
    write(1, "sa\n", 3);
}

void sb(t_stack *stack)
{
    int temp;

    if (stack -> size_b < 2)
        return ;
    temp = stack -> b[stack -> size_b];
    stack -> b[stack -> size_b] = stack -> b[stack -> size_b - 1];
    stack -> b[stack -> size_b - 1] = temp;
    write(1, "sb\n", 3);
}

void ss(t_stack *stack)
{
    int temp;

    if (stack -> size_a < 2 || stack -> size_b < 2)
        return ;
    temp = stack -> a[stack -> size_a];
    stack -> a[stack -> size_a] = stack -> a[stack -> size_a - 1];
    stack -> a[stack -> size_a - 1] = temp;
    temp = stack -> b[stack -> size_b];
    stack -> b[stack -> size_b] = stack -> b[stack -> size_b - 1];
    stack -> b[stack -> size_b - 1] = temp;
    write(1, "ss\n", 3);
}