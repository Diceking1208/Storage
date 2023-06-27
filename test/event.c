#include "screen.h"


void event(void)
{
    int input = 0;
    while (1)
    {
        system("cls");                           
        SetCursorPosition(0,0);
        printf("┌────────────────────────────────────────────────┐");
        SetCursorPosition(0,1);
        printf("│                                                │");
        SetCursorPosition(0,2);
        printf("│          당신은 궁금증을 이기지 못하고         │");
        SetCursorPosition(0,3);
        printf("│               이곳으로 온 결과                 │");
        SetCursorPosition(0,4);
        printf("│                                                │");
        SetCursorPosition(0,5);
        printf("│                     \x1b[31m사 망\x1b[0m                      │");
        SetCursorPosition(0,6);
        printf("│                  하셨습니다....                │");
        SetCursorPosition(0,7);
        printf("│                                                │");
        SetCursorPosition(0,8);
        printf("│         ┌─────────────────────────────┐        │");
        SetCursorPosition(0,9);
        printf("│         │         다시 시작           │        │");
        SetCursorPosition(0,10);
        printf("│         │        하시겠습니까?        │        │");
        SetCursorPosition(0,11);
        printf("│         │   1. 예         2. 아니요   │        │");
        SetCursorPosition(0,12);
        printf("│         │                             │        │");
        SetCursorPosition(0,13);
        printf("│         └─────────────────────────────┘        │");
        SetCursorPosition(0,14);
        printf("│                                                │");
        SetCursorPosition(0,15);
        printf("│                                                │");
        SetCursorPosition(0,16);
        printf("└────────────────────────────────────────────────┘");
        printf("\nPlease input: ");
        scanf("%d", &input);
        if(input == 1)
        {
            game1();
            break;
        }
        if(input == 2)
        {
            main();
            break;
        }
    }
}

void event1(void)
{
    int input = 0;
    while (1)
    {
        system("cls");                           
        SetCursorPosition(0,0);
        printf("┌────────────────────────────────────────────────┐");
        SetCursorPosition(0,1);
        printf("│                                                │");
        SetCursorPosition(0,2);
        printf("│                    힝 속았지?                  │");
        SetCursorPosition(0,3);
        printf("│           당신은 마지막 문턱에서 발이걸려      │");
        SetCursorPosition(0,4);
        printf("│                                                │");
        SetCursorPosition(0,5);
        printf("│                     \x1b[31m사 망\x1b[0m                      │");
        SetCursorPosition(0,6);
        printf("│                  하셨습니다....                │");
        SetCursorPosition(0,7);
        printf("│                                                │");
        SetCursorPosition(0,8);
        printf("│         ┌─────────────────────────────┐        │");
        SetCursorPosition(0,9);
        printf("│         │         다시 시작           │        │");
        SetCursorPosition(0,10);
        printf("│         │        하시겠습니까?        │        │");
        SetCursorPosition(0,11);
        printf("│         │   1. 예         2. 아니요   │        │");
        SetCursorPosition(0,12);
        printf("│         │                             │        │");
        SetCursorPosition(0,13);
        printf("│         └─────────────────────────────┘        │");
        SetCursorPosition(0,14);
        printf("│                                                │");
        SetCursorPosition(0,15);
        printf("│                                                │");
        SetCursorPosition(0,16);
        printf("└────────────────────────────────────────────────┘");
        printf("\nPlease input: ");
        scanf("%d", &input);
        if(input == 1)
        {
            game1();
            break;
        }
        if(input == 2)
        {
            main();
            break;
        }
    }
}

void event2(void)
{
    int input = 0;
    while (1)
    {
        system("cls");                           
        SetCursorPosition(0,0);
        printf("┌────────────────────────────────────────────────┐");
        SetCursorPosition(0,1);
        printf("│                                                │");
       SetCursorPosition(0,2);
        printf("│                                                │");
        SetCursorPosition(0,3);
        printf("│                                                │");
       SetCursorPosition(0,4);
        printf("│            게임을 클리어 하셨습니다            │");
        SetCursorPosition(0,5);
        printf("│                 \x1b[32m축하드립니다!!!\x1b[0m                │");
        SetCursorPosition(0,6);
        printf("│                                                │");
        SetCursorPosition(0,7);
        printf("│                                                │");
        SetCursorPosition(0,8);
        printf("│                                                │");
        SetCursorPosition(0,9);
        printf("└────────────────────────────────────────────────┘");
        printf("\n 아무 키나 누루면 메인 화면으로 돌아갑니다");
        input = getch();  

        if (input)  
        {  
            main();
            exit(1);
            break;
        }
    }
}

