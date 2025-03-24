#include "param.h"

struct pstat {
    int inuse[NPROC];   // 是否可运行（1或0）
    int tickets[NPROC]; // 此进程拥有的彩票数
    int pid[NPROC];     // 每个进程的进程ID
    int ticks[NPROC];   // 每个进程已经运行的CPU时间片数量（被选择运行的次数）
};
//NPROC:最大进程数 64