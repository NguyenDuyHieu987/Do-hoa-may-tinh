#include <graphics.h>
//#include <conio.h>
#include <stdio.h>
int main(){
    initwindow(800,600);
    arccoordstype a;
    int g = 0;
    int c = 1;
    int gtang = 144;
    while (1){ //lap vo tan
        int gt = g;
        for(int i=0;i<5;i++){
            setcolor(BLACK);
            arc(400,300, gt,gt+gtang,200);
            getarccoords(&a);
            setcolor(c);
            line(a.xstart,a.ystart,a.xend,a.yend);
            gt=gt+gtang;
        }
//        g+=5; //tang goc bat dau len 5 sau moi lan ve
        delay(100);
        c++;
        if (c==16)// mau thay doi nhung k vuot qua gioi han
            c=1;
        if (g==360) //goc tang nhung k vuot qua gioi han
            g=0;
        cleardevice();//xoa man hinh
    }
    getch();
}
