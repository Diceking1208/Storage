#include "screen.h"

#define MAP_WIDTH1 40  
#define MAP_HEIGHT1 23 

int playerX1, playerY1;  
int npcX1, npcY1;       
int c=1;
int k=1;

int map1[MAP_HEIGHT1][MAP_WIDTH1];

void initializeGame1() 
{
    playerX1 = 1;
    playerY1 = 1;

    int initialMap1[MAP_HEIGHT1][MAP_WIDTH1] = 
    {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 6, 1},
        {1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 4, 0, 4, 4, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 4, 0, 0, 4, 4, 4, 4, 4, 4, 0, 0, 4, 4, 0, 0, 4, 0, 0, 4, 0, 0, 2, 4, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 4, 0, 0, 4, 6, 0, 0, 0, 0, 0, 0, 4, 0, 4, 0, 0, 4, 4, 4, 0, 0, 0, 4, 0, 0, 1},
        {1, 4, 4, 4, 0, 0, 4, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 4, 0, 0, 0, 4, 10, 10, 1},
        {1, 0, 0, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 4, 6, 0, 4, 0, 4, 4, 4, 4, 4, 4, 0, 0, 0, 4, 0, 0, 0, 4, 4, 0, 0, 0, 0, 0, 4, 0, 0, 1},
        {1, 0, 0, 4, 0, 0, 4, 0, 4, 0, 0, 0, 8, 4, 0, 0, 0, 4, 12, 0, 0, 4, 0, 0, 0, 4, 0, 4, 0, 0, 0, 1},
        {1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 4, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1},
        {1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 4, 0, 0, 1},
        {1, 0, 0, 4, 4, 4, 4, 4, 0, 0, 0, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 4, 4, 4, 0, 0, 0, 0, 0, 4, 9, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 11, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 7, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 6, 0, 0, 4, 7, 1},
        {1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 4, 4, 4, 4, 4, 4, 7, 1},
        {1, 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 4, 4, 0, 0, 0, 0, 1},
        {1, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 4, 0, 0, 0, 0, 3, 3, 1},
        {1, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 4, 0, 0, 0, 0, 3, 5, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    for (int y = 0; y < MAP_HEIGHT1; y++) 
    {
        for (int x = 0; x < MAP_WIDTH1; x++) 
        {
            map1[y][x] = initialMap1[y][x];
        }
    }
}


void drawMap1() 
{
    system("cls");  
    for (int y1 = 0; y1 < MAP_HEIGHT1; y1++) 
    {
        for (int x1 = 0; x1 < MAP_WIDTH1; x1++) 
        {
            if (x1 == playerX1 && y1 == playerY1)
            {
                printf("A");
            }
            else if (map1[y1][x1] == 1)
            {
                if (y1 <= 0 || y1 >= 20)
                    printf("─");
                else    
                    printf("│");
            }
            else if (map1[y1][x1] == 2)
            {
                printf("!");
            }
            else if (map1[y1][x1] == 3)
            {
                printf("#");
            }
            else if (map1[y1][x1] == 4)
            {
                printf("\x1b[32m#\x1b[0m");
            }
            else if (map1[y1][x1] == 5)
            {
                printf("*");
            }
            else if (map1[y1][x1] == 6)  
            {
                printf("\x1b[31m?\x1b[0m");
            }
            else if (map1[y1][x1] == 7)
            {
                printf("\x1b[32m#\x1b[0m");
            }
            else if (map1[y1][x1] == 8)  
            {
                printf("\x1b[31m?\x1b[0m");
            }
            else if (map1[y1][x1] == 9)  
            {
                printf(" ");
            }
            else if (map1[y1][x1] == 10)
            {
                printf("#");
            }
            else if (map1[y1][x1] == 11)  
            {
                printf("\x1b[31m?\x1b[0m");
            }
            else if (map1[y1][x1] == 12)  
            {
                printf("\x1b[31m?\x1b[0m");
            }
            else if (map1[y1][x1] == 13)  
            {
                printf("\x1b[31m?\x1b[0m");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void handleInput1() 
{
    char input1 = getch();  
    int input0 = 0;

    switch (input1) 
    {
        case 'w':
            if (playerY1 > 0 && map1[playerY1 - 1][playerX1] != 1 && map1[playerY1 - 1][playerX1] != 3 && map1[playerY1 - 1][playerX1] != 4 && map1[playerY1 - 1][playerX1] != 7 && map1[playerY1 - 1][playerX1] != 10) 
            {
                playerY1--;
            }
            break;
        case 'a':
            if (playerX1 > 0 && map1[playerY1][playerX1 - 1] != 1 && map1[playerY1][playerX1 - 1] != 3 && map1[playerY1][playerX1 - 1] != 4 && map1[playerY1][playerX1 - 1] != 7 && map1[playerY1][playerX1 - 1] != 10) 
            {
                playerX1--;
            }
            break;
        case 's':
            if (playerY1 < MAP_HEIGHT1 - 1 && map1[playerY1 + 1][playerX1] != 1 && map1[playerY1 + 1][playerX1] != 3 && map1[playerY1 + 1][playerX1] != 4 && map1[playerY1 + 1][playerX1] != 7 && map1[playerY1 + 1][playerX1] != 10) 
            {
                playerY1++;
            }
            break;
        case 'd':
            if (playerX1 < MAP_WIDTH1 - 1 && map1[playerY1][playerX1 + 1] != 1 && map1[playerY1][playerX1 + 1] != 3 && map1[playerY1][playerX1 + 1] != 4 && map1[playerY1][playerX1 + 1] != 7 && map1[playerY1][playerX1 + 1] != 10) 
            {
                playerX1++;
            }
            break;
        case ' ':
            if (map1[playerY1][playerX1] == 2)
            {
                map1[playerY1][playerX1] = 0;  
                for (int y1 = 0; y1 < MAP_HEIGHT1; y1++)
                {
                    for (int x1 = 0; x1 < MAP_WIDTH1; x1++)
                    {
                        if (map1[y1][x1] == 3)
                        {
                            map1[y1][x1] = 0;  
                        }
                        if (map1[y1][x1] == 12)
                        {
                            map1[y1][x1] = 13;  
                        }
                    }
                }
            }
            if (map1[playerY1][playerX1] == 6)
            {
                printf("앗!(1을 누루시오)");
                scanf("%d", &input1);
                if(input1 == 1)
                {
                    event();
                    exit(1);
                    break;
                }
            }
            if (map1[playerY1][playerX1] == 9)
            {
                while (1)
                {
                    printf("벽이 좀 이상하다. ?를 잘 찾아보면 열 수 있을 것 같다.\n");
                    printf("계속하려면 아무 키나 누르세요: ");
                    getch();
                    break;
                }
            }
            if (map1[playerY1][playerX1] == 12)
            {
                printf("앗!(1을 누루시오)");
                scanf("%d", &input1);
                if(input1 == 1)
                {
                    event();
                    exit(1);
                    break;
                }
            }
            if (map1[playerY1][playerX1] == 8)
            {
                map1[playerY1][playerX1] = 0;  
                for (int y1 = 0; y1 < MAP_HEIGHT1; y1++)
                {
                    for (int x1 = 0; x1 < MAP_WIDTH1; x1++)
                    {
                        if (map1[y1][x1] == 10)
                        {
                            map1[y1][x1] = 0;  
                        }
                    }
                }
            }
            if (map1[playerY1][playerX1] == 11)
            {
                map1[playerY1][playerX1] = 0;  
                for (int y1 = 0; y1 < MAP_HEIGHT1; y1++)
                {
                    for (int x1 = 0; x1 < MAP_WIDTH1; x1++)
                    {
                        if (map1[y1][x1] == 7)
                        {
                            map1[y1][x1] = 0;  
                        }
                    }
                }
            }
            if (map1[playerY1][playerX1] == 5)
            {
                printf("\n축하합니다 클리어 하셨습니다(2를 누루시오)\n");
                scanf("%d", &input1);
                if(input1 == 2)
                {
                    event1();
                    exit(1);
                    break;
                }
            }
            if (map1[playerY1][playerX1] == 13)
            {
                printf("\n축하합니다 게임을 진짜 클리어 하셨습니다(2를 누루시오)\n");
                scanf("%d", &input1);
                if(input1 == 2)
                {
                    event2();
                    break;
                }
            }
            break;
    }
}

int game1() 
{
    initializeGame1();
    while(1)
    {
        SetCursorVisible(0);
        drawMap1();
        handleInput1();      
    }

    return 0;
}