#include<simplecpp>
#include<conio.h>
void game();
void quit();
void endd();
int score=0;
void lose(){
int x1,y1;
Rectangle lo(500,330,400,350);
lo.setColor(COLOR(139,69,19));
lo.setFill(COLOR(139,69,19));
Rectangle li(500,330,322,276);
li.setColor(COLOR(255,255,0));
li.setFill(COLOR(255,255,0));
Text s(500,280,"SCORE:  ");
Text u(540, 280, score);
Text mes(500,300,"GAME OVER ");
Text mesq(500,320,"PLAY AGAIN");
Text mesqq(500,340,"QUIT");
int cval = getClick();
x1=cval/65536;
y1=cval % 65536;
cout<<"x="<<x1<<endl<<"y="<<y1<<endl;
if((470<=x1 &&x1<=530)&&(310<=y1&&y1<=320)){
game();
}

else if ((490<=x1 &&x1<=510)&&(330<=y1&&y1<=350)){
   quit();
   }



wait(1);
}

void endd(){

int x1,y1;

Rectangle lof(500,330,400,350);
lof.setColor(COLOR(139,69,19));
lof.setFill(COLOR(139,69,19));
Rectangle lof12(500,330,322,276);
lof12.setColor(COLOR(255,255,0));
lof12.setFill(COLOR(255,255,0));
Text s(500,280,"SCORE");
Text u(540, 280, score);
Text mes(500,300,"CONGRATULATIONS YOU WON!!!!!");
Text mesq(500,320,"PLAY AGAIN");
Text mesqq(500,340,"QUIT");
//gletangle la(500,320,350,300);
int cval = getClick();
x1=cval/65536;
y1=cval % 65536;
cout<<"x="<<x1<<endl<<"y="<<y1<<endl;
if((470<=x1 &&x1<=530)&&(310<=y1&&y1<=320)){
game();
}

else if ((490<=x1 &&x1<=510)&&(330<=y1&&y1<=350)){
   quit();
   }



wait(1);
}

void quit(){
Rectangle quit(500,330,400,350);
quit.setColor(COLOR(32,178,170));
quit.setFill(COLOR(32,178,170));
Text mes(500,300,"QUITTING IN PROGRESS.....");
wait(3);
closeCanvas();
}

