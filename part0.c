/* 
 * Every file you submit should start with a header like this
 * 
 * File:   part0.c
 * Author: Peter Zhao (pwzhao@ucsc.edu)
 *
 * Created on July 25, 2022, 6:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include "BOARD.h"

/*
 * 
 */
int main(void)
{
    BOARD_Init();
    printf("Hello World\n");
    
    
    BOARD_End(); // handles cleanup of the system
    while(1); // if embedded we should never exit.
}