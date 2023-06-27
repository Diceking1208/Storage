#include "screen.h"

#define MAP_WIDTH 15  
#define MAP_HEIGHT 15 

int playerX, playerY;  
int map[MAP_HEIGHT][MAP_WIDTH]; 

void initializeGame() 
{
    playerX = 1;
    playerY = 1;

    int initialMap[MAP_HEIGHT][MAP_WIDTH] = 
    {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    for (int y = 0; y < MAP_HEIGHT; y++) 
    {
        for (int x = 0; x < MAP_WIDTH; x++) 
        {
            map[y][x] = initialMap[y][x];
        }
    }
}

void drawMap() 
{
    system("cls");  

    for (int y = 0; y < MAP_HEIGHT; y++) 
    {
        for (int x = 0; x < MAP_WIDTH; x++) 
        {
            if (x == playerX && y == playerY) 
            {
                printf("A");
            } 
            else if (map[y][x] == 2) 
            {
                printf("!");
            } 
            else if (map[y][x] == 3) 
            {
                printf("#");
            } 
            else if (map[y][x] == 4) 
            {
                printf("*");
            } 
            else if (map[y][x] == 1) 
            {
                if (y <= 0 || y >= 11)
                    printf("─");
                else
                    printf("│");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n이동 방향: \x1b[32mW(위), A(왼쪽), S(아래), D(오른쪽)\x1b[0m으로 이동할 수 있고");
    printf("\n\x1b[32m!\x1b[0m를 먹게 되면 (스페이스바를 누르면 획득 가능) \n\x1b[32m게임클리어를 있는 \x1b[0m문이 열리게 됩니다.");
    printf("\n문이 열리면 \x1b[32m*\x1b[0m에 가서 스페이스바를 누르면 클리어하게 됩니다.");
    printf("\n중간 중간 \x1b[31m?\x1b[0m가 있는 곳이 있는데 그곳은 재미있는 일들이 많이 일어나니 가보고 싶으면 한번 가보는 것도 좋아요.");
    printf("\n물론 좋은 일만 있는 것도 아니니 조심하세요.");
    printf("\n한번 연습해보세요.");
}

void handleInput() 
{
    char input = getch();  

    switch (input) 
    {
        case 'w':
            if (playerY > 0 && map[playerY - 1][playerX] != 1 && map[playerY - 1][playerX] != 3) 
            {
                playerY--;
            }
            break;
        case 'a':
            if (playerX > 0 && map[playerY][playerX - 1] != 1 && map[playerY][playerX - 1] != 3) 
            {
                playerX--;
            }
            break;
        case 's':
            if (playerY < MAP_HEIGHT - 1 && map[playerY + 1][playerX] != 1 && map[playerY + 1][playerX] != 3) 
            {
                playerY++;
            }
            break;
        case 'd':
            if (playerX < MAP_WIDTH - 1 && map[playerY][playerX + 1] != 1 && map[playerY][playerX + 1] != 3) 
            {
                playerX++;
            }
            break;
        case ' ':
            if (map[playerY][playerX] == 2)
            {
                map[playerY][playerX] = 0;  
                for (int y = 0; y < MAP_HEIGHT; y++)
                {
                    for (int x = 0; x < MAP_WIDTH; x++)
                    {
                        if (map[y][x] == 3)
                        {
                            map[y][x] = 0;  
                        }
                    }
                }
            }
            if (map[playerY][playerX] == 4)
            {
                printf("\n이렇게 하면 된다네 \x1b[32m행운\x1b[0m을 빌지..(2를 누루시오)\n");
                scanf("%d", &input);
                if(input == 2)
                {
                    game1();
                    break;
                }
            }
            break;
    }
}

int game()
{ 
    initializeGame();

    while (1) 
    {
        SetCursorVisible(0);
        drawMap();
        handleInput();
    }

    return 0;
}
