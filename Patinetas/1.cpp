// -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;

const int NoPatinetas = 5;
int LongitudX = 600;
int LongitudY = 500;
int X,Y;
int Patinetas[NoPatinetas][2];
int XPartida,XDestino,YPartida,YDestino;

void waitForLeftMouseClick(){
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}

void DibujarMapa(){
	setfillstyle(SOLID_FILL,15);
	bar(0,30,600,34);
	bar(0,120,600,124);
	bar(0,180,600,184);
	bar(0,230,600,234);
	bar(570,0,580,500);
	bar(0,470,600,480);
	bar(30,0,34,500);
	bar(130,0,134,500);
	bar(80,0,84,255);
	bar(180,0,184,500);
	bar(230,0,234,500);
	bar(280,0,284,500);
	bar(380,0,384,500);
	bar(450,0,454,325);
	bar(440,325,444,500);
	bar(510,0,514,325);
	bar(500,325,504,500);
	bar(330,30,334,230);
	bar(0,410,600,414);
	bar(80,255,100,259);
	bar(100,255,104,500);
	bar(65,410,69,500);
	bar(30,275,60,279);
	bar(30,375,60,379);
	bar(60,275,62,379);
	bar(60,325,600,329);
	bar(180,340,230,344);
	bar(330,325,334,500);
	bar(305,410,309,500);
	bar(330,440,380,444);
	bar(380,455,440,459);
	bar(500,455,535,459);
	bar(535,410,539,500);
	bar(535,440,580,444);
	bar(230,370,600,374);
	bar(230,270,600,274);
	bar(0,440,180,444);
}

void GenerarPatinetas(){
	for(int Filas = 0; Filas<NoPatinetas; Filas++){
		for(int Columnas = 0; Columnas<2; Columnas++){
			Patinetas[Filas][Columnas]=0;
		}
	}
	for(int N = 0; N<NoPatinetas; N++){
		int ColorPatineta = 0;
		int XPatineta = 0;
		int YPatineta = 0;
		while(true){
			delay(1);
			XPatineta = 8 + rand()%((LongitudX-10)+1-8);
			delay(1);
			YPatineta = 8 + rand()%((LongitudY-10)+1-8);
			if(getpixel(XPatineta,YPatineta)==15){
				Patinetas[N][0]=XPatineta;
				Patinetas[N][1]=YPatineta;
				break;
			}
		}
		while(true){
			ColorPatineta = 1+rand()%15;
			if(ColorPatineta<=6&&ColorPatineta<=9){
				break;
			}
		}
		setcolor(ColorPatineta);
		setfillstyle(SOLID_FILL,ColorPatineta);
		circle(XPatineta,YPatineta,7);
		floodfill(XPatineta,YPatineta,ColorPatineta);
	}
}

bool TomarXY(){
	while(ismouseclick(WM_LBUTTONDOWN)){
		getmouseclick(WM_LBUTTONDOWN,X,Y);
		return false;
	}
	return true;
}

void PuntosPartidaDestino(){
	bool Control = true;
	while(Control){
    	Control = TomarXY();
	}
	int color = 4;
	setcolor(color);
	setfillstyle(SOLID_FILL,color);
	circle(X,Y,5);
	floodfill(X,Y,color);
}

void BuscarPatinetaCerca(){
	int Cercania = 721;
	for(int Filas = 0; Filas<NoPatinetas; Filas++){
		int Distancia = sqrt(pow(XPartida-Patinetas[Filas][0],2)+pow(YPartida-Patinetas[Filas][1],2));
		if(Distancia<Cercania){
			Cercania = Distancia;
			X = Patinetas[Filas][0];
			Y = Patinetas[Filas][1];
		}
	}
}

