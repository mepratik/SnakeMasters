#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
#define EXIT 0
#define UP 18432
#define DOWN 20480
#define LEFT 19200
#define RIGHT 19712
#define ENTER 7181
#define ESC 283
print();
reasult();
int new1();
level();
int menu();
void splash();
void cursor();
void heighest();
int score,coco=1,ppp,mnc=0,hh,a,qq,my=1,sc,temp,sd,length=0,co,vv,p,x,y,v,dw=1,jk,u,q,f,r,s,t,c,m,l,z,w,b,d=1,zz,tt,lv=1,rn,aa,bb,cc,dd,g=1;

int main()
{


	int gdriver=DETECT,gmode,errorcode;
	int n;
	char a[]="\n\n\n\n\n PRATIK KUMAR \n\n\t\t\t PRESENTS \n\n\t\t\t\t\t\t\SNAKE 2011";
	for(n=0;a[n]!='\0';n++)
	{
	cursor();
	printf("%c",a[n]);
	delay(100);
	nosound();
	}
 printf("going to declear graphics");

 initgraph(&gdriver,&gmode, "C:\\TurboC3\\BGI\\");
 errorcode=graphresult();
 if(errorcode!=grOk)
  printf("\n\nGraphics Not Detected...");
 else
  printf("Graphics Initialized Successfully.......");
 delay(500);
 cleardevice();

 printf("\nINSTRUCTIONS FOR THE GAME\n\n\n U FOR MOVING UP \n D FOR MOVING DOWN \n L FOR MOVING RIGHT \n R FOR MOVING LEFT \n\n\n\n\n\n\n\HIT ANY KEY TO CONTINUE");
 delay(1000);
 getch();
 cleardevice();
 printf("DO YOU WANT TO ENABLE SOUND?????\n\n \t\t\t\tY \t\t\t\t\ N");
 z=getch();
 cleardevice();
 if(z=='y')
 m=1000;
 else if(z=='n')
 m=0;
 cleardevice() ;
 gotoxy(15,15);
 printf("DO YOU WANT TO ON AUTOMOVE \n\n 1.YES \n 2.NO");
 hh=getch();
 cleardevice();
sc= menu();
  if(sc==2)
{
goto new2;
}
else if(sc==3)
{
printf("SOUND 1.ON /t/tt/2.OFF");
{
 if(sc==1)
 {
 m='y';
 }
 else
 {m='n';}
 }
 }
else if(sc==4)
 {
printf("THE GAME S STILL IN PROGRESS SO IF YOU WILL TRY TO MOVE \nIT IN BACKWARD DIRECTION IT WILL DISTROY\N JUST SEE THE NSTRUCTION AND MOVE");
  getch();
}


else if(sc==5)
 {
 printf("THIS GMAE IS MAID BY C LANGUAGE AND HAVING A LITLE BIT C GRAPHICS \n THE GAME IS MADE ONLY IN 15 DAYS WITH RAGULAR CLASSEA\nMY FRIEND NAMAN GOEL AND NISHKARSHA HELPED ME A LOT");
 }

 getch();
 cleardevice();
 splash();
 new2:
 l=0,t=0;
 p=2,q=2,r=45,s=2;
 setcolor(RED);
 line(p,q,r,s);
 line(p,q+1,r,s+1);
 circle(r,s,2);
 line(400,2,400,400);
 line(2,400,400,400);
 gotoxy(55,6);
 printf("LEVEL         |- %d ",lv);
 line(400,110,700,110);
 print();
 reasult();
 back:

	if(bioskey (1))
	{
	if(p==r||q==s)
	{
	 c=bioskey(0);
	     }
	     }

 if(c==ESC)
 {
c=menu();
if(c==1)
{
goto back;
}
else if(c==2)
{
goto new2;
}
else if(c==3)
{
printf("SOUND 1.ON /t/tt/2.OFF");
{
 if(c==1)
 {
 m='y';
 }
 else
 {m='n';}
 }
 }
else if(c==4)
 {
printf("THE GAME S STILL IN PROGRESS SO IF YOU WILL TRY TO MOVE \nIT IN BACKWARD DIRECTION IT WILL DISTROY\N JUST SEE THE NSTRUCTION AND MOVE");
  getch();
  }


else if(c==5)
 {
 printf("THIS GMAE IS MAID BY C LANGUAGE AND HAVING A LITLE BIT C GRAPHICS \n THE GAME IS MADE ONLY IN 15 DAYS WITH RAGULAR CLASSEA\nMY FRIEND NAMAN GOEL AND NISHKARSHA HELPED ME A LOT");
 }
else
{
exit(0);
}

getch();
 }
 else
{


      setcolor(BLACK);
      line(p,q,r,s);
      circle(r,s,2);
      circle(r,s,1);
	if(p==r)
	line(p+1,q,r+1,s);
	else if(q==s)
	line(p,q+1,r,s+1);
	switch (c)
	{
		case RIGHT :
		{
		heighest();
		if(temp!=LEFT)
		{
		g=1;
		dw=1;
		if(r<400&&s<400&&r>0&&s>0)

		{
		if(t==0)
		{


		if(q==s)
		{
			p=p+1;
			r=r+1;

		}
			else if(p==r)
		{
			r=r+1;
			q=q+1;


		}
			else
		{
			q=q+1;
			r=r+1;
		}
	       }
	       else if(t==1)
	       {
	       if(q==s)
	       {
	       p=p+1;
	       r=r+1;
	       }
	       else if(p==r)
	       {
	       q=q-1;
	       r=r+1;
	       }
	       else
	       {
	       q=q-1;
	       r=r+1;
	       }
	      }
	      }
	      else
	      {
		cleardevice();
	      gotoxy(10,10);
	      printf("GAMEEE OVERRRRR");
	       gotoxy(55,2);
	 printf(" SCORE |- %d",score);
	 gotoxy(55,4);
	 printf(" ETEN  |- %d",a);
	 menu();

	      }


	      }

		}
	 break;

		case DOWN:
		{
		if(temp!=UP)
		{
		g=0;
		t=0;
		jk=0;
		if(r<400&&s<400&&r>0&&s>0)
		{
		if(dw==1)
		{
		if(q==s)
		{
			p=p+1;
			s=s+1;

		}
		else if(p==r)
		{
			q=q+1;
			s=s+1;

		}
		else
		{
			p=p+1;
			s=s+1;

		}
		}
		else
		{
		if(p==r)
		{
		q=q+1;
		s=s+1;
		}
		else
		{
		p=p-1;
		s=s+1;
		}
		}
		}
		  else
	      {
		cleardevice();
	      gotoxy(10,10);
	      printf("GAMEEE OVERRR");
	       gotoxy(55,2);
	 printf(" SCORE |- %d",score);
	 gotoxy(55,4);
	 printf(" ETEN  |- %d",a);
	 gotoxy(55,15);
	 menu();
	      }



	      }
		}


    break;

		case LEFT:
		{
		if(temp!=RIGHT)
		{
		dw=0;
		g=0;
		if(r<400&&s<400&&r>0&&s>0)
		{
		t=0;
		if(jk==0)
		{
		if(p==r)
		{
			q=q+1;
			r=r-1;

		}
		else if(q==s)
		{
			r=r-1;
			p=p-1;

		}
		else
		{
			r=r-1;
			q=q+1;

		 }
		 }
		 else
		 {
		 if(q==s)
		 {
		 p=p-1;
		 r=r-1;
		 }
		 else
		 {
		 r=r-1;
		 q=q-1;
		 }
		 }
		 }
		   else
	      {
	      cleardevice();
	      gotoxy(10,10);
	      printf("GAMEEE OVERRR");
	      gotoxy(55,2);
	      printf(" SCORE |- %d",score);
	      gotoxy(55,4);
	      printf(" ETEN  |- %d",a);
	      gotoxy(55,15);
	      menu();
	      }

	      }

	       }

	       break;

	 case UP:
	 {
	 if(temp!=DOWN)
	 {
		t=1;

		jk=1;
		if(r<400&&s<400&&s>0)
		{
			if(g==0)
		{
			if(q==s)
		{
			s=s-1;
			p=p-1;

		}
			else if(p==r)
		{
			q=q-1;
			s=s-1;

		}
			else
		{
			p=p-1;
			s=s-1;

		 }
		}
		 else

		{
			if (p==r)
			{
			q=q-1;
			s=s-1;
			}
	 else
	 {
	 p=p+1;
	 s=s-1;
	 }
	 }
	 }
	 else
	 {
	 cleardevice();

	 gotoxy(10,10);
	 printf("GAMEE OVERRR");
	 gotoxy(55,2);
	 printf(" SCORE |- %d",score);
	 gotoxy(55,4);
	 printf(" ETEN  |- %d",a);
	 gotoxy(55,15);
	 menu();
	 }
	 t=1;
	 }

	 }
	 break;
	}

	setcolor(GREEN);
	if(z=='y')
	{
       //	sound(0);
	delay(10);
	nosound();
	}

	temp=c;
	line(p,q,r,s);
	circle(r,s,2);

	if(p==r)
	line(p+1,q,r+1,s );
	else if(q==s)
	line(p,q+1,r,s+1);
	gotoxy(55,9);
	printf("NOW YOU ARE AT");
	gotoxy(55,10);
	printf("%d    ",r);
	gotoxy(55,11);
	printf("%d    ",s);
	gotoxy(55,12);
	printf("YOU HAVE TO GO AT");
	gotoxy(55,13);
	printf( "%d    ",x);
	gotoxy(55,14);
	printf("%d    ",y);
	gotoxy(55,15);
	printf("KEEP GOING...");
	coco++;
	if(my==12)
	my=1;
	if(coco==6)
	{
	my++;
	coco=1;
	}
	setcolor(RED);
	circle(x,y,2);
	line(400,2,400,400);
	line(2,400,400,400);
	setcolor(my);
	circle(x,y,1);
	if(p==r)
	{
	u=s-q;
	}
	else
	{
	u=r-p;
	}
	w=x-u;
	b=y-u;
	gotoxy(55,16);
	printf("MAKE TERN OF X %d   ",r);
	gotoxy(55,17);
	printf("MAKE TERN OF Y AT %d   ",s);
	gotoxy(55,19);
	setcolor(RED);
	printf("MOVE FORWARD ONLY ");
	gotoxy(55,21);
	setcolor(RED);
	printf("DONT HIT THE BOUNDRYYY");
	gotoxy(55,6);
	printf("LEVEL         |- %d ",lv);
       if(((x>=r-2)&&(x<=r+2))&&((y>=s-2)&&(y<=s+2)))
	{
	d++;
	length=1;
	setcolor(BLACK);
	circle(x,y,2);
	circle(r,s,2);
	sound(5000);
	delay(10);
	nosound();
	new1();
	}
	if((length==1))
	{

       if(p==r&&c==UP)
       {
       q=q+10;
       length=0;
       }
       else if(p==r&&c==DOWN)
      {
      q=q-10;
      length=0;
      }
       else if(q==s&&c==LEFT)
      {
      p=p+10;
      length=0;
      }
      else if(q==s&&c==RIGHT)

      {
      p=p-10;
      length=0;
      }
 }
	if(d==6)
	{
	d=1;
       splash();
	level();
	}
	if(lv==2)
	{

       if(zz==r&&s>=tt&&s<=tt+90)
       {
	gotoxy(10,10);
	printf("GAME OVAR");
	getch();
	exit(0);
	}

}

	else if(lv==3)
	{

	  if((r>=cc&&r<=cc+90&&s==dd)||(r>=aa&&r<=aa+90&&s==bb))
       {
       gotoxy(10,10);
	printf("GAME OVAR");
	getch();
	exit(0);
	}
	}
	 else if(lv==4)
	 {
		  if(((r>=cc&&r<=cc+90&&s==dd)||(r>=aa&&r<=aa+90&&s==bb))||(zz==r&&s>=tt&&s<=tt+90))
       {
       gotoxy(10,10);
	printf("GAME OVAR");
	getch();
	exit(0);
	}
 else if(lv==5)
 {
 cleardevice();
 gotoxy(15,20);
 printf("CONGRATOLATION!!!!!!!!!");
 gotoxy(15,21);
 printf("!!!!!!!!--YOU WON--!!!!!!!!!");
 }
 if(lv==1)
 delay(30);
 else if(lv==2)
 delay(20);
 else if(lv==3)
 delay(10);
 else
 {delay(0);
 }




 }
 goto back;

 }
 return(0);

}


     print()
	{
	   setcolor(RED);
	   randomize();
	   x=random(370);
	   y=random(370);
	   circle(x,y,2);
	   setcolor(WHITE);
	   circle(x,y,1);
	   return(0);
	}
	reasult()
	{
	score=a*10;
	gotoxy(55,2);
	printf("YOUR   SCORE  |- %d",score);
	gotoxy(55,4);
	printf("POINTS EATEN  |- %d",a);
	gotoxy(55,15);
	printf("GOOD   ");
	gotoxy(55,22);
	printf("THIS GAME IS IN PROGRESS");
	gotoxy(55,24);
	 printf("I WILL SORTOUT THE ");
	gotoxy(55,25);
	printf("length =%d %d" ,r-p,s-q);
	getch();
	return(0);
	}
       new1()
       {
       a++;
       setcolor(BLACK);
       circle(x,y,2);
       circle(x,y,1);
       circle(r,s,2);
       print();
       reasult();
       return(0);
}

