// 定义随机数种子
static unsigned long next = 1;

// 生成 0 到 RAND_MAX 之间的伪随机数
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}

// 设置随机数种子
void srand(unsigned int seed) {
    next = seed;
}

// 生成不超过 total 的伪随机数
unsigned int random_at_most(unsigned int total)
{
    // 调用 rand 函数生成随机数并取模
    return rand() % (total + 1);
}