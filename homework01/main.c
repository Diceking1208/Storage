#include<stdio.h>
#include"screen.h"

int main()
{
    title();
    int game_state = 1;
    int input = 0;
    while (game_state)
    {
        scanf("%d",&input);
        if(input==2)
        {
            explain();
            while(game_state)
            {
                scanf("%d",&input);
                if (input==1)
                {
                    title();
                    game_state=0;
                }
                else if(input==2)
                {
                    explain();
                }
                else
                {
                    game_state=1;
                }
            }
            game_state=1;
            
        }
        if(input==3)
        {
            end();
            scanf("%d",&input);
            if(input==1)
            {
                game_state=0;
            }
            else if(input==2)
            {
                title();
            }
        }
    }
    return 0;
}
    
	