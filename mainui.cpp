// Authors Chiranth , Prasad , Sanjan
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
	a.welcome();
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
}
