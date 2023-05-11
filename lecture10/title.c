#include <stdio.h>
#include "screen.h"

int title()
{
        char screen[500];

        int a = 0;
        while(a<15)
        {
                int b = 0;
                while(b<30)
                {
                        if(a==0||a==14)
                        {
                                screen[b]='*';
                        }
                        else if(b==0||b==29)
                        {
                                screen[b]='*';
                        }
			else if(a==4&&b==5)
                        {
                                screen[b]='D';
                        }
                        else if(a==4&&b==8)
                        {
                                screen[b]='I';
                        }
                        else if(a==4&&b==11)
                        {
                                screen[b]='N';
                        }
                        else if(a==4&&b==14)
                        {
                                screen[b]='O';
                        }
                        else if(a==4&&b==17)
                        {
                                screen[b]='R';
                        }
                        else if(a==4&&b==20)
                        {
                                screen[b]='U';
                        }
                        else if(a==4&&b==23)
                        {
                                screen[b]='N';
                        }
                        else
                        {
                                screen[b]=' ';
                        }
                        b+=1;
                }

                screen[30]='\n';
                a+=1;
                printf("%s",screen);
        }

        return 0;
}
