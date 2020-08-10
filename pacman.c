#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#define row 25
#define col 100
int x_int=2,y_int=2;
int x_alt=0,y_alt=0;


#define bound_conditions_y  (y_int+y_alt>=1 && y_int +y_alt<=24)

#define bound_conditions_x  (x_int+x_alt>=1 && x_alt+x_int<=99)


start4=0;
start5=0;
start6=0;
start7=0;
flag_line=0;
int z=0;
start=0;
start1=0;
flag_right=0;
int x=0;

int i=0;
int j=0;

int line1=0;
int line2=0;
int line3=0;
int line4=0;
int line5=0;

int x_int_game=98 ,y_int_game=2;

start2=0;
start3=0;
flag_left=0;
int y=0;

int k=0;
int l=0;


    int gotoxy(int y,int x)
{
HANDLE hout;
COORD position;

hout= GetStdHandle(STD_OUTPUT_HANDLE);
    position.X=x;
    position.Y=y;
    SetConsoleCursorPosition(hout,position);

return 0;
}

void print()
{int i,j;
    for(i=0;i<=row;i++)
    {
         for(j=0;j<=col;j++)
         {
             if(i<j && i==0) //////inner boundary starts
             {
                 gotoxy(i,j);
                 printf("%c",205);
             }
             if(row+1-i<=j && i==row)
             {
                 gotoxy(i,j);
                 printf("%c",205);
             }
             if(j<i && j==0)
             {
                 gotoxy(i,j);
                 printf("%c",186);
             }

             if(col+1-j<=i && j==col)
             {
                 gotoxy(i,j);
                 printf("%c",186);
             }
             if(i==0 && j==col)
             {
                 gotoxy(i,j);
                 printf("%c",187);
             }
             if(i==row && j==col)
             {
                 gotoxy(i,j);
                 printf("%c",188);
             }
             if(i==0 && j==0)
             {
                 gotoxy(i,j);
                 printf("%c",201);
             }
             if(i==row && j==0)
             {
                 gotoxy(i,j);
                 printf("%c",200);//inner boundary ends
             }


             if(i<j && i==5 && j>10 && j<col-10) //////inner most  boundary starts
             {
                 gotoxy(i,j);
                 printf("*");
             }
             if(row-5+1-i<=j && i==row-5  &&  j>10 && j<col-10)
             {
                 gotoxy(i,j);
                 printf("*");
             }
             if(j<i && j==10 && i>=5 && i<row-5)
             {
                 gotoxy(i,j);
                 printf("!");
             }

             if(col-10+1-j<=i && j==col-10 && i>=5 && i<row-10)
             {
                 gotoxy(i,j);
                 printf("!");
             }                 //inner boundary ends

             if(j==20 && i>=5 && i<row-10)   // inner line starts
             {
                 gotoxy(i,j);
                 printf("!");
             }
             if(j==40 && i>=10 && i<row-5)
             {
                 gotoxy(i,j);
                 printf("!");
             }
             if( j==60 && i>=5 && i<row-10 )
             {
                 gotoxy(i,j);
                 printf("!");
             }
            if( j==80 && i>=10 && i<row-5)
             {
                 gotoxy(i,j);
                 printf("!");
             }// inner most lines end
         }
    }
}


void srand(unsigned int);


void right_ghost()
{
    srand(time(0));
if(start==0 && start1==0)
{
    x=rand()%3;
}

if(x==1 && start==0)
{
    gotoxy(2,col-2-i);
    printf("%c",1);
    gotoxy(2,col-1-i);
    printf("     ");
    i=i+2;
      start=0;
      start1=1;
}

if(x==2 && start1==0)
{

    gotoxy(2+j,col-2);
    printf("%c",1);
    gotoxy(2-1+j,col-2);
    printf(" ");
    ++j;

      start=1;
      start1=0;
}

if(i>96 || j>20)
{

    i=0;
    j=0;
    start=0;
    start1=0;

}
}

void srand(unsigned int );

