#include "board.h"

int main(void)
{
    char board[3][3] =
    {
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'X', ' ', 'O'}
    };

    print_board(board);

    return 0;
}