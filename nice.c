#include "types.h"
#include "user.h"

int main(int argc, char *argv[]){
    int thisPid, renice_result;
    if(argc < 3){
        printf(2, "Usage: nice <nice_value> <cmd>\n");
        exit();
    }
    thisPid = getpid();
    
    renice_result = renice(thisPid, atoi(argv[1]));
    if(renice_result == 1){
        printf(2, "err: nice value out of bounds\n");
        exit();
    }
    if(renice_result == 2){
        printf(2, "err: unknown pid: %d\n", thisPid);
        exit();
    }
    exec(argv[2], argv+2);

    exit();

}