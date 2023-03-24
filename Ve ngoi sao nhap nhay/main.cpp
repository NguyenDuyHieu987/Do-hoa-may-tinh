#include <graphics.h>
//#include <conio.h>
#include <math.h>
#define PI 3.14159265359
#include <iostream>
using namespace std;

float d2r (int d){
    //convert degree to radian
    return d*PI/180.0;
}

int getRandomColor(){
	return rand() % 15 + 1;
}

int main(){
    initwindow(840,840);
    int xc = 0, yc = 24, r = 20;
    int d = 270;
    int star = 1;
    
  	while(true)
  	{
  		if(star == 101){
//  			cleardevice();
  			star = 1;
  			xc = 0; 
			yc = 24;
			d = 270; 
		}
  
	    for(star = 1; star <= 100; star++){
//	    	Xuong dong
			if(star % 10 == 1 && star != 1){
			   	yc += 70;
				xc = 0;	
			}
			xc += 70;
			
		 	int color = getRandomColor();
		 	
	        for(int i = 0; i <= 5; i++){
	        
	            int x = xc + (int)(r * cos(d2r(d)));
	            int y = yc + (int)(r * sin(d2r(d)));

	            if (i == 0)
            	{    
					moveto(x,y);
//   					lineto(x,y);
	            }
	            else
	                lineto(x,y);
//					line(x1,y1,x,y);
				     
	            d += 144;
	            
				setcolor(color);
				
		
//	            delay(1000);
	        }

//	        delay(100);
		}
			
//		dem++;

	}
	
    getch();
    return 0;
}





