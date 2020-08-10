
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#define M 50                //column
#define N 20                //row

int field[N][M];    // field of play
int s=0;x,y,frog=0,k=0,a=N/2,b=M/2,add=0,u=1,var,x_swap=0,y_swap=0;              // variables
int add2=0;
void snake_initialization()
{int h,k;

for(h=0;h<=N;h++)
{
    for(k=0;k<=M;k++)
    {


        field[h][k]=0;




    }
}

}
void snake_length()
{

field[a+add][b+add2]=1;
}
void srand(unsigned int);


void snake_food()
{

srand(time(0));

x=1+ rand() % M/3;
y=1+ rand() % N/3;

if(frog==0 && field[x][y]==0)
 {field[x][y]=-2;
    frog=2;

    x_swap=x;
    y_swap=y;


 }

}

void snake_reset_position()
{ HANDLE hout;
  COORD position;

  hout= GetStdHandle(STD_OUTPUT_HANDLE);
  position.X=0;
  position.Y=0;
  SetConsoleCursorPosition(hout , position );
}






charr()
{
    if(_kbhit)
        return _getch();
    else
        return -1;
}

void movement()
{ var=charr();
    var= tolower(var);


     switch(var)
     {

     case 'd':
        {add2=add2+1;
        break;}
    case  'a':
        {

        add2=add2-1;

        break;}
    case 'w':
        {add=add-1;


        break;}
    case 's':
      {add=add+1;


        break;}
    case 'q':
        exit(1);
    default :
        {printf("press corect key");

        break;}


  }}





  void print()
{int i,j;
int st;



  for(i=0;i<=N;i++)
  {
      for(j=0;j<=M;j++)
     {int k=1;
     st=0;

         if(j<i && j==0 && i<N)
         printf("%c",186);
      else if(i<j && i==0 && j<M)
        printf("%c",205);
      else if(21-i<=j && i==20  && j<M)
        printf("%c",205);
      else if(field[i][j]==1)
        printf("%c",176);
      else if(field[i][j+1]==1 && var=='a')
        {printf("%c",178);
        st=1;}
      else if(var=='d' && field[i][j-1]==1)
        {printf("%c",178);
           }
      else if(var=='a' && field[i][j+1]==1)
            {printf("%c",178);
            }

      else if(var=='w' && field[i+1][j]==1)
            {printf("%c",178);
            }
      else if(var=='s' &&  field[i-1][j]==1)
            {printf("%c",178);
            }

      else if(i==j && i==0 && j==0)
      printf("%c",201);
      else if( i==0 && j==50)
        printf("%c",187);
      else if(i==20 && j==0)
       printf("%c",200);
      else if(i==20 && j==50)
         printf("%c",188);
      else if(field[i][j]==0 )
            printf(" ");
      else if( field[i][j]==-2  )
        printf("%c",3);
     else
        printf(" ");


        if(50-j<=i && j==49 && i<N)
      {printf("%c",186);
      }

      if(i<N-1 && i>1 && j<M-1 &&   j>1)
       {
           for(k=1;k<=s;k++)
      {
          if(var=='d' && field[i][j+k]==1)
            printf("%c",176);
          else if(var=='a' && field[i][j-k]==1)
            printf("%c",176);
          else if(var=='w' && field[i-k][j+1]==1)
            printf("%c",176);
          else if(var=='s' && field[i+k][j+1]==1)
            printf("%c",176);}}






     }
  printf("\n");

  }
}

void field_clear()
{
    field[x_swap][y_swap]=-2;

if(x_swap==a+add && y_swap==b+add2)
   {frog=0;
       s++;

      }
}
//screen_clear()
//{
//    int h,k;
//    for(h=0;h<=N ;h++)
//    {
//        for(k=0;k<=M;k++)
//        {
//             printf(" ");
//        }
//    }
//
//
//}


void main()
{

    while(1)
   {snake_initialization();
   snake_food();
     field_clear();
      movement();
    snake_length();
    print();
    printf("***  score=%d   ***\n\n",s);
    printf("***  button=%c ***" ,var);
    snake_reset_position();
getch();}


}
