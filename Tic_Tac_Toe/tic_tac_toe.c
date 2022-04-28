#include<stdio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
char p1,p2;
int checkforwin()
{
    if(a[0]==a[1] && a[1]==a[2])
        return 1;
    else if(a[3]==a[4] && a[4]==a[5])
        return 1;
    else if(a[6]==a[7] && a[7]==a[8])
        return 1;
    else if(a[0]==a[3] && a[3]==a[6])
        return 1;
    else if(a[1]==a[4] && a[4]==a[7])
        return 1;
    else if(a[2]==a[5] && a[5]==a[8])
        return 1;
    else if(a[0]==a[4] && a[4]==a[8])
        return 1;
    else if(a[2]==a[4] && a[4]==a[6])
        return 1;
    else if(a[0]!='1' && a[1]!='2' && a[2]!='3' && a[3]!='4' && a[4]!='5' && a[5]!='6' && a[6]!='7' && a[7]!='8' && a[8]!='9')
        return 0;
    else
        return -1;
}
void board()
{
    int i;
    printf("\tTic-Tac-Toe\n\n");
        printf("\n\n");
        printf("  %c |  %c | %c\n",a[0],a[1],a[2]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("    |    |    \n");
        printf("  %c |  %c | %c\n",a[3],a[4],a[5]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("  %c |  %c | %c\n",a[6],a[7],a[8]);
        printf("    |    |    \n");
}
void decision(void )
{
    char dec;
    printf("Player 1 choose 'X' or 'O'-:   ");
    scanf("%c",&dec);
    if (dec=='x'||dec=='X')
    {
        p1='X';
        p2='O';
    }
    else if (dec =='O'||dec=='o')
    {
        p1='O';
        p2='X';
    }
    else
    {
        printf("Enter Correct Characters \n");
        decision();
    }
}
int main()
{
    board();
    decision();
    int h=-1;
    int k=1;
    while (h==-1)
    {
       if (k%2==1)
       {
            printf("Turn Of Player 1-: ");
            printf("Enter the place where you want to enter your choice -:  ");
            int l;
            scanf("%d",&l);
            a[l-1]=p1;
            board();
            h=checkforwin();
            k++;
       }
       else
       {
            printf("Turn Of Player 2-: ");
            printf("Enter the place where you want to enter your choice -:  ");
            int l;
            scanf("%d",&l);
            a[l-1]=p2;
            board();
            h=checkforwin();
            k++;
       }
    }
    if (h==1)
    {
        printf("Player %d Won",(k%2)+1);
    }
    else
    {
        printf("Better Luck Next Time");
    }
    return 0;
}