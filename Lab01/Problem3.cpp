#include<Problem3.h>

void Swap_one(int *var1, int *var2)
{
    int holder = *var1;
    *var1 = *var2;
    *var2 = holder;
}


void Swap_two(int& var1, int& var2)
{
    int holder;
    holder = var1;
    var1 = var2;
    var2 = holder;
}
