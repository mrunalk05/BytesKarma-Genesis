#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<bits/stdc++.h>
#include<fstream>
#include<windows.h>
#include<mmsystem.h>
#include<stdlib.h>
char a,b,e;
int z,y,v;
using namespace std;
  
void shuffle(int run[],int n);
void stumps();
void batsman();
void wicket();
void run();
void game();
void instr();
void menu();
void menu2();
void ba();
void menu1();
void menum();
void menuh();

class la
{
	private :
		int b,tar,w;
	public :
		void set (int b1,int tar1,int w1)
		{
			b=b1;
			tar=tar1;
			w=w1;
			
		}
		
	void level()
	{
		char arr[50];
		setbkcolor(YELLOW);
		cleardevice();
		setcolor(BLACK);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,15);
		sprintf(arr,"%d",tar);
		outtextxy(200,50,arr);	
		setcolor(RED);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
		outtextxy(20,200,"runs to win in 1 over,");
		sprintf(arr,"with %d wicket remaining.",w);
		outtextxy(20,300,arr);
		outtextxy(20,400,"Press any key to start..");
		getch();
		PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			
	}
	void game()
{
	int k=0;
	int p[6]={0,1,2,3,4,5};	
	int s=0;
	char arr[50],arr1[50];
	char c;
				

    setbkcolor(GREEN);
    
		
while(1)
	{
		run();
		shuffle(p,6);
		stumps();
		batsman();
		ba();
	
		
			for (int i=0;i<=150;i++)
			{
				
				setactivepage(k);
				setvisualpage(1-k);
				cleardevice();
			    stumps();
			    batsman();
			    ba();
			    run();
			    setcolor(WHITE);
			    setfillstyle(SOLID_FILL,RED);
				circle (700-(3*i),0+(3*i),17);
				floodfill(700-(3*i),0+(3*i),WHITE);
				delay(2);
				k=1-k;
				
				settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				setcolor(RED);
				sprintf(arr,"Score-%d      Wickets left-%d",s,w);
				outtextxy(5,5,arr);
				sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				outtextxy(5,30,arr1);
				
			}
			for (int i=0;i<=80;i++)
			{
				setactivepage(k);
				setvisualpage(1-k);
				cleardevice();
				stumps();
				batsman();
				run();	

			line(103+i,330-i/3,133+i,280-i/3);
			line(115+i,335-i/3,133+i,300-i/3);
			line(133+i,280-i/3,133+i,300-i/3);
			
			line(103+i,330-i/3,93+i,320-i/3);
			line(115+i,335-i/3,125+i,345-i/3);
			
			line(93+i,320-i/3,25+i,440-i/3);
			line(125+i,345-i/3,58+i,460-i/3);
			line(25+i,440-i/3,58+i,460-i/3);
				delay(10);
				
				setcolor(WHITE);
				setfillstyle(SOLID_FILL,RED);			
				circle (250-(i),450-i,17);
				floodfill(250-(i),450-i,WHITE);
				delay(2);

				k=1-k;
				settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				setcolor(RED);
				sprintf(arr,"Score-%d      Wickets left-%d",s,w);
				outtextxy(5,5,arr);
				sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				outtextxy(5,30,arr1);
				
			}
			
		
		
		  if(GetAsyncKeyState(VK_SPACE))
			{
			
				if(p[1]==5)
				{
					float i=0;
					while(i<=400)
					
					{
					    setactivepage(k);
						setvisualpage(1-k);
						cleardevice();
					    stumps();
					    batsman();
					    run();
					    ba();
					    setcolor(WHITE);
					    setfillstyle(SOLID_FILL,RED);
						circle (170+(1.3*i),370-(i),17);
						floodfill(170+(1.3*i),370-(i),WHITE);
						delay(2);
						k=1-k;
						i++;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
				sprintf(arr,"Score-%d      Wickets left-%d",s,w);
				outtextxy(5,5,arr);
				sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				outtextxy(5,30,arr1);
					}
					
					
					setvisualpage(1-k);	
					settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
					 setcolor(RED);
						
                     PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
					outtextxy(250,350,"6");
					delay(1000);
					k=1-k;
					s=s+6;
				    settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
				}
				
				else if(p[1]==4)
				{
					float i=0;
					while(i<=300)
					
					{
						setactivepage(k);
						setvisualpage(1-k);
						cleardevice();
						stumps();
						batsman();
						run();
						ba();
						setcolor(WHITE);
						setfillstyle(SOLID_FILL,RED);
						circle (170+(1.8*i),370-i,17);
						floodfill(170+(1.8*i),370-i,WHITE);
						delay(2);
						k=1-k;
						i++;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
					}
					setvisualpage(1-k);	
					settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
					 setcolor(RED);
					 PlaySound(TEXT("claps.wav"),NULL,SND_SYNC);
					outtextxy(250,350,"4");
					delay(1000);
					k=1-k;
					s=s+4;
				    settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);	
				}
				
				else if(p[1]==3)
				{
					float i=0;
					while(i<=250)
					
					{
						setactivepage(k);
						setvisualpage(1-k);
						cleardevice();
						stumps();
						batsman();
						run();
						ba();
						setcolor(WHITE);
						setfillstyle(SOLID_FILL,RED);
						circle (170+(3.5*i),370-i,17);
						floodfill(170+(3.5*i),370-i,WHITE);
						delay(2);
						k=1-k;
						i++;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
					}
				
					setvisualpage(1-k);	
					settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
					 setcolor(RED);
				
					 PlaySound(TEXT("claps1.wav"),NULL,SND_SYNC);
					outtextxy(250,350,"3");
					delay(1000);
					k=1-k;
					s=s+3;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);	
				}
				
				else if(p[1]==2)
				{
					
					float i=0;
					while(i<=200)
					
					{
						setactivepage(k);
						setvisualpage(1-k);
						cleardevice();
						stumps();
						batsman();
						run();
						ba();
						setcolor(WHITE);
						setfillstyle(SOLID_FILL,RED);
						circle (170+(5*i),370,17);
						floodfill(170+(5*i),370,WHITE);
						delay(2);
						k=1-k;
						i++;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
					}
					setvisualpage(1-k);	
					settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
					 setcolor(RED);
					 PlaySound(TEXT("claps1.wav"),NULL,SND_SYNC);
					
					outtextxy(250,350,"2");
					delay(1000);
					k=1-k;
					s=s+2;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
				}
				
					else if(p[1]==1)
				{
					float i=0;
					while(i<=150)
					
					{
						setactivepage(k);
						setvisualpage(1-k);
						cleardevice();
						stumps();
						batsman();
						run();
						ba();
						setcolor(WHITE);
						setfillstyle(SOLID_FILL,RED);
						circle (170+(5.5*i),370+(1.1*i),17);
						floodfill(170+(5.5*i),370+(1.1*i),WHITE);
						delay(2);
						k=1-k;
						i++;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
					}
					setvisualpage(1-k);	
					settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
					 setcolor(RED);
					
					PlaySound(TEXT("claps1.wav"),NULL,SND_SYNC);
					outtextxy(250,350,"1");
					delay(1000);
					k=1-k;
					s=s+1;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
				         
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);	
				}
				
					else if(p[1]==0)
				{
					float i=0;
					while(i<=80)
					
					{
						setactivepage(k);
						setvisualpage(1-k);
						cleardevice();
						stumps();
						batsman();
						run();
						ba();
						setcolor(WHITE);
						setfillstyle(SOLID_FILL,RED);
						circle (170+i,370+i,17);
						floodfill(170+i,370+i,WHITE);
						delay(2);
						k=1-k;
						i++;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
					}
					
					setvisualpage(1-k);	
					settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
					 setcolor(RED);
					 
					outtextxy(250,350,"DOT");
					delay(1000);
					k=1-k;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
					
				}
			}
			else
		{
					float i=0;
					while(i<=150)
					
					{
						setactivepage(k);
						setvisualpage(1-k);
						cleardevice();
						stumps();
						batsman();
						run();
						ba();
						setcolor(WHITE);
						setfillstyle(SOLID_FILL,RED);
						circle (170-i,370-(0.6*i),17);
						floodfill(170-i,370-(0.6*i),WHITE);
						delay(2);
						k=1-k;
						i++;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
				        setcolor(RED);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
					}
					
					setvisualpage(1-k);
					
				
					settextstyle(EUROPEAN_FONT,HORIZ_DIR,6);
					 setcolor(RED);
					 PlaySound(TEXT("wicket.wav"),NULL,SND_SYNC);
						
					outtextxy(250,350,"Wicket");
					delay(1000);
					
					k=1-k;
					w=w-1;
				        settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
                    sprintf(arr,"Score-%d      Wickets left-%d",s,w);
			      	outtextxy(5,5,arr);
				    sprintf(arr1,"Target-%d   Balls left-%d",tar,b);
				    outtextxy(5,30,arr1);
			
		}
			
		
		
	b--;
	if(s>=tar )
	{
		char m[1];
		setvisualpage(k);
		cleardevice(); 
		setcolor(RED);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,8);
			
     	outtextxy(50,150,"VICTORY..");
        
        PlaySound(TEXT("CantinaBand3.wav"),NULL,SND_SYNC);
       	k=1-k;
       	if(z==(int)a)
       	{
       	ofstream out("one.txt");
      	sprintf(m,"%c",a+1);
      	out<<m;
	    out.close();
	    menu2();
     	}
      		if(y==(int)b)
       	{
       	ofstream out("two.txt");
      	sprintf(m,"%c",b+1);
      	out<<m;
	    out.close();
	    menum();
     	}
     		if(v==(int)e)
       	{
       	ofstream out("five.txt");
      	sprintf(m,"%c",e+1);
      	out<<m;
	    out.close();
	    menuh();
     	}
     	
     	menu1();
      	
	}
	if(b==0 || w==0)
	{
		
		setvisualpage(k);
		cleardevice(); 
		setcolor(RED);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,8);	
     	outtextxy(50,150,"Better luck");
     	outtextxy(50,250,"Next Time..");
        delay(4000);
       
       	k=1-k;
      	menu2();
	}
	

}

}

};
void stumps()
{
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line (5,250,5,500);
	line (15,250,15,500);
	line (25,250,25,500);
	line (5,250,15,250);
	line (15,250,25,250);
	line (25,500,5,500);	
	floodfill(10,300,WHITE);
	floodfill(20,300,WHITE);
}

