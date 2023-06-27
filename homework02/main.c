#include <stdio.h>
#include "screen.h"
#include <stdlib.h>

int main()
{
    char screen[50*20+1];
    int width = 50;
    int height = 20;
    
    int game = 1;
    
    int buffer = 0;
    int input = 0;
    int input1 = 0;
    int input2 = 0;

    title(screen, width, height);
    setTitle(screen,width,height);
    system("cls");

    while(game)
    {
        if(buffer ==0)
        {
            title(screen, width, height);
            setTitle(screen,width,height);
            system("cls");
            printf("%s\nPlease input: ", screen);
            scanf("%d", &input);
            buffer =1;
        }

        if(input == 1)
        {
            buffer =0;
        }
        if(input == 2)
        {
            system("cls");
            title(screen, width, height);
            sethow(screen, width, height);
            while(game)
            {
                printf("%s\nPlease input: ", screen);
                scanf("%d", &input1);
                if(input1 ==1)
                {
                    buffer = 0;
                    break;
                }
                else if(input1 ==2)
                {
                    system("cls");
                    continue;
                }
                else
                {
                    system("cls");
                }
            }
        }

        else if(input == 3)
        {
            system("cls");
            title(screen, width, height);
            setexit(screen, width, height);

            printf("%s\nPlease input: ", screen);
            scanf("%d", &input2);
            if(input2 == 1)
            {
                system("cls");
                game = 0;
            }
            while(game)
            {
                if(input2 ==2)
                {
                    buffer =0;
                    break;
                }
                else
                {
                    system("cls");
                }
            }
        }
        else
        {
            system("cls");
            buffer = 0;
        }
    }
    return 0;
}