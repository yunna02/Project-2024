//
//  board.c
//  sharkGame
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
    int allocated_coins = 0;
    
    while (allocated_coins < N_COINPOS) {
        int pos = rand() % N_BOARD; // Random position

        // Ensure the position is empty before adding a coin
        if (board_coin[pos] == 0) {
            board_coin[pos] = rand() % MAX_COIN + 1; // Random coin value (1 to MAX_COIN)
            allocated_coins++;
        }
    }

    return N_COINPOS;
    
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	 int steps = rand() % MAX_SHARKSTEP + 1;  // 1 ~ MAX_SHARKSTEP 칸 만큼 이동

    
    int start_pos = shark_position;  
    shark_position = (shark_position + steps) % N_BOARD;  

   
    printf("Shark moved to position %d!\n", shark_position);

    
    if (shark_position >= start_pos) {
        
        for (int i = start_pos; i <= shark_position; i++) {
            board_status[i % N_BOARD] = BOARDSTATUS_NOK;  
        }
    } else {
       
        for (int i = start_pos; i < N_BOARD; i++) {
            board_status[i] = BOARDSTATUS_NOK;  
        }
        for (int i = 0; i <= shark_position; i++) {
            board_status[i] = BOARDSTATUS_NOK;  
        }
    }

    return shark_position;

}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