void batsman()
{
		
	circle(120,100,30);     //head//
	circle(105,95,7);
	circle(135,95,7);
	arc(120,100,240,300,20);
	
	line(135,126,135,160);  //neck//
	line(105,126,105,160);
	line(135,160,120,190);
	line(105,160,120,190);
	
	line(135,160,160,160);  //shoulders//
	line(105,160,80,160); 
	


	line(230,230,130,320);  //left hand//
	line(160,160,230,230);

	line(205,230,120,305);
	line(160,190,205,230);

	

	line (80,160,20,245);  //right hand//

	line(20,245,115,330);
	line(80,190,43,245);
	line(43,245,123,320);
	
	
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	line(160,160,160,270);  //jersey//
	line(80,160,80,270);
	line(160,270,80,270);
	line(80,190,160,190);
	floodfill(90,170,WHITE);
	floodfill(150,170,WHITE);
	floodfill(90,250,WHITE);
	
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	line(85,270,85,450);    //legs//
	line(105,270,105,450);
	line(135,270,135,450);
	line(155,270,155,450);	
	line(155,450,135,450);
	line(85,450,105,450);
	floodfill(90,400,WHITE);
	floodfill(140,400,WHITE);
		
}
void ba()

{

line(103,330,133,280);
line(115,335,133,300);
line(133,280,133,300);

line(103,330,93,320);
line(115,335,125,345);

line(93,320,25,440);
line(125,345,58,460);
line(25,440,58,460);
}




