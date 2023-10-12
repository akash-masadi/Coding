#include<stdio.h>
#include<stdlib.h>
#define SAFE 0
#define UNSAFE 1
void printBoard(int qpos[], int noq)
{
    int row;
    int col;
    for( row = 0; row < noq; row +=1, printf("\n"))
    {
        for( col = 0;col < noq; col +=1)
        {
            printf("%c ", qpos[row] == col ? 'Q' : '-');
        }
    }
}
int isSafe(int qpos[], int noq, int qno, int col)
{
    int r;
    int c;
    // left diagonal
    for( r = qno -1, c = col-1 ; r >= 0 && c>= 0; r-=1, c-=1)
         if ( qpos [ r ] == c) return UNSAFE;
    // top
    for( r = qno-1, c = col; r >= 0; r-=1)
         if ( qpos [ r ] == c) return UNSAFE;
    // right diag
    for( r = qno - 1, c= col + 1; r >= 0 && c < noq; r-=1, c+=1)
         if ( qpos [ r ] == c) return UNSAFE;
     return SAFE;
}
void helper( int qpos[], int noq, int qno)
{
    int static solCtr;
    if ( qno == noq)
    {
        printf("%d Queen Solution #%d\n", ++solCtr);
        printBoard(qpos,noq);
       // getch();
        //printf("Solved\n");
        return;
    }
    int col;
    for( col = 0 ; col < noq; col+=1)
    {
        if ( isSafe(qpos, noq, qno, col)==SAFE)
        {
            qpos[qno] = col;
            helper(qpos, noq, qno+1);
            qpos[qno] = -1;

        }
    }
}
void n_queen(int noq)
{
    int qpos[ noq ];
    int qpos_ind;
    for( qpos_ind =0; qpos_ind < noq; qpos_ind += 1)
    {
        qpos [ qpos_ind ]= -1;
    }
    helper(qpos,noq,0);
}
int main()
{

    n_queen(8);

    return EXIT_SUCCESS;
}
