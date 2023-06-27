#include "screen.h"


int main(void)
{
    int gameState = 0;
    int buffer = 0;
    int input = 0;
    int input1 = 0;
    int input2 = 0;
    int input3 = 0;

    while (1)
    {
        if (gameState == 0)
        {
            system("cls");
            title();
            printf("\nPlease input: ");
            scanf("%d", &input);
            buffer = 1;
            gameState = 1;
        }

        if (input == 1)
        {
            system("cls");
            gametitle();
            SetCursorVisible(0);
            while (1)
            {
                printf("\nPlease input: ");
                scanf("%d", &input1);
                if (input1 == 1)
                {
                    game();
                    gameState = 0;
                    break;
                }
                if (input1 == 2)
                {
                    game1();
                    gameState = 0;
                    break;
                }
            }
        }

        if (input == 2)
        {
            system("cls");
            title_1();
            SetCursorVisible(0);
            while (1)
            {
                printf("\nPlease input: ");
                scanf("%d", &input2);
                if (input2 == 1)
                {
                    buffer = 0;
                    gameState = 0;
                    break;
                }
                else if (input2 == 2)
                {
                    title_1();
                    continue;
                }
                else
                {
                    title_1();
                    continue;
                }
            }
        }

        if (input == 3)
        {
            system("cls");
            title_2();
            SetCursorVisible(0);
            while (1)
            {
                printf("\nPlease input: ");
                scanf("%d", &input3);
                if (input3 == 2)
                {
                    system("cls");
                    return 0;
                }
                else if (input3 == 1)
                {
                    buffer = 0;
                    gameState = 0;
                    break;
                }
                else
                {
                    title_2();
                    continue;
                }
            }
        }
        else
        {
            system("cls");
            buffer = 0;
            gameState = 0;
        }
    }
    return 0;
}
