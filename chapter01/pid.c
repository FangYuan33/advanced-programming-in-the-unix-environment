//
// Created by FangYuan on 2023/6/18.
//

#include <stdlib.h>
#include <unistd.h>
#include "stdio.h"

int
main (void)
{
    printf("hello world from process ID %ld\n", (long) getpid());
    exit(0);
}