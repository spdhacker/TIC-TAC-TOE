#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void back();
int main()
{
int a[3][3]={
	     {1,2,3},
	     {4,5,6},
	     {7,8,9}
	    };
int z,s,k,i,j,t=0,r=0,p,d=0,b=0,q,c,ff,sbg=0;
char n,start,w2[10],w[26],wel2[20],won[15];
clrscr();


		       //begining of the background color


back();                 //function calling
for(z=10;z<75;z++)
{
textcolor(14);
gotoxy(z,4);
delay(15);
cprintf("*");
}

for(z=6;z<23;z++)
{
gotoxy(10,z);
delay(25);
if(z==8)
{
cprintf("*");
textcolor(RED);
 cprintf("                        X  TIC TAC TOE  0                    ");
textcolor(14);
					      cprintf("*");

}
else if(z==18)
{
cprintf("*");
textcolor(RED);
 cprintf("                    Press S to start the game                ");
textcolor(14);
					      cprintf("*");
}
else
textcolor(14);
cprintf("*                                                              *");
}

printf("\n \t");
for(z=10;z<75;z++)
{
textcolor(14);
gotoxy(z,26);
delay(15);
cprintf("*");
}
gotoxy(30,19);
scanf("%c",&start);
gotoxy(30,19);
printf(" ");
while(start=='s')   //////////////begining of the game after press s
{


for(z=10;z<75;z++)
{
textcolor(5);
gotoxy(z,4);
delay(15);
cprintf(" ");
}
//cprintf("*                                                              *");
for(z=6;z<23;z++)
{
textcolor(5);
gotoxy(10,z);
delay(15);
if(z==8)
{
cprintf("                                                                   ");
}
else if(z==16)
{
cprintf("                                                                   ");
}
else
cprintf("                                                                   ");
}

printf("\n\t");
for(z=10;z<75;z++)
{
textcolor(5);
gotoxy(z,26);
delay(15);
cprintf(" ");
}

if(p==0)
break;
gotoxy(30,4);

if(q==1 && sbg==1)
{
back();                 ////////////function calling
}
textcolor(0);
cprintf("These are the position");
printf("\n");
textcolor(15);
printf("\t\t\t\t");
cprintf("----------");
printf("\n");
for(i=0;i<3;i++)
{
printf("\t\t\t\t");
for(j=0;j<3;j++)
{
textcolor(8);
cprintf("%d",a[i][j]);
d++;
if(d<=2)
{
textcolor(15);
cprintf(" | ");
}
}
printf("\n");
textcolor(15);
printf("\t\t\t\t");
cprintf("----------");
printf("\n");
d=0;
}


	       //begining of the first do while
do{
if(p==0)
{
r=30;
b=1;
q=0;
break;
}
if(sbg==1)                ////////////////////function calling
{
back();
}                      ///////\\\\\\\\////\\\\\\\\\\\\\\////\\\\\
if(q==1)
{
for(c=0;c<40;c++)
{
gotoxy(4,c);
printf("                                                                                                  ");
}
}



printf("\n");
printf("\t\t\t");
textcolor(RED);
cprintf("NOTE:If you want to quit please press 0");
printf("\n\n");
textcolor(0);
gotoxy(26,16);
cprintf("*************Game starts***************");
printf("\n\n");
a[0][0]=1;
a[0][1]=2;
a[0][2]=3;
a[1][0]=4;
a[1][1]=5;
a[1][2]=6;
a[2][0]=7;
a[2][1]=8;
a[2][2]=9;
t=0;
r=0;
p=0;
d=0;
b=0;

		       //begining of the second do while.


do
{
if(q==1 && sbg==1) /////////\\\\\\\\\//////////\\\\\\\\\\\\//////////\\\\\\\
{
back();      //////////////////function calling
}
if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
{
if(a[0][0]==0)
{
textcolor(RED);
cprintf("Game Over\n0 Won the game");
r=20;
break;
}
else
{
textcolor(RED);
cprintf("Game Over\nX WOn the game");
r=20;
break;
}
}
else if(a[0][2]==a[1][1] && a[1][1]==a[2][0])
{
textcolor(RED);
if(a[0][2]==0)
cprintf("Game Over\n0 won the game");
else
cprintf("Game Over\nX won the game");
r=20;
break;
}
else if(a[0][0]==a[1][0] && a[1][0]==a[2][0])
{
textcolor(RED);
if(a[0][0]==0)
cprintf("Game Over\n0 won the game");
else
cprintf("Game Over\nX won the game");
r=20;
break;
}
else if(a[0][1]==a[1][1] && a[1][1]==a[2][1])
{
textcolor(RED);
if(a[0][1]==0)
cprintf("Game Over\n0 won the game");
else
cprintf("Game Over\nX won the game");
r=20;
break;
}
else if(a[0][2]==a[1][2] && a[1][2]==a[2][2])
{
textcolor(RED);
if(a[0][2]==0)
cprintf("Game Over\n0 won the game");
else
cprintf("Game Over\nX won the game");
r=20;
break;
}
else if(a[0][0]==a[0][1] && a[0][1]==a[0][2])
{
textcolor(RED);
if(a[0][0]==0)
cprintf("Game Over\n0 won the game");
else
cprintf("Game Over\nX won the game");
r=20;
break;
}
else if(a[1][0]==a[1][1] && a[1][1]==a[1][2])
{
textcolor(RED);
if(a[1][0]==0)
cprintf("Game Over\n0 won the game");
else
cprintf("Game Over\nX won the game");
r=20;
break;
}
else if(a[2][0]==a[2][1] && a[2][1]==a[2][2])
{
textcolor(RED);
if(a[2][0]==0)
cprintf("Game Over\n0 won the game");
else
cprintf("Game Over\nX won the game");
r=20;
break;
}
else
{
t++;
if(t%2==0)
{
if(sbg==0 || sbg==1)             ///////\\\\\\/////\\\///\\
{
gotoxy(1,13);
for(ff=14;ff<25;ff++)
{
gotoxy(1,ff);
textbackground(3);
cprintf("                                                                                     ");
}
}
textcolor(4);
printf("\t\t");
gotoxy(30,3);
cprintf("Enter the position of X");
printf("\n");
printf("\t\t\t");
scanf("%d",&p);
printf("\n");
}
else
{
if(q==1 && sbg==1)
{
back();
}
textcolor(1);
printf("\t\t");
if(t!=0 && t!=1 || q==1)
{
gotoxy(30,3);
}
cprintf("Enter the position of 0");

printf("\n");
printf("\t\t\t");
scanf("%d",&p);
if(t==1)
{
for(c=4;c<29;c++)
{
gotoxy(12,c);
printf("                                                             ");
}
}
printf("\n");
}
if(p==0)
{
r=30;
b=1;
q=0;
textcolor(6);
gotoxy(35,10);
cprintf(".....Bye...");
break;
}
else{
switch(p)
{
case 1:
if(t%2==0)
a[0][0]='X';
else
a[0][0]=0;
d=0;
textcolor(WHITE);
gotoxy(30,5);
printf("\n");                         ///////////////////case 1 gotoxy
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(1);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;

case 2:
gotoxy(1,25);
if(t%2==0)
a[0][1]='X';
else
a[0][1]=0;
d=0;
gotoxy(30,5);                           ////////////////////case 2 gotoxy
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(1);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;


case 3:
if(t%2==0)
a[0][2]='X';
else
a[0][2]=0;
d=0;
gotoxy(30,5);                           ////////////////case3
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(BLUE);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;


case 4:
if(t%2==0)
a[1][0]='X';
else
a[1][0]=0;
d=0;
gotoxy(30,5);                                ///////////////case4
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(BLUE);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;


case 5:
if(t%2==0)
a[1][1]='X';
else
a[1][1]=0;
d=0;
gotoxy(30,5);                             ////////////////case5
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(BLUE);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;


case 6:
if(t%2==0)
a[1][2]='X';
else
a[1][2]=0;
d=0;
gotoxy(30,5);                          //////////////////case6
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(BLUE);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;


case 7:
if(t%2==0)
a[2][0]='X';
else
a[2][0]=0;
d=0;
gotoxy(30,5);                                ///////////////case7
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(BLUE);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;


case 8:
if(t%2==0)
a[2][1]='X';
else
a[2][1]=0;
d=0;
gotoxy(30,5);                                  /////////////case8
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(BLUE);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;


case 9:
d=0;
if(t%2==0)
a[2][2]='X';
else
a[2][2]=0;
gotoxy(30,5);                                   //////////////case9
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]<10 && a[i][j]!=0)
{
textcolor(8);
cprintf("%d",a[i][j]);
}
else
{
if(a[i][j]==0)
{
textcolor(BLUE);
cprintf("%d",a[i][j]);
}
else
{
textcolor(RED);
cprintf("%c",a[i][j]);
}
}
d++;
if(d<=2)
{
textcolor(WHITE);
cprintf(" | ");
}
}
textcolor(WHITE);
printf("\n");
cprintf("                              ----------");
printf("\n                              ");
d=0;
}
break;

default:
printf("pls enter the correct position\n");
}
printf("\n");
}
}
r++;