void left_ghost()
{
    srand(time(NULL));
if(start2==0 && start3==0)
{
    y=1+rand()%4;
}

if(y==2 && start2==0)
{
    gotoxy(row-1,2+k);
    printf("%c",1);
    gotoxy(row-1,2+k-4);
    printf("    ");
    k=k+2;
      start2=0;
      start3=1;
}

if(y==3 && start3==0)
{

    gotoxy(row-1-l,2);
    printf("%c",1);
    gotoxy(row-1-l+1,2);
    printf(" ");
    ++l;

      start2=1;
      start3=0;
}

if(k>95 || l>20)
{

    k=0;
    l=0;
    start2=0;
    start3=0;

}
}



void srand(unsigned int);

void line_ghost()
{
    srand(time(0));
if(start4==0&& start5==0&&start6==0&&start7==0)
{
    z=1+rand()%6;
}

if(z==2 && start4==0)
{
    gotoxy(6+line1,13);
    printf("%c",1);
    gotoxy(6+line1-1,13);
    printf("   ");
    line1=line1+1;
      start4=0;
start5=1;
start6=1;
start7=1;

}

if(z==3 && start5==0)
{

    gotoxy(6+line2,33);
    printf("%c",1);
    gotoxy(6+line2-1,33);
    printf("  ");
    line2++;

           start4=1;
start5=0;
start6=1;
start7=1;
}

if(z==4 && start6==0)
{

    gotoxy(6+line3,63);
    printf("%c",1);
    gotoxy(6+line3-1,63);
    printf("   ");
    line3++;

           start4=1;
start5=1;
start6=0;
start7=1;
}

if(z==5 && start7==0)
{

    gotoxy(6+line4,83);
    printf("%c",1);
    gotoxy(6+line4-1,83);
    printf("   ");
    line4++;

           start4=1;
start5=1;
start6=1;
start7=0;
}

if((line1>13)|| (line2>13)||(line3>13)||(line4>13))
{

line1=0;
line2=0;
line3=0;
line4=0;


start4=0;
start5=0;
start6=0;
start7=0;
}


}

char next=0;
void clrscreen()
{
gotoxy(4,2);
printf("        ");
gotoxy(2,2);
printf("          ");
gotoxy(row-3,col-2);
printf(" ");
gotoxy(row-1,col-2);
printf(" ");

gotoxy(19,13);
printf("     ");
gotoxy(19,33);
printf("    ");

gotoxy(19,63);
printf("     ");
gotoxy(19,83);
printf("     ");


}
int characterr()
{
    if(_kbhit())
        return _getch();

    else
        return -1;
}


game_right=0;
game_left=0;
game_up=0;
game_down=0;
char dir='d';
char var=0;


void my_body()
{
    var=characterr();


    if(var=='d' || var=='a' || var=='w' || var=='s')
    {
        dir=var;

    }


    if(dir=='w')
    {

        if(bound_conditions_y==1)
        {

            y_alt=y_alt-2;
            x_alt=x_alt+0;


        }
        else
        {

            y_alt=y_alt+0;
            x_alt=x_alt+0;


        }

    }
    else  if(dir=='s' )
    {

        if(bound_conditions_y==1)
        {

            y_alt=y_alt+2;
            x_alt=x_alt+0;
        }
        else
        {

            y_alt=y_alt+0;
            x_alt=x_alt+0;
        }

    }

    else if(dir=='a' )
    {

        if(bound_conditions_x==1)
        {

            y_alt=y_alt+0;
            x_alt=x_alt-2;


        }
        else
        {

            y_alt=y_alt+0;
            x_alt=x_alt+0;

        }

    }
    else if(dir=='d' )
    {
        if(bound_conditions_x==1)
        {


            y_alt=y_alt+0;
            x_alt=x_alt+2;




        }
        else
        {

            y_alt=y_alt+0;
            x_alt=x_alt+0;
        }


    }
    else
    {
        gotoxy(1,1);
        printf("press corect keys");



    }


}

int s=0;
int s1=0,s2=0,s3=0;
int starting=0;

