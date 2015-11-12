#include "main.h"

using namespace std;

int main (){
	system("clear");
	int h,g,i;
	string menu;
	Display a;
	
	a.welcome();
	cin.ignore();
ch1:	system("clear");

	a.dismainmenu(" Main Menu");
	cout << " choose an option " << endl;
	cin>> h;
	system (" clear");
	switch (h)
	{
	case 1:
welc:		a.disrent(" Main Menu --> Rent " );
		cout << " choose an option " << endl;
	        cin>> g;
		system("clear");
		if (g==1)
		{
			a.disrentrec(" Main Menu --> Rent --> Rec");
			cout << " choose an option " <<  endl;
			cin >> i;
			system ( " clear");
			if ( i == 1)
			{
				goto welc;
			}
			else
			{
				goto ch1;
			}
			
		}
		else{
		//a.disrentnrec
		}
		cin.ignore();
		cout << reset;
		break;
	default:
		cout << cyan << " Please provide an input " << endl;
		cin.ignore();
		cin.ignore();
		goto ch1;
		break;
	}
	cin.ignore();
	system("clear");


}		 