int main(int argc, char *argv[])
{
	srand(time(NULL));
    initwindow(LongitudX,LongitudY,"Mapa");
    setbkcolor(8);
    cleardevice();
    
    DibujarMapa();
    GenerarPatinetas();
    
//    PuntosPartidaDestino();
//    XPartida = X;
//    YPartida = Y;
//    PuntosPartidaDestino();
//    XDestino = X;
//    YDestino = Y;
    
    BuscarPatinetaCerca();
	
    for(int n = 0; n<1000; n++){
		PuntosPartidaDestino();
		cout<<"X= "<<X<<" Y= "<<Y<<endl;
	}
	
//X= 0 Y= 31
//X= 0 Y= 120
//X= 0 Y= 179
//X= 0 Y= 229
//X= 0 Y= 409
//X= 0 Y= 440
//X= 1 Y= 475

//X= 30 Y= 0
//X= 31 Y= 30
//X= 31 Y= 120
//X= 32 Y= 182
//X= 33 Y= 230
//X= 33 Y= 275
//X= 32 Y= 375
//X= 31 Y= 410
//X= 32 Y= 440
//X= 32 Y= 474
//X= 32 Y= 497

//X= 60 Y= 277
//X= 61 Y= 325
//X= 61 Y= 374
//X= 64 Y= 410
//X= 67 Y= 441
//X= 66 Y= 474
//X= 65 Y= 498

//X= 80 Y= 0
//X= 81 Y= 28
//X= 80 Y= 120
//X= 81 Y= 180
//X= 81 Y= 255

//X= 99 Y= 255
//X= 100 Y= 324
//X= 101 Y= 410
//X= 101 Y= 441
//X= 102 Y= 475
//X= 101 Y= 498

//X= 130 Y= 1
//X= 130 Y= 28
//X= 132 Y= 118
//X= 131 Y= 180
//X= 131 Y= 229
//X= 131 Y= 325
//X= 130 Y= 410
//X= 131 Y= 441
//X= 131 Y= 476
//X= 131 Y= 498

//X= 179 Y= 0
//X= 182 Y= 32
//X= 180 Y= 120
//X= 181 Y= 181
//X= 180 Y= 231
//X= 182 Y= 324
//X= 182 Y= 342
//X= 182 Y= 409
//X= 181 Y= 439
//X= 181 Y= 474
//X= 180 Y= 499

//X= 230 Y= 0
//X= 232 Y= 29
//X= 231 Y= 120
//X= 231 Y= 179
//X= 231 Y= 230
//X= 232 Y= 271
//X= 231 Y= 323
//X= 231 Y= 341
//X= 231 Y= 370
//X= 231 Y= 410
//X= 232 Y= 470
//X= 230 Y= 497

//X= 279 Y= 0
//X= 281 Y= 28
//X= 282 Y= 120
//X= 282 Y= 180
//X= 282 Y= 229
//X= 281 Y= 269
//X= 282 Y= 325
//X= 281 Y= 370
//X= 281 Y= 411
//X= 282 Y= 474
//X= 282 Y= 496

//X= 330 Y= 31
//X= 332 Y= 121
//X= 332 Y= 181
//X= 332 Y= 231
//X= 331 Y= 327
//X= 331 Y= 370
//X= 331 Y= 409
//X= 332 Y= 440
//X= 331 Y= 471
//X= 332 Y= 497

//X= 380 Y= 0
//X= 381 Y= 32
//X= 381 Y= 120
//X= 382 Y= 181
//X= 382 Y= 231
//X= 382 Y= 270
//X= 383 Y= 326
//X= 381 Y= 370
//X= 382 Y= 411
//X= 381 Y= 440
//X= 381 Y= 457
//X= 381 Y= 474
//X= 381 Y= 497

//X= 439 Y= 326
//X= 440 Y= 370
//X= 440 Y= 411
//X= 439 Y= 454
//X= 440 Y= 473
//X= 440 Y= 499

//X= 450 Y= 0
//X= 451 Y= 30
//X= 449 Y= 121
//X= 451 Y= 182
//X= 451 Y= 231
//X= 450 Y= 269
//X= 451 Y= 324

//X= 498 Y= 325
//X= 501 Y= 369
//X= 501 Y= 409
//X= 502 Y= 455
//X= 502 Y= 476
//X= 501 Y= 499

//X= 511 Y= 0
//X= 511 Y= 31
//X= 510 Y= 120
//X= 511 Y= 181
//X= 510 Y= 231
//X= 511 Y= 271
//X= 512 Y= 327

//X= 536 Y= 411
//X= 540 Y= 439
//X= 535 Y= 455
//X= 535 Y= 473
//X= 535 Y= 498

//X= 574 Y= 1
//X= 575 Y= 32
//X= 575 Y= 120
//X= 575 Y= 182
//X= 575 Y= 229
//X= 574 Y= 271
//X= 574 Y= 322
//X= 575 Y= 370
//X= 575 Y= 410
//X= 574 Y= 438
//X= 575 Y= 473
//X= 574 Y= 497

//X= 596 Y= 31
//X= 599 Y= 118
//X= 599 Y= 178
//X= 598 Y= 231
//X= 599 Y= 268
//X= 599 Y= 326
//X= 599 Y= 369
//X= 598 Y= 410
//X= 598 Y= 476


//    for(int i=1; i<=120; i++)
//    {
//
//        setcolor(9);
//        circle(50,200-i,5);
//        delay(5);
//
//        if(i!=120)
//        {
//            setcolor(00);							// set text color
//            circle(50,200-i,5);
//
//
//        }
//    }
//    for(int i=1; i<=490; i++)
//    {
//        setcolor(9);							// set text color
//        circle(50+i,80,5);
//        delay(5);
//        if(i!=490)
//        {
//            setcolor(00);							// set text color
//            circle(49+i,80,5);
//
//
//        }
//
//    }
//    for(int i=1; i<=220; i++)
//    {
//        setcolor(9);
//        circle(539,80+i,5);
//        delay(5);
//        if(i!=220)
//        {
//            setcolor(00);							// set text color
//            circle(539,79+i,5);
//
//
//        }
//
//    }
//    for(int i=1; i<=320; i++)
//    {
//        setcolor(9);
//        circle(540-i,300,5);
//        delay(5);
//        if(i!=320)
//        {
//            setcolor(00);							// set text color
//            circle(540-i,300,5);
//
//        }
//
//    }

    waitForLeftMouseClick(); // use one or the other of these--not both

    closegraph();        //close graphics window
    return 0;
}
