
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
using namespace std;


class ticket{
	public:
	char name[10];
	char cno[10];
} t;


class card :  public ticket{
public:
	char address[50];
	char emailid[20];
} v;


void pay(int);
void random();
void card();

int main(){
	system("CLS");

	int ent, a, b, N, x, cardid;
	char ans;


	do{

		cout<<"----------------------------------"<<endl;
		cout<<" Simple Movie Ticket Booking System"<<endl;
		cout<<"----------------------------------"<<endl;
		cout<<"Welcome Customer!"<<endl;
		cout<<" <1> Movie Timings"<<endl;
		cout<<" <2> Receiving Ticket"<<endl;
		cout<<" <3> For Information"<<endl;
		cout<<" <4> DTCard Registration"<<endl;
		cout<<" <5> Exit   "<<endl;
		cout<<" ********<Do not choose any Invalid Option>********"<<endl;
		cout<<" Enter Your Choice :"<<"\t"<<endl;
		cin>>ent;
	switch(ent)
	{

		case 1:
		system("CLS");
		cout<<" The Shows are :";
			cout<<"  1. Avengers: Infinity War"<<endl;
			cout<<"  2. Antman And The Wasp"<<endl;
			cout<<"  3. Deadpool 2"<<endl;
			cout<<"  4. Venom"<<endl;
			cout<<"  5. Captain Marvel "<<endl;
			cout<<" ********<Do not choose any Invalid Option>********"<<endl;
			cout<<" Enter Your Choice :"<<"\t"<<endl;
			cin>>a;
			cout<<"  The Timings for the selected show are:"<<endl;
			switch(a)
			{
				case 1:
					system("CLS");
				 cout<<"  Select the the timings: "<<endl;
					cout<<"  1. 0800"<<endl;
					cout<<"  2. 1300"<<endl;
					cout<<"  3. 1450"<<endl;
					cout<<"  4. 1800"<<endl;
					cout<<"  5. 2100"<<endl;
					cout<<"  6. 0100  "<<endl;
					cout<<" ********<Do not choose any Invalid Option>********"<<endl;
					cout<<"  Please select the timings: "<<endl;
					cin>>b;
					cout<<"  Enter your name: "<<endl;
					cin>>t.name;
					cout<<"  Enter your contact number: "<<endl;
					cin>>t.cno;
					cout<<"  Enter the number of tickets you want to purchase: "<<endl;
					int x;
					cin>>x;
					pay(x);
					cout<<"   Your ticket is here: "<<endl;
					cout<<"  Name 		:"<<t.name<<endl;
					cout<<"  Contact No	:"<<t.cno<<endl;
					cout<<"  Show timings 	:"<<endl;
					switch(b)
						{
							case 1:	cout<<"0800"<<endl;
								break;
							case 2:	cout<<"1300"<<endl;
								break;
							case 3:	cout<<"1450"<<endl;
								break;
							case 4:	cout<<"1800"<<endl;
								break;
							case 5:	cout<<"2100"<<endl;
								break;
							case 6:	cout<<"0100"<<endl;
								break;
						}
						cout<<"  Do you want to choose another option(y/n)"<<endl;
						cin>>ans;
						system("CLS");
						break;
				case 2:
				system("CLS");
				cout<<" Select the the timings:"<<endl;
					cout<<"  1. 0900"<<endl;
					cout<<"  2. 1100"<<endl;
					cout<<"  3. 1250"<<endl;
					cout<<"  4. 1500"<<endl;
					cout<<"  5. 2000"<<endl;
					cout<<"  6. 2200"<<endl;
					cout<<" ********<Do not choose any Invalid Option>********"<<endl;
					cout<<"  Please select the timings: "<<endl;
					cin>>b;
					cout<<"  Enter your name: "<<endl;
					cin>>t.name;
					cout<<"  Enter your contact number: "<<endl;
					cin>>t.cno;
					cout<<"  Enter the number of tickets you want to purchase: "<<endl;
					cin>>x;
					pay(x);
					cout<<"  Your ticket is here:"<<endl;
					cout<<"  Name 		:"<<t.name;
					cout<<"  Contact No	:"<<t.cno;
					cout<<" Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800"<<endl;
								break;
							case 2:	cout<<"1300"<<endl;
								break;
							case 3:	cout<<"1450"<<endl;
								break;
							case 4:	cout<<"1800"<<endl;
								break;
							case 5:	cout<<"2100"<<endl;
								break;
							case 6:	cout<<"0100"<<endl;
								break;
					}
					cout<<"  Do you want to choose another option(y/n)"<<endl;
					cin>>ans;
					system("CLS");
					break;
				case 3:
				system("CLS");
				cout<<" Select the the timings:";
					cout<<"  1. 0800"<<endl;
					cout<<"  2. 1300"<<endl;
					cout<<"  3. 1450"<<endl;
					cout<<"  4. 1800"<<endl;
					cout<<"  5. 2100"<<endl;
					cout<<"  6. 0100"<<endl;
					cout<<" ********<Do not choose any Invalid Option>********"<<endl;
					cout<<"  Please select the timings"<<endl;
					cin>>b;
					cout<<"  Enter your name: "<<endl;
					cin>>t.name;
					cout<<"  Enter your contact number: "<<endl;
					cin>>t.cno;
					cout<<" Enter the number of tickets you want to purchase: "<<endl;
					cin>>x;
					pay(x);
					cout<<"  Your ticket is here: "<<endl;
					cout<<"  Name 		:"<<t.name<<endl;
					cout<<"  Contact No	:"<<t.cno<<endl;
					cout<<"  Show timings 	:"<<endl;
					switch(b)
					{
							case 1:	cout<<"0900"<<endl;
								break;
							case 2:	cout<<"1300"<<endl;
								break;
							case 3:	cout<<"1450"<<endl;
								break;
							case 4:	cout<<"1800"<<endl;
								break;
							case 5:	cout<<"2100"<<endl;
								break;
							case 6:	cout<<"0100"<<endl;
								break;
					}
					cout<<"  Do you want to choose another option(y/n)"<<endl;
					cin>>ans;
					system("CLS");
					break;
				case 4:
				system("CLS");
				cout<<" Select the the timings: "<<endl;
					cout<<"  1. 0800"<<endl;
					cout<<"  2. 1300"<<endl;
					cout<<"  3. 1450"<<endl;
					cout<<"  4. 1800"<<endl;
					cout<<"  5. 2100"<<endl;
					cout<<"  6. 0100"<<endl;
					cout<<" ********<Do not choose any Invalid Option>********"<<endl;
					cout<<"  Please select the timings: "<<endl;
					cin>>b;
					cout<<"  Enter your name: "<<endl;
					cin>>t.name;
					cout<<"  Enter your contact number: "<<endl;
					cin>>t.cno;
					cout<<"  Enter the number of tickets you want to purchase: "<<endl;
					cin>>x;
					pay(x);
					cout<<"  Your ticket is here: "<<endl;
					cout<<"  Name 		:"<<t.name<<endl;
					cout<<"  Contact No	:"<<t.cno<<endl;
					cout<<"  Show timings 	:"<<endl;
					switch(b)
					{
							case 1:	cout<<"0800"<<endl;
								break;
							case 2:	cout<<"1300"<<endl;
								break;
							case 3:	cout<<"1450"<<endl;
								break;
							case 4:	cout<<"1800"<<endl;
								break;
							case 5:	cout<<"2100"<<endl;
								break;
							case 6:	cout<<"0100"<<endl;
								break;
					}
						cout<<"  Do you want to choose another option(y/n)"<<endl<<endl;
						cin>>ans;
						system("CLS");
						break;
				case 5:
				system("CLS");
				cout<<" Select the the timings:"<<endl;
					cout<<"  1. 0800"<<endl;
					cout<<"  2. 1300"<<endl;
					cout<<"  3. 1450"<<endl;
					cout<<"  4. 1800"<<endl;
					cout<<"  5. 2100"<<endl;
					cout<<"  6. 0100"<<endl;
					cout<<"  Please select the timings: "<<endl;
					cin>>b;
					cout<<"  Enter your name: "<<endl;
					cin>>t.name;
					cout<<"  Enter your contact number: "<<endl;
					cin>>t.cno;
					cout<<"  Enter the number of tickets you want to purchase: "<<endl;
					cin>>x;
					pay(x);
					cout<<"    Your ticket is here: "<<endl;
					cout<<"  Name 		:"<<t.name<<endl;
					cout<<"  Contact No	:"<<t.cno<<endl;
					cout<<"  Show timings 	:"<<endl;
					switch(b)
					{
							case 1:	cout<<"0800"<<endl;
								break;
							case 2:	cout<<"1300"<<endl;
								break;
							case 3:	cout<<"1450"<<endl;
								break;
							case 4:	cout<<"1800"<<endl;
								break;
							case 5:	cout<<"2100"<<endl;
								break;
							case 6:	cout<<"0100"<<endl;
								break;
					}
					cout<<"  Do you want to choose another option(y/n)"<<endl;
					cin>>ans;
					system("CLS");
					break;

			}break;
		case 2:	system("CLS");
				cout<<"  Thank you for booking the tickets online  \n To print out the tickets please enter your transaction ID in the portal"<<endl;
				struct pre
				{
				int trsnid;
				char name[10];
				} p;
				cout<<"  Enter your transaction id \n (Eg.last five digits of the transaction id) "<<endl;
				cin>>p.trsnid;
				cout <<"Enter your name"<<endl;
				cin>>p.name;
				cout<<"Sorry to say that but you will need to get the print out of the booking because our database shows no booking by this name"<<endl;
				cout<<"  Do you want to choose another option(y/n)"<<endl;
				cin>>ans;
				system("CLS");
				break;
		case 3: system("CLS");
				cout<<"For further information about movies you can download our Application(from the  Google Play Store or from the iOS App Store) or contact us at 01234567896523"<<endl;
				cout<<"  Do you want to choose another option(y/n)"<<endl;
				cin>>ans;
				system("CLS");
				break;
		case 4: system("CLS");
				cout<<"Good Morning/Evnening   Welcome to start a new journey with our cinemas  "<<endl;
				card();
				cout<<"Thankyou.  \n It will take us a week for completing your registration for the card.  \n Please see the benefits of the card on the next page. -->"<<endl;
				char f;
				cout<<"  For selecting the page to go to benefits say (y/n) "<<endl;
				cin>>f;
				if(f=='y')
				{
					cout<<"Thank you for registration once again   The priveleges provided with this card are as follows:"<<endl;
					cout<<"  1. For every purchase of a movie ticket you get 25 points(1 point = 100BDT.) so after 16 movies you get a free movie ticket."<<endl;
					cout<<"  2. You are provided with regular updates regarding the movie and the show timings."<<endl;
					cout<<"  3. Anytime prebook tickets for the upcoming movie and preferred seats will be provided."<<endl;
				}
				cout<<"  Do you want to choose another option(y/n)"<<endl;
				cin>>ans;
				if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
				break;
		case 5:
		system("CLS");
		system("PAUSE");
		exit(0);
				break;
	}
	}while(ans=='y');
	}

