#include "main.h"

using namespace std;

/*int Mainmenu();
void MainRent();
void Goback(string s);

*/
int main() {
	system("clear");
	int h, g, i;
	string menu;
	Display a;
	Auth c;
<<<<<<< HEAD
	a.welcome();
	int f = 0;
	while (f < 3)
=======
	int f = 0;
	while (f < 3)
	{
		c.b = c.Maincheck();
		if (c.b == 0)
		{

			cin.ignore();
			system("clear");
			a.Mainmenu();
		}
		else
		{
			a.welcome();
			cout << " \t\t could not authenticate , please re run " << endl;
		}
		f++;
	}

	//a.welcome();
	//cin.ignore();
	//system("clear");
	//a.Mainmenu();
}
/*
int Mainmenu() {
	Display a;
	int g, h, i;
	system("clear");
	a.dismainmenu("Main Menu");
	cout << " \n\t\t choose an option ";
	cin >> h;
	if ( cin.good() == true )
>>>>>>> 4535f53d5eab78c686d79e668bbb44298939fc48
	{
		c.b = c.Maincheck();
		if (c.b == 0)
		{

			cin.ignore();
			system("clear");
			a.Mainmenu();
		}
		else
		{
			a.welcome();
			cout << " \t\t could not authenticate , please re run " << endl;
		}
		f++;
	}
}
/*
int Mainmenu() {
Display a;
int g, h, i;
system("clear");
a.dismainmenu("Main Menu");
cout << " \n\t\t choose an option ";
cin >> h;
if ( cin.good() == true )
{
system(" clear");
do {
switch (h)
{
case 1:
MainRent();
break;
default:
cout << cyan << " \t\t Please provide an input " << endl;
cin.ignore();
Mainmenu();
break;
}
} while (!h);
cin.ignore();
system("clear");
}
else
{
//system("clear");
cout << endl;
cout << cyan << " \t\t Please enter an Integer value " << endl;
cin.ignore();
cin.ignore();
//Mainmenu();
return main();

}


}
void MainRent() {

Display a;
int g;
a.disrent("Main Menu --> Rent ");
cout << " \n\t\t choose an option : ";
cin >> g;
system("clear");
switch (g)
{

case 1:
Goback("Main Menu --> Rent --> Rec");
break;

case 2:
break;

default:
cout << " \t\t please provide an input " << endl;
cin.ignore();
cin.ignore();
system("clear");
}
cin.ignore();
cout << reset;

}
void Goback(string s) {

int i;
Display a;
a.disrentrec(s);

cout << " \t\t choose an option : ";
cin >> i;
system(" clear");
if (i == 1)
{
MainRent();
}
else
{
Mainmenu();
}
}
*/