void wicket()
{
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	line (5,375,5,500);
	line (15,375,15,500);
	line (25,375,25,500);
	line (5,375,15,375);
	line (15,375,25,375);
	line (25,500,5,500);
	floodfill(10,450,WHITE);
	floodfill(20,450,WHITE);	
}

void shuffle(int run[], int n)
{
   
    srand(time(0));
  
    for (int i=0; i<n ;i++)
    {
        
        int r = i + (rand() % (6-i));
  
        swap(run[i], run[r]);
    }
}
	void run()
	{
		 setcolor(YELLOW);
		
		line(560,0,660,0);
		line(560,0,560,100);
		line(560,100,660,100);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,8);
		outtextxy(565,1,"6");	
		line(560,100,560,200);
		line(560,200,660,200);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,8);
		outtextxy(565,101,"4");
		line(560,200,560,300);
		line(560,300,660,300);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,8);
		outtextxy(565,201,"3");
		line(560,300,560,400);
		line(560,400,660,400);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,8);
		outtextxy(565,301,"2");
		line(560,400,560,500);
		line(560,500,660,500);
		line(660,0,660,500);
		settextstyle(EUROPEAN_FONT,HORIZ_DIR,8);
		outtextxy(565,401,"1");
	
	
	}
	

void instr()
{
	cleardevice();
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,3);
	setcolor(RED);
	outtextxy(130,20,"The game has 3 modes :");
	outtextxy(10,70,"1) 1 over.");
	outtextxy(200,70,"2) 2 overs.");	
	outtextxy(390,70,"3) 5 overs.");
	outtextxy(200,130,"Gameplay:");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(50,160,"Ball will be delivered as u start the game,");	
	outtextxy(50,190,"press SPACEBAR key to hit the ball.");
	outtextxy(50,220,"As the ball passes from the runs zones in the");
	outtextxy(50,250,"right side, you will get the runs accordingly.");
	outtextxy(50,280,"Try to complete the target given.");
	outtextxy(160,340,"BEST OF LUCK!!");
	
	outtextxy(500,440,"BACK(0)");
	
	int c = getch();
	switch(c)
	{
		case 48:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				menu();
				break;
			}
		default :
			{
				
				instr();
			}
	}

}


