#include<stdio.h>
char a[10][10],i,j,k=1,g=1,c[10][10];
void matrix();
void intro();
void book_seat();
void book_multiple();
void display_matrix();
void matrix()
{//display seats
for(i=1;i<10;i++)
for(j=1;j<=4;j++,k++)
{
a[i][j]=k;
c[i][j]=k;
}
for(i=1;i<10;i++)
{
printf("\n\t\t\t\t\t\t");
for(j=1;j<=4;j++)
{
if(a[i][j]%2==0)
printf("%d\t",a[i][j]);
else
printf("%d ",a[i][j]);
}
}
}
void book_seat()
{ //book seats
int seat;
label1:
printf("\nenter the seat no. to booked");
scanf("%d",&seat);
for(i=1;i<10;i++)
for(j=1;j<=4;j++)
{
if(c[i][j]==seat)
{ if(a[i][j]=='B')
{printf("\nseat already booked"); 
goto label1;

}
else
a[i][j]='B';
}
}
}
void display_matrix()
{//display the matrix
for(i=1;i<10;i++)
{ printf("\n\t\t\t\t\t\t");
for(j=1;j<=4;j++,k++)
{ if(k%2==0)
{
if(a[i][j]=='B')
printf("%c\t",a[i][j]);
else
printf("%d\t",a[i][j]);}
else
{
if(a[i][j]=='B')
printf("%c ",a[i][j]);
else
printf("%d ",a[i][j]);}
}

}}
void book_multiple()
{//book multiple seats
int n,z;
printf("\nenter the number of seats to be booked\n");
scanf("%d",&n);
for(z=0;z<n;z++)
{book_seat();}
}
void intro()
{ int choice;char ans;
system("cls");
//x1:
printf("\n\t\t WELCOME TO INDIAN RAILWAY.COM\n");
printf("\n1:instructions\n2:book the tickets");
scanf("%d",&choice); 
switch(choice)
{
case 1:printf("\n1:all the seats at extreme ends are window seats\n");
printf("\n2:no smoking in the bus\n");
printf("\n2:passengers are responsible for their belongings \n");
printf("\n2:press y to go back\n");
scanf("%c*%c",&ans);
// if(ans=='y')
// goto x1;
break;
case 2:break;
}
}
main()
{ //int a[10][10],i,j,k=1,g=1;
intro();
matrix();
book_multiple();
// book_seat();
display_matrix();
// book_seat();
FILE * ptr;
ptr=fopen("ab.txt","+w");
//ptr.display_matrix(); //display_matrix();

}
