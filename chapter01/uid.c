//
// Created by wangyilong13 on 2023/6/18.
//

#include <unistd.h>
#include <stdlib.h>
#include "stdio.h"

int
main(void)
{
    printf("uid = %d, gid = %d \n", getuid(), getgid());
    exit(0);
}