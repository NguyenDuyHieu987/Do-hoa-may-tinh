#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main(){
	initwindow(720,500);
	//a,b,c,d are used for Translation
	int a=200, b=-190;
	int c=200, d=-190;
	//x,y,m,n are used for Scaling.
	float x=0.5, y=0.5;
	float m=0.5, n=0.5;
	for(int i=0;i<=700;i++){
		setcolor(15);
		setfillstyle(SOLID_FILL,15);
		circle(150,35,25);
		floodfill(149,29,15);
		setcolor(WHITE);
		//================================= 3 CLOUDS ===============================//
		//================================= MIDDLE CLOUD ===========================//
		ellipse(200+200-i,30,60,240,10,15);
		ellipse(225+200-i,20,345,165,20,15);
		ellipse(262+200-i,27,340,160,20,15);
		ellipse(268+200-i,42,230,50,20,10);
		ellipse(226+200-i,46,163,340,31,15);
		ellipse(300+200-i,21,20,182,21,19);
		ellipse(325+200-i,31,290,100,21,15);
		ellipse(299+200-i,45,228,20,33,11);
		//================================= LEFT CLOUD =============================//
		ellipse(40+200-i,30,60,240,10,15);
		ellipse(65+200-i,20,345,165,20,15);
		ellipse(105+200-i,27,340,160,20,15);
		ellipse(109+200-i,42,230,50,20,10);
		ellipse(66+200-i,46,163,340,31,17);
		//================================= RIGHT CLOUD ============================//
		ellipse(450+200-i,30,60,240,10,15);
		ellipse(475+200-i,20,345,165,20,15);
		ellipse(512+200-i,27,340,160,20,15);
		ellipse(518+200-i,42,230,50,20,10);
		ellipse(476+200-i,46,163,340,31,15);
		//================================= 3 TREES   ==============================//
		//================================= 1ST TREE  ==============================//
		//TREE 1 CROWN
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(240-i,420,275-i,420);
		line(240-i,420,245-i,405);
		line(275-i,420,270-i,405);
		line(245-i,405,240-i,405);
		line(270-i,405,275-i,405);
		line(240-i,405,245-i,390);
		line(275-i,405,270-i,390);
		line(245-i,390,240-i,390);
		line(270-i,390,275-i,390);
		line(240-i,390,258-i,370);
		line(275-i,390,257-i,370);
		floodfill(259-i,375,WHITE);
		//TREE 1 TRUNK
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(250-i,460,250-i,420);
		line(265-i,460,265-i,420);
		line(250-i,460,265-i,460);
		line(250-i,420,265-i,420);
		floodfill(255-i,441,WHITE);
		//================================= 2ND TREE ===============================//
		/* THIS TREE IS TRANSLATION (TRANSFORMATION) OF 1ST TREE. */
		//TREE 2 CROWN
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(240+c-i,420+d,275+c-i,420+d);
		line(240+c-i,420+d,245+c-i,405+d);
		line(275+c-i,420+d,270+c-i,405+d);
		line(245+c-i,405+d,240+c-i,405+d);
		line(270+c-i,405+d,275+c-i,405+d);
		line(240+c-i,405+d,245+c-i,390+d);
		line(275+c-i,405+d,270+c-i,390+d);
		line(245+c-i,390+d,240+c-i,390+d);
		line(270+c-i,390+d,275+c-i,390+d);
		line(240+c-i,390+d,258+c-i,370+d);
		line(275+c-i,390+d,257+c-i,370+d);
		floodfill(259+c-i,375+d,WHITE);
		//TREE 2 TRUNK
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(250+c-i,460+d,250+c-i,420+d);
		line(265+c-i,460+d,265+c-i,420+d);
		line(250+c-i,460+d,265+c-i,460+d);
		line(250+c-i,420+d,265+c-i,420+d);
		floodfill(255+c-i,441+d,WHITE);
		//================================= 3RD TREE ===============================//
		/* THIS TREE IS SCALING (TRANSFORMATION) OF 1ST TREE.*/
		//TREE 3 CROWN
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(240*m-i,420*n,275*m-i,420*n);
		line(240*m-i,420*n,245*m-i,405*n);
		line(275*m-i,420*n,270*m-i,405*n);
		line(245*m-i,405*n,240*m-i,405*n);
		line(270*m-i,405*n,275*m-i,405*n);
		line(240*m-i,405*n,245*m-i,390*n);
		line(275*m-i,405*n,270*m-i,390*n);
		line(245*m-i,390*n,240*m-i,390*n);
		line(270*m-i,390*n,275*m-i,390*n);
		line(240*m-i,390*n,258*m-i,370*n);
		line(275*m-i,390*n,257*m-i,370*n);
		floodfill(259*m-i,375*n,WHITE);
		//TREE 3 TRUNK
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(250*m-i,460*n,250*m-i,420*n);
		line(265*m-i,460*n,265*m-i,420*n);
		line(250*m-i,460*n,265*m-i,460*n);
		line(250*m-i,420*n,265*m-i,420*n);
		floodfill(255*m-i,441*n,WHITE);
		//================================= 3 HOUSES ===============================//
		//================================= 1ST HOUSE ==============================//
		//TRIANGLE OF HOUSE 1
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(88-i,400,163-i,400);
		line(100-i,370,88-i,400);
		line(100-i,370,112-i,400);
		line(100-i,370,150-i,370);
		line(150-i,370,163-i,400);
		floodfill(100-i,375,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(88-i,400,163-i,400);
		line(100-i,370,112-i,400);
		line(100-i,370,112-i,400);
		line(100-i,370,150-i,370);
		line(150-i,370,163-i,400);
		floodfill(105-i,375,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,5);
		line(112-i,400,112-i,440);
		line(88-i,440,112-i,440);
		line(88-i,400,88-i,440);
		line(112-i,440,163-i,440);
		floodfill(90-i,402,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,5);
		line(163-i,400,163-i,440);
		line(112-i,440,163-i,440);
		line(112-i,400,112-i,440);
		line(88-i,400,163-i,400);
		floodfill(115-i,405,WHITE);
		//1ST HOUSE DOOR
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,RED);
		line(94-i,440,94-i,420);
		line(106-i,440,106-i,420);
		line(94-i,420,106-i,420);
		floodfill(97-i,435,WHITE);
		//================================= 2ND HOUSE ==============================//
		/* THIS HOUSE IS TRANSLATION (TRANSFORMATION) OF 1ST TREE. */
		//TRIANGLE OF HOUSE 2
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,YELLOW);
		line(88+a-i,400+b,163+a-i,400+b);
		line(100+a-i,370+b,88+a-i,400+b);
		line(100+a-i,370+b,112+a-i,400+b);
		line(100+a-i,370+b,150+a-i,370+b);
		line(150+a-i,370+b,163+a-i,400+b);
		floodfill(100+a-i,375+b,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,YELLOW);
		line(88+a-i,400+b,163+a-i,400+b);
		line(100+a-i,370+b,112+a-i,400+b);
		line(100+a-i,370+b,112+a-i,400+b);
		line(100+a-i,370+b,150+a-i,370+b);
		line(150+a-i,370+b,163+a-i,400+b);
		floodfill(105+a-i,375+b,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,1);
		line(112+a-i,400+b,112+a-i,440+b);
		line(88+a-i,440+b,112+a-i,440+b);
		line(88+a-i,400+b,88+a-i,440+b);
		line(112+a-i,440+b,163+a-i,440+b);
		floodfill(90+a-i,402+b,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,1);
		line(163+a-i,400+b,163+a-i,440+b);
		line(112+a-i,440+b,163+a-i,440+b);
		line(112+a-i,400+b,112+a-i,440+b);
		line(88+a-i,400+b,163+a-i,400+b);
		floodfill(115+a-i,405+b,WHITE);
		//2ND HOUSE DOOR
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(94+a-i,440+b,94+a-i,420+b);
		line(106+a-i,440+b,106+a-i,420+b);
		line(94+a-i,420+b,106+a-i,420+b);
		floodfill(97+a-i,435+b,WHITE);
		//================================= 3RD HOUSE ==============================//
		/* THIS HOUSE IS SCALING (TRANSFORMATION) OF 1ST TREE. */
		//TRIANGLE OF HOUSE 3
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,LIGHTBLUE);
		line(88*x-i,400*y,163*x-i,400*y);
		line(100*x-i,370*y,88*x-i,400*y);
		line(100*x-i,370*y,112*x-i,400*y);
		line(100*x-i,370*y,150*x-i,370*y);
		line(150*x-i,370*y,163*x-i,400*y);
		floodfill(100*x-i,375*y,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,LIGHTBLUE);
		line(88*x-i,400*y,163*x-i,400*y);
		line(100*x-i,370*y,112*x-i,400*y);
		line(100*x-i,370*y,112*x-i,400*y);
		line(100*x-i,370*y,150*x-i,370*y);
		line(150*x-i,370*y,163*x-i,400*y);
		floodfill(105*x-i,375*y,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,4);
		line(112*x-i,400*y,112*x-i,440*y);
		line(88*x-i,440*y,112*x-i,440*y);
		line(88*x-i,400*y,88*x-i,440*y);
		line(112*x-i,440*y,163*x-i,440*y);
		floodfill(90*x-i,402*y,WHITE);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,4);
		line(163*x-i,400*y,163*x-i,440*y);
		line(112*x-i,440*y,163*x-i,440*y);
		line(112*x-i,400*y,112*x-i,440*y);
		line(88*x-i,400*y,163*x-i,400*y);
		floodfill(115*x-i,405*y,WHITE);
		//3RD HOUSE DOOR
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,YELLOW);
		line(94*x-i,440*y,94*x-i,420*y);
		line(106*x-i,440*y,106*x-i,420*y);
		line(94*x-i,420*y,106*x-i,420*y);
		floodfill(97*x-i,435*y,WHITE);
		//================================= MOUNTAIN ===============================//
		//1ST TRIANGLE
		setcolor(WHITE);
		//BOUNDARY COLOR OF MOUNTAIN
		setfillstyle(SOLID_FILL,GREEN);
		//ACTUAL COLOR OF MOUNTAIN
		line(0,150,100,75);
		line(100,75,200,150);
		//2ND TRIANGLE
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(175,131,275,75);
		line(275,75,375,150);
		//3RD TRIANGLE
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(350,131,450,75);
		line(450,75,550,150);
		//4TH TRIANGLE
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(525,131,600,75);
		line(600,75,710,150);
		line(0,150,710,150);
		floodfill(100,136,WHITE);
		//BOTTOM LINE OF MOUNTAIN
		floodfill(275,136,WHITE);
		//2ND TRIANGLE
		floodfill(450,136,WHITE);
		//3RD TRIANGLE
		floodfill(600,136,WHITE);
		//4TH TRIANGLE
		//================================= CAR ====================================//
		//ROAD
		setcolor(WHITE);
		line(0,325,700,325);
		line(0,275,700,275);
		//CAR BODY
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,4);
		line(0+i,300,13+i,298);
		line(13+i,298,30+i,280);
		line(30+i,280,80+i,280);
		line(80+i,280,97+i,298);
		line(97+i,298,120+i,300);
		line(0+i,300,0+i,315);
		line(0+i,315,25+i,315);
		arc(35+i,315,0,180,9);
		line(45+i,315,67+i,315);
		arc(77+i,315,0,180,9);
		line(85+i,315,120+i,315);
		line(120+i,300,120+i,315);
		//floodfill(1+i,301,WHITE);
		//FIRST WINDOW
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BLACK);
		line(32+i,285,50+i,285);
		line(50+i,285,50+i,295);
		line(50+i,295,23+i,295);
		line(32+i,285,23+i,295);
		floodfill(33+i,286,WHITE);
		//SECOND WINDOW
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BLACK);
		line(60+i,285,78+i,285);
		line(60+i,285,60+i,295);
		line(60+i,295,85+i,295);
		line(78+i,285,85+i,295);
		floodfill(61+i,286,WHITE);
		//WHEELS
		//LEFT WHEELS
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		circle(35+i,315,6);
		floodfill(36+i,314,WHITE);
		//RIGHT WHEELS
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		circle(77+i,315,6);
		floodfill(76+i,314,WHITE);
		delay(40);
		cleardevice();
	}
	getch();
	closegraph();
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