void card()
{
	int cardid;
	cout<<"\t\t\t\tWelcome to register for card facility in our cinemas"<<endl;
	cout<<"   Enter your name: "<<endl;
	cin>>v.name;
	cout<<"\t\t\t\tEnter your mobile number: "<<endl;
	cin>>v.cno;
	cout<<"\t\t\t\tEnter the address: "<<endl;
	gets(v.address);
	cout<<"\t\t\t\tEnter the mail id: "<<endl;
	gets(v.emailid);
	system("CLS");
	int ID;
	srand (time(NULL));
	ID = rand() % 400000 + 4000000;
	if (ID<0)
	ID=(ID*-1);
	cout<<"\t\t\t\tYour new card number is - :" <<"\t"<<ID<<endl;
	fstream fout;
	fout.open("card.dat", ios::out|ios::app);
	fout<<"  Name :"<<v.name<<" "<<"  Mobile No. :"<<v.cno<<" "<<"  Address :"<<v.address<<" "<<"  Mail ID :"<<v.emailid<<" "<<" Card Number:"<<ID;
	fout.close();
	cout<<"\t\t\t\tThank you for the registration for the card.  "<<endl;
}


void pay(int a)
{
	int normal, gold, amt[2],id;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("card.dat", ios::in|ios::app);
	fin>>id;
	cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating   1.Normal Class   OR   2. Gold Class"<<endl;
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<" You selected for a Normal show  "<<endl;
		system("PAUSE");
		system("CLS");
		amt[1] = a * 400;
		char final;
		cout<<"  Do you have DTcard(y/n): "<<endl;
		cin>>final;
		if(final=='y')
		{
			int cid;
			fin.read((char*) &v, sizeof(v));

			cout<<" Enter the card number[10 digits]: "<<endl;

			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<" Want to pay by Card(y/n): "<<endl;
		char rep;
		cin>>rep;
		cout<<" "<<"Paying :"<<amt[1]<<" ";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: "<<endl;
			char n[10];
			gets(n);
			cout<<" Enter the card number: "<<endl;
			char Card[16];
			gets(Card);
			cout<<"\t\t\t\tExpiry(MM/YYYY)"<<endl;
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\t\t\t\t/"<<endl;
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\t\t\t\tEnter the month again: "<<endl;
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\t\t\t\tPlease enter a valid year: "<<endl;
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
		}
	}
	else
	{
		cout<<" You selected for the Gold Class  "<<endl;
			system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		char final;
		cout<<" Do you have Debit card(y/n): "<<endl;
		cin>>final;
		if(final=='y')
		{
			int cid;
			cout<<" Enter the card id number: "<<endl;
			cin>>cid;
			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<" Want to pay by Card(y/n): "<<endl;
		char rep;
		cin>>rep;
		cout<<" "<<"Paying :"<<amt[2]<<" ";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: "<<endl;
			char n[10];
			gets(n);
			cout<<" Enter the card number: ";
			char Card[16];
			gets(Card);
			cout<<" Expiry(MM/YY): ";
			int expirymm, expiryyy;
			cin>>expirymm;
			cout<<" /";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<" Enter the month again: "<<endl;
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<" Please enter a valid year: "<<endl;
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts(" Enter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
			}
	};
}




