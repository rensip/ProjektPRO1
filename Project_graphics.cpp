#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <graphics.h>  //Posebna knjiznica + compiler
using namespace std;

	//	line(200,100,100,100);               //  line(x = odmik od leve stene v pixels,
		//												y = dolzina levo navzdol ,
		//												z = dolzina na desni v pixels,  
		//												w = dolzina navzdol v pixels,)   
	//	rectangle(50,50,xsp,ysp);  // (odmik levo, odmik zgoraj, a stranica, b stranica)

int main()
{
	int z,y;  //kalkulator prva in druga vrednost
	char x;   //switch za glavni menu
	char c;  // switch za calculator
	char l;   //switch za liki
	int n, a;
	const int pi = 3.14159265359;   // pi za raèunanje kroga

	cout<<"Pozdravljeni v mojem programu katerega sem naredil za projektno nalogo pri PRO1."<<endl;
	cout<<"Naloga vsebuje 4 razlicne programe, ki uporabljajo #include <graphics.h>"<<endl;
	cout<<"Have fun!"<<endl;
	cout<<"_______________________________________________________________________________"<<endl;
	cout<<endl;
zacetek:  //ponovitev vselega programa
	
	cout<<"Vnesite znak za izbiro programa:"<<endl;
	cout<<"1 = Risanje nekaterih likov v cm"<<endl;
	cout<<"2 = Standardni kalkulator"<<endl;
	cout<<"3 = Risanje frekvence (grafi)"<<endl;
	cout<<"4 = SAMODEJNI IZRIS PRAVOKOTNIKA (Samo animacija)"<<endl;
	cout<<"x = Zakljucek programa"<<endl;
	cout<<endl;
	cout<<"Vasa izbira?: ";
	cin>>x;  //x=glavni menu
cout<<endl;

	
	switch (x) // GLAVNI MENU
	{
/*1*/		case '1':                  //risanje likov case
cout<<"_______________________________________________________________________________"<<endl;
			cout<<"Vnesite kaj hocete obiskati: ";
			cout<<endl;
			cout<<"1 - Pravokotnik"<<endl;
			cout<<"2 - Trikotnik"<<endl;
			cout<<"3 - Krog"<<endl;
			cin>>l;  //l=liki
	
			switch (l)  //liki
					{
				case '1':   //PRAVOKOTNIK
				cout<<"_______________________________________________________________________________"<<endl;
						cout<<"Vnesite dolzino a in nato dolzino b stranice (vse mere so v cm): "<<endl;
						int xs;
						int ys;
						int xsp;
						int ysp;
						cin>> xs;
						cin>> ys;
						xsp= xs*37.795275591;
						ysp= ys*37.795275591;
						initwindow(800,800);
						rectangle(50,50,xsp,ysp); 
						outtextxy( 20, 20, "Kliknite 'enter' za nadaljevanje programa (kliknite na okno prvo)");
						getch();
						closegraph();
						
						cout<<endl;
						cout<<endl;
						cout<<"Izrisali ste pravokotnik z a = "<<xs<<" cm in b = "<<ys<<" cm."<<endl;
						cout<<"Obseg o = "<<2*(xs+ys)<<" cm."<<endl;
						cout<<"Ploscina p = "<<xs*ys<<" cm2."<<endl;
						cout<<endl;
						cout<<endl;
					break;	
								
				case '2':   //TRIKOT. poljubne dolzine nemogoèe, izrisan bo stock strikotnik
				cout<<"_______________________________________________________________________________"<<endl;
						cout<<"Vnesite dolzino a, b in nato dolzino c stranice v cm: "<<endl;
						int trika;
						int trikb;
						int trikc;
					/*	int trikap;
						int trikbp;
						int trikcp; */
						cin>>trika;
						cin>>trikb;
						cin>>trikc;
					/*	trikap= trika*37.795275591;
						trikbp= trikb*37.795275591;
						trikcp= trikc*37.795275591;*/
						initwindow(800,800);
						line(250, 50, 150, 150);
   						line(250, 50, 350, 150);
   						line(150, 150, 350, 150);
 						outtextxy( 20, 20, "Kliknite 'enter' za nadaljevanje programa (kliknite na okno prvo)");
						getch();
				//		delay(6000);
						closegraph();
						
						cout<<endl;
						cout<<endl;
					//	int trikv;
					//	trikv=
						cout<<"Izrisani je bil trikotnik"<<endl;
						cout<<"Podatki so pa a = "<<trika<<" cm, b = "<<trikb<<" cm, c = "<<trikc<<" cm."<<endl;
						cout<<"Obseg o = "<<trika+trikb+trikc<<" cm."<<endl;
						cout<<endl;
						cout<<endl;
					break;
					
				case '3':  //KROG
				cout<<"_______________________________________________________________________________"<<endl;
				cout<<"Vnesite polmer kroga: "<<endl;
				int krogr;
				int krogrp;
				cin>> krogr;
				krogrp = krogr * 37.795275591;				
				initwindow(800,800);
				circle(300, 300, krogrp);
				outtextxy( 298, 290, ".");
				outtextxy( 20, 20, "Kliknite 'enter' za nadaljevanje programa (kliknite na okno prvo)");
				getch();
				closegraph();		
				cout<<endl;
				cout<<endl;
				
				
				cout<<"Izrisani je bil krog"<<endl;
				cout<<"Podatki so r (polmer) = "<<krogr<<" cm, d (premer) = "<<2*krogr<<" cm."<<endl;
				cout<<"Obseg o = "<<2*pi*krogr<<" cm."<<endl;
				cout<<"Ploscina S = "<<pi*(krogr*krogr)<<" cm2."<<endl;
				cout<<endl;
				cout<<endl;
				
					break;
	
				default:
					cout<<"napacen znak"<<endl;
					break;
					}	
				break;
	
		
		
		
		
				break;
				
				
/*2*/	case '2': 								//Standardni kalkulator
				cout<<"_______________________________________________________________________________"<<endl;
				cout<<"Vnesite znak (+ - / *):"<<endl;
				cin>>c; //c=calculator
				cout<<"Vnesite y in z stevili:"<<endl;
				cin>>y>>z;
	
					switch (c)
					{
				case '*': cout<<y<< " * " <<z<<" = "<<y*z<<endl;
					break;
				case '/': cout<<y<< " / " <<z<<" = "<<y/z<<endl;
					break;
				case '-': cout<<y<< " - " <<z<<" = "<<y-z<<endl;
					break;
				case '+': cout<<y<< " + " <<z<<" = "<<y+z<<endl;
					break;
				default:
					cout<<"napacen znak"<<endl;
					break;
					}
				break;
					
/*3*/		case '3': 								//Izris grafov
				cout<<"_______________________________________________________________________________"<<endl;
				int x,y;
				int yg,ygp; //y os za frekvenco
				int wave,wavep; //wavelenght
				int amp,ampp; //amplitude
				char csin; //cos ali sin frekvence
				cout<<"Vnesite kjer hocete narisati frekvence na y (v cm) osi: ";
				cin>>yg;
				ygp = yg*37.795275591;  //pretvorba cm v pixel
				cout<<endl;
				
				cout<<"Vnesite amplitudo vase frekvence (v cm): ";
				cin>>amp;
				ampp=amp*37.795275591;
				cout<<endl;
				
				cout<<"Vnesite valovno dolzino vase frekvence (v cm): ";
				cin>>wave;
				wavep=wave*37.795275591;
				cout<<endl;
				
			cossin:  //ponovotev vnosa èe je vnos napaèen
				cout<<"Vnesite 'c' ce hocete cosinus ali 's' ce sinus frekvenco: ";
				cin>>csin;
				
				if(csin=='s') //za sinus
				{
					initwindow(800,600);
					line(0,300,getmaxx(),300);  //za x osjo
					line(400,0,400,getmaxy());  // za y
	
			
				
				
					for(int i=-400; i<= 400; i++)  // dolzina valovne crte od leve proti desni
					{
					
						//							
						x=(int)400+i; 
			/*ypg*/		y=(int)(300-ygp)-sin(i*3.1415/wavep)*ampp;   //velikost frekvence  
						putpixel (x,y,YELLOW); //barva
					}
				}
				else if(csin=='c') //za cosinus
				{
					initwindow(800,600);
					line(0,300,getmaxx(),300);  //za x osjo
					line(400,0,400,getmaxy());  // za y
	
			
				
				
					for(int i=-400; i<= 400; i++)  // dolzina valovne crte od leve proti desni
					{
					
						//							
						x=(int)400+i; 
			/*ypg*/		y=(int)(300-ygp)-cos(i*3.1415/wavep)*ampp;   //velikost frekvence  
						putpixel (x,y,GREEN); //barva
						}
				}
				else
				{
					cout<<"NAPACEN VNOS, poskusite znova: ";
					cout<<endl;
					goto cossin;  //ce vpis ni c ali s se ponovi
				}
				outtextxy( 20, 20, "Graf frekvence");  //izpis naslova
				getch();
				closegraph;		
				cout<<"Hvala da ste uporabili graf frekvence";
				break;
			
/*4*/	case '4':
			cout<<"_______________________________________________________________________________"<<endl;
			cout<<"SAMODEJNI IZRIS PRAVOKOTNIKA"<<endl;  //Izris pravokotnika (avtomatsko)
			cout<<"Vnesite kako dolgo naj program izrisuje vsak ROB! (sekunde): ";
					
					
			int cas;   //vnesemo cas izvajanja
			cin>>cas;
			
			initwindow(800,600); 
			outtextxy( 10, 10, "Samodejni izris pravokotnika (skoraj ze kvadrat)");  //izpis naslova

			for (int i=0;i<700;i++)    //kako dolgo se ponavlja premikanje
			{
				circle(50+i,50,15);  // x,y(kje se zacne) os in ,velikost kroga
				delay(cas);
			}
			
			for (int j=0;j<500;j++)
			{
				circle(50,50+j,15);
				delay(cas);
			}
			
			for (int k=0;k<700;k++)
			{
				circle(50+k,550,15);
				delay(cas);
			
			}
			
			for (int m=0;m<500;m++)
			{
				circle(750,550-m,15);
				delay(cas);
			}
			for (int o=0;o<700;o++)
			{
				circle(50+o,80,15);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int oo=0;oo<700;oo++)
			{
				circle(50+oo,110,15);  // x,y os in ,velikost kroga
				delay(1);
			}
				for (int ooo=0;ooo<700;ooo++)
			{
				circle(50+ooo,140,15);  // x,y os in ,velikost kroga
				delay(1);
			}
				for (int oooo=0;oooo<700;oooo++)
			{
				circle(50+oooo,170,15);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int ooooo=0;ooooo<700;ooooo++)
			{
				circle(50+ooooo,200,15);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int ii=0;ii<700;ii++)
			{
				circle(50+ii,230,15);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int iii=0;iii<700;iii++)
			{
				circle(50+iii,260,15);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int iiii=0;iiii<635;iiii++)
			{
				circle(80+iiii,315,45);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int iiiii=0;iiiii<635;iiiii++)
			{
				circle(80+iiiii,375,45);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int jj=0;jj<635;jj++)
			{
				circle(80+jj,435,45);  // x,y os in ,velikost kroga
				delay(1);
			}
			for (int jjj=0;jjj<635;jjj++)
			{
				circle(80+jjj,495,45);  // x,y os in ,velikost kroga
				delay(1);
			}
			getch();
				break;
				
			
			
				
/*3*/	case 'x':	
			cout<<"_______________________________________________________________________________"<<endl;
			cout<<"Hvala za uporabo naseaga programa, Lep pozdrav"<<endl;  //Konec programa
			goto konec;
				break;		
			default:
				cout<<"napacen znak"<<endl;
				break;
	}

	

cout<<endl;
cout<<"_______________________________________________________________________________"<<endl;
cout<<endl;
goto zacetek;
konec:
	
	
	return 0;
	
}