void game(){
int x;
int y;
int lives=3;
Rectangle R(500,500,1000,1000);
R.setColor(COLOR(0,153,76));
R.setFill(COLOR(0,153,76));
Rectangle R1(500,400,1000,500);
R1.setColor(COLOR(204,102,0));
R1.setFill(COLOR(204,102,0));

// Upper Border Rectangle
Rectangle Rb5(500,100,1000,18);
Rb5.setColor(COLOR(32,32,32));
Rb5.setFill(COLOR(32,32,32));


// Lower Boeder Rectangle
Rectangle Rb6(500,700,1000,18);
Rb6.setColor(COLOR(32,32,32));
Rb6.setFill(COLOR(32,32,32));

Rectangle R2(600,900,50,180);
// border
Rectangle Rb1(500,163,1000,18);
Rb1.setColor(COLOR(255,255,255));
Rb1.setFill(COLOR(255,255,255));
// Bottom Border
Rectangle Rb2(500,637,1000,18);
Rb2.setColor(COLOR(255,255,255));
Rb2.setFill(COLOR(255,255,255));

//Middle Circle
Circle full(500,400,140);
full.setColor(COLOR(255,255,255));
full.setFill(COLOR(255,255,255));

Circle full2(500,400,120);
full2.setColor(COLOR(153,76,0));
full2.setFill(COLOR(153,76,0));


// Middle Line
Rectangle Rb3(500,364,18,414);
Rb3.setColor(COLOR(255,255,255));
Rb3.setFill(COLOR(255,255,255));

// small Middle Rectangle
Rectangle Rb4(500,600,18,64);
Rb4.setColor(COLOR(255,255,255));
Rb4.setFill(COLOR(255,255,255));

Circle semi(0,400,150);
semi.setColor(COLOR(255,255,255));
semi.setFill(COLOR(255,255,255));

Circle semi11(0,400,135);
semi11.setColor(COLOR(153,76,0));
semi11.setFill(COLOR(153,76,0));

Circle semi1(1000,400,150);
semi1.setColor(COLOR(255,255,255));
semi1.setFill(COLOR(255,255,255));

Circle semi12(1000,400,135);
semi12.setColor(COLOR(153,76,0));
semi12.setFill(COLOR(153,76,0));

// BasketBall pole
Rectangle Rb7(960,300,22,200);
Rb7.setColor(COLOR(0,204,204));
Rb7.setFill(COLOR(0,204,204));

// small box
Rectangle Rbsb(960,400,50,50);
Rbsb.setColor(COLOR(32,32,32));
Rbsb.setFill(COLOR(32,32,32));

// little Big pole
Rectangle Rbbb(960,442,80,30);
Rbbb.setColor(COLOR(32,32,32));
Rbbb.setFill(COLOR(32,32,32));

// small Rectangle
Rectangle Rb9(924,205,50,10);
Rb9.setColor(COLOR(32,32,32));
Rb9.setFill(COLOR(32,32,32));

// circle Inside Rectangle
Circle Ra(924,205,10);
Ra.setColor(COLOR(0,32,32));
Ra.setFill(COLOR(0,32,32));

//cheer Leaders
Rectangle s(300,60,32,25);
Circle c(300,84,8);
Circle cr(296,62,2);
Circle cs(310,62,2);
//Rectangle s1(300,116,50,40);
Line leg1(296,134,296,160);
Line leg2(304,134,304,160);
s.setColor(COLOR(0,255,255));
s.setFill(COLOR(0,255,255));
//s1.setColor(COLOR(0,255,255));
//s1.setFill(COLOR(0,255,255));
c.setColor(COLOR(255,0,0));
c.setFill(COLOR(255,0,0));

Line lh(326,116,360,116);
Line lR(274,116,240,116);
Rectangle s1(300,116,50,40);
s1.setColor(COLOR(0,255,255));
s1.setFill(COLOR(0,255,255));

//girl cheer Leader
Rectangle s12(670,60,32,25);
Circle c1(670,84,8);
Circle cr1(668,62,2);
Circle cs1(679,62,2);
//Rectangle s11(670,116,50,40);
Line leg12(674,134,676,160);
Line leg22(662,134,666,160);
s12.setColor(COLOR(255,204,153));
s12.setFill(COLOR(255,204,153));
/*s11.setColor(COLOR(255,102,102));
s11.setFill(COLOR(255,102,102));*/
c1.setColor(COLOR(255,0,0));//255,0,0
c1.setFill(COLOR(255,0,0));

Circle legleft(666,158,6);
Circle legRight(678,158,6);
legleft.setColor(COLOR(26,26,26));
legleft.setFill(COLOR(26,26,26));
legRight.setColor(COLOR(26,26,26));
legRight.setFill(COLOR(26,26,26));

Line l2h(688,116,736,116);//right
Line l2R(599,116,644,116);//left
Rectangle s11(670,116,50,40);
s11.setColor(COLOR(255,204,153));
s11.setFill(COLOR(255,204,153));
// blue leg
Circle Blegleft(298,158,6);
Circle BlegRight(308,158,6);
Blegleft.setColor(COLOR(26,26,26));
Blegleft.setFill(COLOR(26,26,26));
BlegRight.setColor(COLOR(26,26,26));
BlegRight.setFill(COLOR(26,26,26));




//net Rectangles
Rectangle Rb576(881,262,56,1);
Rb576.setColor(COLOR(255,255,0));
Rb576.setFill(COLOR(255,255,0));


Rectangle Rb5765(881,252,57,1);
Rb5765.setColor(COLOR(255,255,0));
Rb5765.setFill(COLOR(255,255,0));

Rectangle Rb57651(881,242,58,1);
Rb57651.setColor(COLOR(255,255,0));
Rb57651.setFill(COLOR(255,255,0));

Rectangle Rb576512(881,232,59,1);
Rb576512.setColor(COLOR(255,255,0));
Rb576512.setFill(COLOR(255,255,0));

Rectangle Rb5765121(881,222,60,1);
Rb5765121.setColor(COLOR(255,255,0));
Rb5765121.setFill(COLOR(255,255,0));

// Line Connecting the two Basket Ball Rectangle
Line l1(844,210,852,284);
Line l2(850,210,858,284);
Line l7(856,210,864,284);
Line l8(864,210,872,284);
Line l10(871,210,878,284);

Line L11(879,210,879,284);

Line l3(916,210,908,284);
Line l4(910,210,902,284);
Line l5(900,210,892,284);
Line l9(892,210,882,284);


Rectangle Rb57(882,280,60,8);
Rb57.setColor(COLOR(255,0,0));
Rb57.setFill(COLOR(255,0,0));

// top net
Rectangle Rb55(880,207,74,8);
Rb55.setColor(COLOR(255,0,0));
Rb55.setFill(COLOR(255,0,0));


// Player character


Text ul(900, 50, "Score:");
Text l(100,50,"chances:");


 repeat(4)
 {
    if(lives!=0){
 int cval = getClick();
x=cval/65536;
y=cval % 65536;


Circle c3(x, y, 30);
c3.setColor(COLOR(255,0,0));
c3.setFill(COLOR(255,0,0));



 double vx = 2, vy = -7; // up
 repeat(100){
 c3.move(vx, vy); ;
 vy += 0.1; // gravitation;

 }

 //program counter

cout<<"x="<<x<<"y="<<y;
if((649<=x &&x<=730)&&(319<=y&&y<=450)){
    score=score+2;

}
else {lives=lives-1;}





Text u(950, 50, score);

    Text ll(150,50,lives);
    wait(2);

cout<<"score="<<score<<endl;


}

}
if(score<=2)
{wait(1);
lose();
}

if(score>=4){

Text clear(500,80,"Congratualtions on clearing level 1");
Text score1(500,100,"LEVEL 1 SCORE : ");
Text scorec(580,100, score);
repeat(10){

lh.right(35);
l2R.left(35);
wait(0.2);
l2h.right(35);
lR.left(35);
wait(0.2);
lh.left(35);
l2h.left(35);
wait(0.2);
lR.right(35);
l2R.right(35);
wait(0.2);

}
wait(2);

        Text l2(500,60,"LEVEL 2");

        int lives=2;

repeat(4){
    if(lives!=0){
 int cval = getClick();
x=cval/65536;
y=cval % 65536;


Circle c3(x, y, 30);
c3.setColor(COLOR(255,69,0));
c3.setFill(COLOR(255,69,0));



 double vx = 4, vy = -7; // up
 repeat(150){

 c3.move(vx, vy);
 wait(0.0001);
 vy += 0.09; // gravitation;

 }

 //program counter

cout<<"x="<<x<<"y="<<y;
if((350<=x &&x<=400)&&(340<=y&&y<=405)){
    score=score+3;

}
else {lives=lives-1;}



   Text u(950, 50, score);
    Text ll(150,50,lives);wait(3);

cout<<"score="<<score<<endl;

    }else if(lives==0){lose();}
    }
endd();
}

}



