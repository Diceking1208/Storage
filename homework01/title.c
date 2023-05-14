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
			      else if(a==3&&b==2)
                        {
                              screen[b]='B';
                        }
                        else if(a==3&&b==4)
                        {
                              screen[b]='a';
                        }
                        else if(a==3&&b==6)
                        {
                              screen[b]='n';
                        }
                        else if(a==3&&b==8)
                        {
                              screen[b]='a';
                        }
                        else if(a==3&&b==10)
                        {
                              screen[b]='n';
                        }
                        else if(a==3&&b==12)
                        {
                              screen[b]='a';
                        }
			      else if(a==3&&b==17)
			      {
				      screen[b]='R';		
			      }
			      else if(a==3&&b==19)
			      {
				      screen[b]='e';
			      }
			      else if(a==3&&b==21)
                        {	
				      screen[b]='s';
                        }	
			      else if(a==3&&b==23)
                        {
				      screen[b]='c';
                        }
			      else if(a==3&&b==25)
                        {
				      screen[b]='u';
                        }
			      else if(a==3&&b==27)
                        {
				      screen[b]='e';
                        }
                        else if(a==5&&b==7)
                        {
				      screen[b]='o';
                        }
                        else if(a==5&&b==9)
                        {
				      screen[b]='p';
                        }
                        else if(a==5&&b==11)
                        {
				      screen[b]='e';
                        }
                        else if(a==5&&b==13)
                        {
				      screen[b]='r';
                        }
                        else if(a==5&&b==15)
                        {
				      screen[b]='a';
                        }
                        else if(a==5&&b==17)
                        {
				      screen[b]='t';
                        }
                        else if(a==5&&b==19)
                        {
				      screen[b]='i';
                        }
                        else if(a==5&&b==21)
                        {
				      screen[b]='o';
                        }
                        else if(a==5&&b==23)
                        {
				      screen[b]='n';
                        }
                        else if(a==9&&b==5)
                        {
				      screen[b]='1';
                        }
                        else if(a==9&&b==6)
                        {
				      screen[b]='.';
                        }
                        else if(a==9&&b==7)
                        {
				      screen[b]='G';
                        }
                        else if(a==9&&b==8)
                        {
				      screen[b]='a';
                        }
                        else if(a==9&&b==9)
                        {
				      screen[b]='m';
                        }
                        else if(a==9&&b==10)
                        {
				      screen[b]='e';
                        }
                        else if(a==9&&b==12)
                        {
				      screen[b]='S';
                        }
                        else if(a==9&&b==13)
                        {
				      screen[b]='t';
                        }
                        else if(a==9&&b==14)
                        {
				      screen[b]='a';
                        }
                        else if(a==9&&b==15)
                        {
				      screen[b]='r';
                        }
                        else if(a==9&&b==16)
                        {
				      screen[b]='t';
                        }
                        else if(a==10&&b==5)
                        {
				      screen[b]='2';
                        }
                        else if(a==10&&b==6)
                        {
				      screen[b]='.';
                        }
                        else if(a==10&&b==7)
                        {
				      screen[b]='E';
                        }
                        else if(a==10&&b==8)
                        {
				      screen[b]='x';
                        }
                        else if(a==10&&b==9)
                        {
				      screen[b]='p';
                        }
                        else if(a==10&&b==10)
                        {
				      screen[b]='l';
                        }
                        else if(a==10&&b==11)
                        {
				      screen[b]='a';
                        }
                        else if(a==10&&b==12)
                        {
				      screen[b]='i';
                        }
                        else if(a==10&&b==13)
                        {
				      screen[b]='n';
                        }
                        else if(a==11&&b==5)
                        {
				      screen[b]='3';
                        }
                        else if(a==11&&b==6)
                        {
				      screen[b]='.';
                        }
                        else if(a==11&&b==7)
                        {
				      screen[b]='E';
                        }
                        else if(a==11&&b==8)
                        {
				      screen[b]='x';
                        }
                        else if(a==11&&b==9)
                        {
				      screen[b]='i';
                        }
                        else if(a==11&&b==10)
                        {
				      screen[b]='t';
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