void menuh()
{
	la one;
	setbkcolor(YELLOW);
	cleardevice();
	setcolor(RED);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(180,25,"Select level:-");	
	setfillstyle(1,10);
	bar(20,95,120,145);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,96,"1");
	setfillstyle(1,10);
	bar(20,170,120,220);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,171,"2");
	setfillstyle(1,10);
	bar(20,245,120,295);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,246,"3");
	setfillstyle(1,10);
	bar(20,320,120,370);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,321,"4");
	setfillstyle(1,10);
	bar(20,395,120,445);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,396,"5");
	
	setfillstyle(1,10);
	bar(335,95,435,145);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,96,"6");
	setfillstyle(1,10);
	bar(335,170,435,220);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,171,"7");
	setfillstyle(1,10);
	bar(335,245,435,295);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,246,"8");
	setfillstyle(1,10);
	bar(335,320,435,370);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,321,"9");
	setfillstyle(1,10);
	bar(300,395,420,445);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(301,396,"Back-0");
      
     
     ifstream in("five.txt");                                                        
     in>>e;
     in.close();
	 char arr[50];
           	
			   	v = getch();
			   	
   
	switch(v)
	{
	
		case 48:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				menu1();
				break;
			}
		case 49:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				
				one.set(30,25,5);
				one.level();
				one.game();
		     	}
		     	else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 50:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				one.set(30,27,5);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 51:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				
				one.set(30,29,4);
				one.level();
				one.game();
			    }
			    else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 52:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				one.set(30,35,4);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 53:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				
				if((int)e>=v)
				{
				one.set(30,40,3);
				one.level();
				one.game();
			    }
				
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 54:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				one.set(30,45,3);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 55:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				one.set(30,50,3);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 56:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				one.set(30,54,3);
				one.level();
				one.game();
		        }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		case 57:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)e>=v)
				{
				one.set(30,60,3);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)e-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menuh();
					 
				}
				break;
				
			}
		default:
			{
			
				menuh();
			}								
	}
	
	
}




