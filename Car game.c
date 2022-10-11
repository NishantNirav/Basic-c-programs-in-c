/*I want to mention that come functions may not work in some modern compilers if you want to use the requested to find the code of function, define it then use it */

#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>

void main(){
char u[25],m[25],b[25],w[25];                // u-> upper part , m->middle , b->bottom ,w->wheel
int x,c;                                     // x->collumn(x coordinate) ,  j-> controll
clrscr();

strcpy(u," ______________________");
strcpy(m,"/                      \");                          
strcpy(b,"________________________");
strcpy(w,"    @              @     ");

clrscr();

x=1;
    while(1)
        {
        printf("How to play\n");
        printf(_____________________\n\n");
        printf("press 8 to move Forward\n");
        printf("press 2 to move Backward\n");
        printf("press 0 to exi\nt");

        gotoxy(x,10);
        printf("######################################################################################################################################################");

        // car

        gotoxy(x,12);
        printf("%S",u);
        gotoxy(x,13);
        printf("%S",m);
        gotoxy(x,14);
        printf("%S",l);
        gotoxy(x,15);
        printf("%S",w);

        gotoxy(x,16);
        printf("######################################################################################################################################################\n");

        scanf("%d",&c); //taking controll input

        if(c==8)
          x++;
        else if(x==2)
          x--;
        else if(x==0)
          exit(0);
       else
       {
       gotoxy(40,8);
       printf("INVALID INPUT !!");
       }
       fflush(stdout);
      }
}
    
      
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