////////////////////////////////////////////////////////////////////////////////////////////////
main_program{
//Write your code here
initCanvas("Home Page",1000,1000);
Rectangle last(500,500,1000,1000);
last.setFill("black");
last.setColor(COLOR(32,32,32));
Rectangle q(500,450,800,600);

q.setColor(COLOR(29,66,138));
q.setFill(COLOR(29,66,138));
Rectangle rb(500,88,800,100);
rb.setFill("black");
rb.setColor(COLOR(255,165,0));
Text title(500,100,"    SLAM DUNK    ");



//guy dunking
Circle d3(715,300,30);//face
Line d4(700,328,700,470);//body
Line d1114(705,335,705,470);//body
d1114.setColor(COLOR(255,165,0));
Line d114(695,335,695,470);//body
d114.setColor(COLOR(255,165,0));
Line d5(660,510,700,470);//left leg
Line d115(653,510,693,470);//left leg
d115.setColor(COLOR(255,255,255));
Line d1115(667,510,707,470);//left leg
d1115.setColor(COLOR(255,255,255));
Line d8(660,510,620,440);//left leg

Line d6(730,510,700,470);//right leg

Line d116(737,510,707,470);//right leg
d116.setColor(COLOR(255,255,255));

Line d1116(723,510,693,470);//right leg
d1116.setColor(COLOR(255,255,255));
Line d7(730,510,640,570);//right leg

Line d9(700,360,630,330);//left hand
Line d119(707,360,637,330);//left hand
d119.setColor(COLOR(255,165,0));
Line d1119(693,360,623,330);//left hand
d1119.setColor(COLOR(255,165,0));

Line d10(630,330,650,240);//left hand
Line d11(700,350,760,380);//right hand

Line d111(707,350,767,380);//right hand
d111.setColor(COLOR(255,165,0));
Line d1111(693,350,753,380);//right hand
d1111.setColor(COLOR(255,165,0));

Line d12(760,380,770,410);//right hand

//guy's basketball
Circle d13(640,225,25);
d13.setColor(COLOR(255,69,0));
d13.setFill(COLOR(255,69,0));

Circle d14(665,225,15);
d14.setColor(COLOR(29,66,138));


Circle d15(615,225,15);
d15.setColor(COLOR(29,66,138));


Line ls3(615,225,665,225);
Line ls4(640,200,640,250);
ls3.setColor(COLOR(29,66,138));
ls4.setColor(COLOR(29,66,138));
//


// Menu Hoop
Rectangle Rb576(861,272,56,1);
Rb576.setColor(COLOR(255,255,255));
Rb576.setFill(COLOR(255,255,255));


Rectangle Rb5765(861,262,57,1);
Rb5765.setColor(COLOR(255,255,255));
Rb5765.setFill(COLOR(255,255,255));

Rectangle Rb57651(861,252,58,1);
Rb57651.setColor(COLOR(255,255,255));
Rb57651.setFill(COLOR(255,255,255));

Rectangle Rb576512(861,242,59,1);
Rb576512.setColor(COLOR(255,255,255));
Rb576512.setFill(COLOR(255,255,255));

Rectangle Rb5765121(861,232,60,1);
Rb5765121.setColor(COLOR(255,255,255));
Rb5765121.setFill(COLOR(255,255,255));

// Line Connecting the two Basket Ball Rectangle
Line l1(824,230,832,284);
Line l2(830,230,838,284);
Line l7(836,230,844,284);
Line l8(844,230,852,284);
Line l10(851,230,858,284);

Line L11(859,230,859,284);

Line l3(896,230,888,284);
Line l4(890,230,882,284);
Line l5(880,230,872,284);
Line l9(872,230,862,284);


Rectangle Rb57(862,290,60,8);
Rb57.setColor(COLOR(255,0,0));
Rb57.setFill(COLOR(255,0,0));

// top net
Rectangle Rb55(860,227,74,8);
Rb55.setColor(COLOR(255,0,0));
Rb55.setFill(COLOR(255,0,0));



Rectangle Rb9(906,227,10,10);
Rb9.setColor(COLOR(255,255,255));
Rb9.setFill(COLOR(255,255,255));
// hoop finish


Rectangle rec(500,350,200,240);
rec.setFill("black");
rec.setColor(COLOR(255,165,0));
Rectangle rec1(500,356,180,210);
Text tM(500,250,"      MENU      ");
Text t(500,300,"      PLAY      ");
Text t1(500,350,"     HELP      ");
Text t2(500,400,"     QUIT      ");
int clickAns=getClick();
int clickAns1,x1,y1;
int x=clickAns/65536;
int y=clickAns%65536;
cout<<"X="<<x<<"Y="<<y<<endl;
if((x>=460 && x<=539) && (y>=330 && y<=351))
{ Rectangle Inst(720,610,350,300);
Inst.setFill(COLOR(255,255,255));
Inst.setColor(COLOR(255,255,255));
Rectangle Inst1(720,610,350,300);
Inst1.setFill(COLOR("black"));
Inst1.setColor(COLOR(0,0,0));
Text t5(730,500,"* INSTRUCTIONS *");
Text h1(730,540,"EVERY SHOT COUNTS!!");
Text h2(702,560,"GOAL:TO SHOOT THE BALL IN THE BASKET");
Text h3(702,580,"YOU ARE GIVEN A MAXIMUM OF 3 CHANCES  ");
Text h4(715,600,"TO ACHIEVE YOUR TARGET.ONCE THE MINIMUM ");
Text h5(719,620,"SCORE IS ACHIEVED YOU ENTER THE NEXT LEVEL.");
Text h10(730,640,"LEVEL 1 IS A 2 POINTER.");
Text h11(730,660,"LEVEL 2 IS A 3 POINTER.");
Text h6(715,680,"CONTROL: WITH A CLICK OF THE MOUSE DECIDE ");
Text h7(715,700,"THE RIGHT POSITION TO SHOOT THE BASKETBALL");
Text h8(730,720,"ALL THE BEST");
Text h9(730,750,"CLICK ON PLAY TO START THE GAME");

clickAns1=getClick();
 x1=clickAns1/65536;
 y1=clickAns1%65536;
cout<<"x1= "<<x1<<"y1="<<y1<<endl;


}

if(((x>=462 && x<=540) && (y>=285 && y<=304))|| ((x1>=490 && x1<=510) && (y1>=285 && y1<=304))){

wait(1);

 game();

}

if((x>=464 && x<=540) && (y>=392 && y<=410)){
wait(1);
quit();
}

}