void menum()
{
	la one;
	setbkcolor(YELLOW);
	cleardevice();
	setcolor(RED);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(180,25,"Select level:-");	
	setfillstyle(1,10);
	bar(20,95,120,145);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,96,"1");
	setfillstyle(1,10);
	bar(20,170,120,220);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,171,"2");
	setfillstyle(1,10);
	bar(20,245,120,295);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,246,"3");
	setfillstyle(1,10);
	bar(20,320,120,370);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,321,"4");
	setfillstyle(1,10);
	bar(20,395,120,445);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,396,"5");
	
	setfillstyle(1,10);
	bar(335,95,435,145);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,96,"6");
	setfillstyle(1,10);
	bar(335,170,435,220);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,171,"7");
	setfillstyle(1,10);
	bar(335,245,435,295);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,246,"8");
	setfillstyle(1,10);
	bar(335,320,435,370);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,321,"9");
	setfillstyle(1,10);
	bar(300,395,420,445);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(301,396,"Back-0");
      
     
     ifstream in("two.txt");                                                        
     in>>b;
     in.close();
	 char arr[50];
           	
			   	y = getch();
			   	
   
	switch(y)
	{
	
		case 48:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				menu1();
				break;
			}
		case 49:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				
				one.set(12,14,3);
				one.level();
				one.game();
		     	}
		     	else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 50:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				one.set(12,16,3);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 51:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				
				one.set(12,17,3);
				one.level();
				one.game();
			    }
			    else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 52:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				one.set(12,19,2);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 53:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				one.set(12,22,2);
				one.level();
				one.game();
			    }
				
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 54:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				one.set(12,24,2);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 55:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				one.set(12,26,2);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 56:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				one.set(12,22,1);
				one.level();
				one.game();
		        }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		case 57:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)b>=y)
				{
				one.set(12,24,1);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)b-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menum();
					 
				}
				break;
				
			}
		default:
			{
				
				menum();
			}								
	}
	
	
}



