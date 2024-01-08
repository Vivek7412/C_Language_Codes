#include <stdio.h>
#include <stdlib.h>
#include <time.h>
generatenumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 'p'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int input1, comscore = 0, playerscore = 0;
    char elements[] = {'r', 'p', 's'};
    char playerchar, comchar;
    printf("WELCOME the Rock, Paper and Scisseor game:\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player 1 tern:\n");
        printf("enter the nuber: 1 for rock, 2 for paper, 3 for scesseor:");
        scanf("%d \n", &input1);
        getchar();
        getchar();
        playerchar = elements[input1 - 1];
        printf("player choose: %c\n", playerchar);
        printf("compuer's tern:\n");
        printf("enter the nuber: 1 for rock, 2 for paper, 3 for scesseor:\n");
        input1 = generatenumber(3) + 1;
        comchar = elements[input1 - 1];
        printf("cpu choose : %c\n", comchar);

        if (greater(comchar, playerchar) == 1)
        {
            comscore += 1;
            printf("you got it:\n");
            printf("your score is :%d \n\n cpu score is %d \n:", playerscore, comscore);
        }
        else if (greater(comchar, playerchar) == -1)
        {
            comscore += 1;
            playerscore += 1;
            printf("the points is draw...\n");
            printf("your score is %d \n cpu score is %d \n", playerscore, comscore);
        }
        else
        {
            playerscore += 1;
            printf("cpu got it\n");
            printf("your score is %d \n cpu score is %d\n ", playerscore, comscore);
        }
    }
    if (playerscore > comscore)
    {
        printf("you win....");
    }
    else if (playerscore < comscore)
    {
        printf("computer win!....");
    }
    else
    {
        printf("match is draw.....");
    }

    return 0;
}
