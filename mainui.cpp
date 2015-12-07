// Authors Chiranth , Prasad , Sanjan
#include "main.h"

using namespace std;

int main() {
	system("clear");
	int h, g, i;
	string menu;
	Display a;
	Auth c;
	a.welcome();
	int f = 0;
	c.b = c.Maincheck();
	cin.ignore();
	if (c.b == 0)
	{
		system("clear");
		a.Mainmenu();
	}
	else
	{	
		system("clear");
		a.welcome();
		cout << " \t\t Maxmimum attemps reached !! Exiting " << endl;
		exit(1);		
	}
}
