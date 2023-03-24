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
    initwindow(640,480);
    int xc = 250, yc = 250, r = 200;
    int d = 270;
//    while(1){
        for(int i = 0; i<=5;i++){
        
            int x = xc + (int)(r * cos(d2r(d)));
            int y = yc + (int)(r * sin(d2r(d)));
            cout<<"x: "<<x;
         	cout<<", y: "<<y;
         	cout<<endl;
            if (i == 0)
                moveto(x,y);
// 				 lineto(x,y);
            else
                lineto(x,y);
                
            d+=144;
            
            setcolor(i+1);
            delay(1000);
        }
     
//    }
    getch();
    return 0;
}
