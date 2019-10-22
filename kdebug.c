#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int val = 0;

    if (argc > 1) {
        val = atoi(argv[1]);
    }
    printf(2, "-> %s: calling kdebug(%d)\n", __FILE__, val);
    kdebug(val);

    exit();
}
