#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    struct pstat *ps;
    if (getpinfo(ps) == -1){
        printf(2, "getpinfo failed!\n");
    }else{
        printf(1, "getpinfo succeeded!\n"); 
    }
}