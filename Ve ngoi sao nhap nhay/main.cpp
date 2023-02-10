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

int main(){
    initwindow(840,840);
    int xc = 0, yc = 24, r = 20;
    int d = 270;
    int j = 0;
    int i = 0;
    int dem = 0;
  	while(true)
  	{
  		
  		if(j == 101){
  			j = 1;
  			xc = 0; 
			yc = 24; 
			r = 20;
		}
  
	    for(j = 1; j<=100;j++){
			if(j % 10 == 1 && j != 1){
			   	yc += 70;
				xc = 0;	
			}
			xc += 70;
		
	        for(i = 0; i<=5;i++){
	        
	            int x = xc + (int)(r * cos(d2r(d)));
	            int y = yc + (int)(r * sin(d2r(d)));
//	            cout<<"x: "<<x;
//	            cout<<"y: "<<y;
//	            cout<<endl;
	            if (i == 0)
	                moveto(x,y);
	//	            int j = 0;
	            else
	                lineto(x,y);
	            d += 144;
	            
	            if(dem % 2 == 0 ){
	            	setcolor(i+1);
				}
				else{
					setcolor(i+3);
				}
//	             delay(1000);
	        }
	     		    
//	        delay(10);
		}
	
		dem++;
	
	}

    getch();
    return 0;
}





