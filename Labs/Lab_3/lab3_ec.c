#include "types.h"
#include "stat.h"
#include "user.h"

int ec(int n)
{
    int a = n + 1;

    a = ec(a);

    return a;
}

int main()
{
    int pid = fork();
    
    if (!pid)
    {
        ec(1);
        exit();
    }

    wait();
    exit();
}
