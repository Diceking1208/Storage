#include <stdio.h>
#include "screen.h"

int end()
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
                        else if(a==4&&b==6)
                        {
                            screen[b]='A';
                        }
                        else if(a==4&&b==7)
                        {
                            screen[b]='r';
                        }
                        else if(a==4&&b==8)
                        {
                            screen[b]='e';
                        }
                        else if(a==4&&b==10)
                        {
                            screen[b]='y';
                        }
                        else if(a==4&&b==11)
                        {
                            screen[b]='o';
                        }
                        else if(a==4&&b==12)
                        {
                            screen[b]='u';
                        }
                        else if(a==4&&b==14)
                        {
                            screen[b]='s';
                        }
                        else if(a==4&&b==15)
                        {
                            screen[b]='u';
                        }
                        else if(a==4&&b==16)
                        {
                            screen[b]='r';
                        }
                        else if(a==4&&b==17)
                        {
                            screen[b]='e';
                        }
                        else if(a==4&&b==19)
                        {
                            screen[b]='y';
                        }
                        else if(a==4&&b==20)
                        {
                            screen[b]='o';
                        }
                        else if(a==4&&b==21)
                        {
                            screen[b]='u';
                        }
                        else if(a==5&&b==6)
                        {
                            screen[b]='w';
                        }
                        else if(a==5&&b==7)
                        {
                            screen[b]='a';
                        }
                        else if(a==5&&b==8)
                        {
                            screen[b]='n';
                        }
                        else if(a==5&&b==9)
                        {
                            screen[b]='t';
                        }
                        else if(a==5&&b==11)
                        {
                            screen[b]='t';
                        }
                        else if(a==5&&b==12)
                        {
                            screen[b]='o';
                        }
                        else if(a==5&&b==14)
                        {
                            screen[b]='g';
                        }
                        else if(a==5&&b==15)
                        {
                            screen[b]='e';
                        }
                        else if(a==5&&b==16)
                        {
                            screen[b]='t';
                        }
                        else if(a==5&&b==18)
                        {
                            screen[b]='o';
                        }
                        else if(a==5&&b==19)
                        {
                            screen[b]='u';
                        }
                        else if(a==5&&b==20)
                        {
                            screen[b]='t';
                        }
                        else if(a==5&&b==21)
                        {
                            screen[b]='?';
                        }
                        else if(a==10&&b==6)
                        {
                            screen[b]='1';
                        }
                        else if(a==10&&b==7)
                        {
                            screen[b]='.';
                        }
                        else if(a==10&&b==9)
                        {
                            screen[b]='Y';
                        }
                        else if(a==10&&b==10)
                        {
                            screen[b]='e';
                        }
                        else if(a==10&&b==11)
                        {
                            screen[b]='s';
                        }
                        else if(a==11&&b==6)
                        {
                            screen[b]='2';
                        }
                        else if(a==11&&b==7)
                        {
                            screen[b]='.';
                        }
                        else if(a==11&&b==9)
                        {
                            screen[b]='N';
                        }
                        else if(a==11&&b==10)
                        {
                            screen[b]='o';
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