#include "types.h"
#include "user.h"

int main(int argc, char *argv[]){
    int thisPid = getpid();
    
    printf(1, "arg1: %s, arg2: %s\n", argv[1], argv[2]);
    printf(1, "thisPid: %d\n", thisPid);

    renice(thisPid, atoi(argv[1]));
    exec(argv[2], argv+2);

    exit();

}