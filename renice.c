#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int renice_result, i, nice_value, pid;
    if (argc < 3)
    {
        printf(2, "Usage: renice <nice_value> <pid...>\n");
        exit();
    }
    nice_value = atoi(argv[1]);
    for(i = 2; i < argc; ++i){
        pid = atoi(argv[i]);
        renice_result = renice(pid, nice_value);
        if (renice_result == 1)
        {
            printf(2, "err: nice value %d out of bounds\n", nice_value);
            exit();
        }
        if (renice_result == 2)
        {
            printf(2, "err: unknown pid: %d\n", pid);
            exit();
        }
    }
    exit();
}