if(r!=31)
{

if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
{
if(a[0][0]==0)
{
textcolor(RED);
cprintf("              Game Over\n0 Won the game");
}
else
{
textcolor(RED);
cprintf("              Game Over\n X Won the game");
}
r=20;
}
else if(a[0][2]==a[1][1] && a[1][1]==a[2][0])
{
textcolor(RED);
if(a[0][2]==0)
cprintf("               Game Over \n0 won the game");
else
cprintf("               Game Over \nX won the game");
r=20;
}
else if(a[0][0]==a[1][0] && a[1][0]==a[2][0])
{
textcolor(RED);
if(a[0][0]==0)
cprintf("               Game Over\n0 won the game");
else
cprintf("               Game Over\nX won the game");
r=20;
}
else if(a[0][1]==a[1][1] && a[1][1]==a[2][1])
{
textcolor(RED);
if(a[0][1]==0)
cprintf("               Game Over\n0 won the game");
else
cprintf("               Game Over\nX won the game");
r=20;
}
else if(a[0][2]==a[1][2] && a[1][2]==a[2][2])
{
textcolor(RED);
if(a[0][2]==0)
cprintf("                Game Over\n0 won the game");
else
cprintf("                Game Over\nX won the game");
r=20;
}
else if(a[0][0]==a[0][1] && a[0][1]==a[0][2])
{
if(a[0][0]==0)
cprintf("                Game Over\n0 won the game");
else
cprintf("                Game Over\nX won the game");
r=20;
}
else if(a[1][0]==a[1][1] && a[1][1]==a[1][2])
{
textcolor(RED);
if(a[1][0]==0)
cprintf("                 Game Over\n0 won the game");
else
cprintf("                 Game Over\nX won the game");
r=20;
}
else if(a[2][0]==a[2][1] && a[2][1]==a[2][2])
{
textcolor(RED);
if(a[2][0]==0)
cprintf("                 Game Over\n0 won the game");
else
cprintf("                 Game Over\nX won the game");
r=20;
}
}

sbg++;
}while(r<9);           //this is end of the second do while loop.

if(r!=20 && r!=30)
{
textcolor(RED);
cprintf("No one won the game");
}
if(b==0)
{
textcolor(0);
printf("\n\n\n\t\t\t");
cprintf("Do you want to play again PRESS '1'");
printf("\n\t\t\t");
cprintf("(or)");
printf("\n\t\t\t");
cprintf("To quit PRESS 0");
printf("\n\t\t\t");
scanf("%d",&q);
}
sbg++;
}while(q==1);	  //this is the end of the first do while.

if(p==0 || q==0)
break;








//this is the end of the prgram.
}//this is the end of the first while loop.
getch();
return 0;
}
/////////////////////////////////////end of the program///
void back()
{
int bg;
for(bg=0;bg<50;bg++)
{
if(bg==0)
{
gotoxy(1,1);
}
textbackground(3);
cprintf("                                                                                                                                         ");
gotoxy(1,bg);
}

}