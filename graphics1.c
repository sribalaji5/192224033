#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	int igraph(&gd,&gm,"c:\\tc\\bgi");
	setbkcolour(green);
	printf("\t\t\t\n\nline");
	line(50,40,190,40);
	printf("\t\t\n\n\n\nrectangle");
	rectangle(125,115,215,165);
	printf("\t\t\t\n\n\n\n\n\narc");
	arc(120,200,180,0,30);
	printf("\t\n\n\n\ncircle");
	circle(120,270,30);
	printf("\t\n\n\n\neclipse");
	eclipse(120,350,0,360,30,20);
	getch();
}
