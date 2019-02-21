#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
    int fork_status = fork();
    
    if (fork_status > 0)
    {
        int status;
        
        if (waitpid(fork_status, &status, 0) == -1) 
        {       
            printf(1, "Parent");
        }
        
        printf(1, "Parent");
    }
    else if (!fork_status)
    {
        printf(1, "Child");
    }
    else
    {
        printf(1, "Error");
        exit(0);
    }
    
    return 0;
}