level()
{
setcolor(YELLOW);
lv++;
if(lv==2)
{
zz=200;
tt=100;
if(x==zz&&y>=tt&&y<=tt+90)
{
zz=zz+13;
tt=tt+30;
}
 else
line(zz,tt,zz,tt+90) ;
}
else if(lv==3)
{
setcolor(BLACK);
line(zz,tt,zz,tt+90);
setcolor(YELLOW);
aa=100;
bb=50 ;
cc=200;
dd=300;
if(x==aa&&x>=aa+90&&y==bb)
{
aa=aa+30;
bb=bb+30;
}
else
{
line(aa,bb,aa+90,bb);

}
if(x==cc&&x>=cc+90&&y==dd)
{
cc=cc+30;
dd=dd+30;
}
else
{
line(cc,dd,cc+90,dd);

}


}
else if(lv==4)
{
zz=200;
tt=100;
if(x==zz&&y>=tt&&y<=tt+90)
{
zz=zz+13;
tt=tt+30;
}
line(zz,tt,zz,tt+90);
}
return(0);
}


int menu()
{int xq;
cleardevice();
gotoxy(25,15);
printf("********MAIN MENU*********");
gotoxy(25,16);
printf("1.RESUME");
gotoxy(25,17);
printf("2.RESTART");
gotoxy(25,18);
printf("3.SETINGS");
gotoxy(25,19);
printf("4.HELP");
gotoxy(25,20);
printf("5.ABOUT");
gotoxy(25,21);
printf("6.QUIT");
gotoxy(21,22);
xq=getch();
xq=getch();
if(xq==27)
exit(0);
return (xq);
}

void splash()
{
int i,j,x,y,ppp;
y=getmaxy();
x=getmaxx();
mnc=mnc+1;
for(i=1,j=y;i<=y/2,j>y/2;i=i+3,j=j-3)
{
setcolor(i);
line(1,i,x,i);
line(1,j,x,j);
delay(40);
}
gotoxy(25,16);
printf("LEVEL         |- %d ",mnc);
delay(800);
cleardevice();
ppp=1;
gotoxy(55,6);
printf("LEVEL         |- %d ",mnc);
       line(400,110,700,110);
       gotoxy(55,2);
	 printf(" SCORE |- %d",score);
	 gotoxy(55,4);
	 printf(" ETEN  |- %d",a);
}

		     void cursor()
	{
	_setcursortype(_NOCURSOR);

}
void heighest()
{
FILE *fp;
int hg=0;
fp=fopen("snakescore.txt","w+r");
fscanf(fp,"%d",&hg);
if(hg<score)
{
rewind(fp);
fprintf(fp,"%d",score);
}
}