void menu2()
{
	la one;
	setbkcolor(YELLOW);
	cleardevice();
	setcolor(RED);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(180,25,"Select level:-");	
	setfillstyle(1,10);
	bar(20,95,120,145);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,96,"1");
	setfillstyle(1,10);
	bar(20,170,120,220);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,171,"2");
	setfillstyle(1,10);
	bar(20,245,120,295);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,246,"3");
	setfillstyle(1,10);
	bar(20,320,120,370);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,321,"4");
	setfillstyle(1,10);
	bar(20,395,120,445);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,396,"5");
	
	setfillstyle(1,10);
	bar(335,95,435,145);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,96,"6");
	setfillstyle(1,10);
	bar(335,170,435,220);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,171,"7");
	setfillstyle(1,10);
	bar(335,245,435,295);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,246,"8");
	setfillstyle(1,10);
	bar(335,320,435,370);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(365,321,"9");
	setfillstyle(1,10);
	bar(300,395,420,445);
	setbkcolor(10);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(301,396,"Back-0");
      
     
     ifstream in("one.txt");                                                        
     in>>a;
     in.close();
	 char arr[50];
           	
			   	z = getch();
			   	
   
	switch(z)
	{
	
		case 48:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				menu1();
				break;
			}
		case 49:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				
				one.set(6,10,1);
				one.level();
				one.game();
		     	}
		     	else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 50:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				one.set(6,12,1);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 51:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				
				one.set(6,13,3);
				one.level();
				one.game();
			    }
			    else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 52:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				one.set(6,15,2);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 53:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				one.set(6,16,2);
				one.level();
				one.game();
			    }
				
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 54:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				one.set(6,17,2);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 55:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				one.set(6,16,1);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 56:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				one.set(6,17,1);
				one.level();
				one.game();
		        }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		case 57:
			{
				PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
				if((int)a>=z)
				{
				one.set(6,18,1);
				one.level();
				one.game();
			    }
				else
			    {
			    	cleardevice();
			    	sprintf(arr,"You are on level-%d",(int)a-48);
			    	outtextxy(10,160,arr);
			    	outtextxy(10,230,"Please complete it first.");
			    	outtextxy(10,400,"Press any key to go back");
			    	getch();
					menu2();
					 
				}
				break;
				
			}
		default:
			{
			
				menu2();
			}								
	}
	
	
}
void menu1()
{
	setbkcolor(YELLOW);
	cleardevice();
	setcolor(RED);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(20,50,"Select Number of Overs");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
	setfillstyle(1,10);
	bar(200,180,430,230);
	setbkcolor(10);
	outtextxy(210,180,"ONE    (1)");	
	bar(200,250,430,300);
	setbkcolor(10);
	outtextxy(210,260,"TWO   (2)");	
	bar(200,320,430,370);
	setbkcolor(10);
	outtextxy(210,330,"FIVE   (5)");		
	bar(200,390,430,440);
	setbkcolor(10);
	outtextxy(210,400,"BACK (0)");
	int c=getch();
	switch (c)
	{
	case 48:
		{
			PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			menu();
			break;	
		}
	case 49:
		{
			PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			menu2();
			break;
		}
	case 50:
		{
			PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			menum();
			break;
		}
	case 53:
		{
			PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			menuh();
			break;
		}
	default:
		{
			
			menu1();
			break;	
		}
	}
}




void menu()
{
	setbkcolor(YELLOW);
	cleardevice();
	setcolor(RED);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
	outtextxy(20,50,"BYTEKARMAS PRESENTS");
	outtextxy(100,130,"SMASH CRICKET");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,2);
	outtextxy(180,160,"-Play on the Front Foot");
	
	setfillstyle(1,10);
	bar(200,250,430,300);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
	setbkcolor(10);
	outtextxy(210,260,"PLAY   (1)");	
	bar(200,320,430,370);
	setbkcolor(10);
	outtextxy(210,330,"HELP   (2)");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);		
	bar(200,390,430,440);
	setbkcolor(10);
	outtextxy(210,400,"BACK (0)");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
	int c=getch();
	switch (c)
	{
	case 49:
		{
			PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			menu1();
			break;
		}
	case 50:
		{
			PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			instr();
			break;
		}
	case 48:
		{
			PlaySound(TEXT("tap.wav"),NULL,SND_SYNC);
			exit(0);
			break;
		}
	default:
		{
			
			menu();
			break;	
		}
	}
	
	
	
}	

int main()
{
	 ifstream i("one.txt");                                                        
     i>>a;
     if((int)a<49 || (int)a>57 )
     {
     	a=49;
	 }
     i.close();
     
      ifstream j("two.txt");                                                        
     j>>b;
     if((int)b<49 || (int)b>57 )
     {
     	b=49;
	 }
     j.close();
     
      ifstream k("five.txt");                                                        
     k>>e;
     if((int)e<49 || (int)e>57 )
     {
     	e=49;
	 }
     k.close();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	
	menu();	

    getch();
return 0;
}