void my_body_update()
{

    gotoxy(y_alt+y_int,x_alt+x_int);
    printf("%c",219);

  if(dir=='w')
  {
      s=0;
  }
  if(dir=='s')
  {
      s1=0;
  }
  if(dir=='a')
  {

        s3=0;
  }
  if (dir=='d')
  {
      s2=0;
  }

    if(dir=='w' || s==0)
    {
             gotoxy(y_alt+y_int +2 ,  x_alt+x_int);
              printf("  ");
        s1=1;
        s2=1;
        s3=1;
        s=0;
    }

    if(dir=='s' || s1==0)
    {
             gotoxy(y_alt+y_int -2 ,  x_alt+x_int);
              printf("  ");
        s1=0;
        s=1;
        s2=1;
        s3=1;

    }

    if(dir=='a' || s3==0)
    {
             gotoxy(y_alt+y_int ,  x_alt+x_int+2);
              printf("  ");
        s2=1;
        s3=0;
        s=1;
        s1=1;

    }

    if(dir=='d' || s2==0)
    {
             gotoxy(y_alt+y_int  ,  x_alt+x_int-2);
              printf("  ");
        s2=0;
        s3=1;
        s1=1;
        s=1;

    }
}

int life=3;
int game_over=0;
void game_end()
{
    if(bound_conditions_x==0 || bound_conditions_y==0)
    {

       game_over=2;
    }
     if((x_alt+x_int==col-2-i && y_alt + y_int==2) || (x_alt+x_int==col-2 && y_alt + y_int==2+j)||(x_alt+x_int==2+k && y_alt + y_int==row-1)||(x_alt+x_int==2&& y_alt + y_int==row-1-l))
    {

        life--;

    }
    if((x_alt+x_int==13&&y_alt+y_int==6+line1)||(x_alt+x_int==33&&y_alt+y_int==6+line2)||(x_alt+x_int==63&&y_alt+y_int==6+line3)||(x_alt+x_int==83&&y_alt+y_int==6+line4))
    {
        life--;
    }
    if(life==0)
    {
        game_over=2;
    }


}

void game_start()
{
    char new=0;
    if(starting==0)
    {
         gotoxy(15,50);

        printf("WELCOME ");

  gotoxy(18,50);

       printf("LETS PLAY PACMAN");

       gotoxy(20,50);

       printf("press x to start");

      if(_kbhit)
        {
            new=_getch();

        }

        if(new=='x')
        {int lj;
        gotoxy(1,1);
            for(lj=0;lj<=1000;lj++)
            {
                printf("        ");
            }
            gotoxy(1,1);
          printf("=====GAME INSRUCTIONS======");
            printf("\n*\tYou have four keys to play with w,s,d,a\n*\tYou have three life after that game over\n*\tColiding with corner border end game\n*\tCollidng with ghost reduces your life");
          printf("\n \n \tTo continue press x");
          char zi=0;
          int js;
          /*unsigned long long  int js;
          for(js=0;js<=1000000;js++)
          {

          }*/
      if(_kbhit)
        {
            zi=_getch();

        }
        if(zi==x)
        {
            main();
        }
        }

        starting++;
    }



}




void main()
{
  game_start();

double time_spent = 0.0;

clock_t begin = clock();


 while(game_over==0)
 {

  if(starting==1)
  {
      int jss;
      gotoxy(1,1);
      for(jss=0;jss<=1000;jss++)
       {
          printf("        ");
      }
     starting++;
  }

  game_end();
    print();
    right_ghost();
    left_ghost();
    line_ghost();
    clrscreen();
    my_body();
  my_body_update();
  gotoxy(30,20);
printf("=========LIFE=%d===========",life);


 if(game_over!=0)
 {
     int jsss;
     gotoxy(1,1);
     for(jsss=0;jsss<=1000;jsss++)
     {
         printf("     ");
     }
     gotoxy(15,50);
     printf("GAME OVER ");

 }

if(game_over>0)
{
clock_t end = clock();

time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
}

 if(game_over!=0)
 {

     gotoxy(16,50);
     printf("YOU SURVIVED %f SECONDS BETTER LUCK NEXT TIME",time_spent);


 }

 }
  getch();

}
