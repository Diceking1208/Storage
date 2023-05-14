#include <stdio.h>
#include "screen.h"

int explain()
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
                        else if(a==3&&b==4)
                        {
                                screen[b]='C';
                        }
                        else if(a==3&&b==5)
                        {
                                screen[b]='o';
                        }
                        else if(a==3&&b==6)
                        {
                                screen[b]='l';
                        }
                        else if(a==3&&b==7)
                        {
                                screen[b]='l';
                        }
                        else if(a==3&&b==8)
                        {
                                screen[b]='e';
                        }
                        else if(a==3&&b==9)
                        {
                                screen[b]='c';
                        }
                        else if(a==3&&b==10)
                        {
                                screen[b]='t';
                        }
                        else if(a==3&&b==12)
                        {
                                screen[b]='b';
                        }
                        else if(a==3&&b==13)
                        {
                                screen[b]='a';
                        }
                        else if(a==3&&b==14)
                        {
                                screen[b]='n';
                        }
                        else if(a==3&&b==15)
                        {
                                screen[b]='a';
                        }
                        else if(a==3&&b==16)
                        {
                                screen[b]='n';
                        }
                        else if(a==3&&b==17)
                        {
                                screen[b]='a';
                        }
                        else if(a==3&&b==18)
                        {
                                screen[b]='s';
                        }
                        else if(a==3&&b==20)
                        {
                                screen[b]='a';
                        }
                        else if(a==3&&b==21)
                        {
                                screen[b]='n';
                        }
                        else if(a==3&&b==22)
                        {
                                screen[b]='d';
                        }
                        else if(a==4&&b==4)
                        {
                                screen[b]='A';
                        }
                        else if(a==4&&b==4)
                        {
                                screen[b]='v';
                        }
                        else if(a==4&&b==5)
                        {
                                screen[b]='o';
                        }
                        else if(a==4&&b==6)
                        {
                                screen[b]='i';
                        }
                        else if(a==4&&b==7)
                        {
                                screen[b]='d';
                        }
                        else if(a==4&&b==9)
                        {
                                screen[b]='m';
                        }
                        else if(a==4&&b==10)
                        {
                                screen[b]='o';
                        }
                        else if(a==4&&b==11)
                        {
                                screen[b]='n';
                        }
                        else if(a==4&&b==12)
                        {
                                screen[b]='s';
                        }
                        else if(a==4&&b==13)
                        {
                                screen[b]='t';
                        }
                        else if(a==4&&b==14)
                        {
                                screen[b]='e';
                        }
                        else if(a==4&&b==15)
                        {
                                screen[b]='r';
                        }
                        else if(a==4&&b==16)
                        {
                                screen[b]='s';
                        }
                        else if(a==4&&b==18)
                        {
                                screen[b]='t';
                        }
                        else if(a==4&&b==19)
                        {
                                screen[b]='o';
                        }
                        else if(a==4&&b==21)
                        {
                                screen[b]='g';
                        }
                        else if(a==4&&b==22)
                        {
                                screen[b]='o';
                        }
                        else if(a==5&&b==4)
                        {
                                screen[b]='t';
                        }
                        else if(a==5&&b==5)
                        {
                                screen[b]='o';
                        }
                        else if(a==5&&b==7)
                        {
                                screen[b]='t';
                        }
                        else if(a==5&&b==8)
                        {
                                screen[b]='h';
                        }
                        else if(a==5&&b==9)
                        {
                                screen[b]='e';
                        }
                        else if(a==5&&b==11)
                        {
                                screen[b]='n';
                        }
                        else if(a==5&&b==12)
                        {
                                screen[b]='e';
                        }
                        else if(a==5&&b==13)
                        {
                                screen[b]='x';
                        }
                        else if(a==5&&b==14)
                        {
                                screen[b]='t';
                        }
                        else if(a==5&&b==16)
                        {
                                screen[b]='s';
                        }
                        else if(a==5&&b==17)
                        {
                                screen[b]='t';
                        }
                        else if(a==5&&b==18)
                        {
                                screen[b]='a';
                        }
                        else if(a==5&&b==19)
                        {
                                screen[b]='g';
                        }
                        else if(a==5&&b==20)
                        {
                                screen[b]='e';
                        }
                        else if(a==5&&b==14)
                        {
                                screen[b]='t';
                        }
                        else if(a==9&&b==4)
                        {
                                screen[b]='R';
                        }
                        else if(a==9&&b==5)
                        {
                                screen[b]='e';
                        }
                        else if(a==9&&b==6)
                        {
                                screen[b]='t';
                        }
                        else if(a==9&&b==7)
                        {
                                screen[b]='u';
                        }
                        else if(a==9&&b==8)
                        {
                                screen[b]='r';
                        }
                        else if(a==9&&b==9)
                        {
                                screen[b]='n';
                        }
                        else if(a==9&&b==11)
                        {
                                screen[b]='t';
                        }
                        else if(a==9&&b==12)
                        {
                                screen[b]='o';
                        }
                        else if(a==9&&b==14)
                        {
                                screen[b]='m';
                        }
                        else if(a==9&&b==15)
                        {
                                screen[b]='e';
                        }else if(a==9&&b==16)
                        {
                                screen[b]='n';
                        }else if(a==9&&b==17)
                        {
                                screen[b]='u';
                        }
                        else if(a==9&&b==18)
                        {
                                screen[b]='?';
                        }
                        else if(a==10&&b==4)
                        {
                                screen[b]='1';
                        }
                        else if(a==10&&b==5)
                        {
                                screen[b]='.';
                        }
                        else if(a==10&&b==7)
                        {
                                screen[b]='Y';
                        }
                        else if(a==10&&b==8)
                        {
                                screen[b]='e';
                        }
                        else if(a==10&&b==9)
                        {
                                screen[b]='s';
                        }
                        else if(a==11&&b==4)
                        {
                                screen[b]='2';
                        }
                        else if(a==11&&b==5)
                        {
                                screen[b]='.';
                        }
                        else if(a==11&&b==7)
                        {
                                screen[b]='N';
                        }
                        else if(a==11&&b==8)
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