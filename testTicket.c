#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if (argc != 2){
        printf(2, "Invalid number of arguments\n");
    }else{
        int tickets = atoi(argv[1]);
        if (settickets(tickets) == -1){
           printf(2, "Set Error!\n"); 
        }else{
            printf(1, "Set Successful!\n", tickets);
        }
    }

}