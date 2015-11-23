#include <iostream> 
#include <string> 

using namespace std;


class signin{
private:
 username,password;
public:
  signin(userid,pass){username=userid,password=pass}

















};






}

int main()
{
  signin ();
	const string USERNAME = "sanjan";
	const string PASSWORD = "123456";
	 
	string username, password;

	
	cout << "Enter Username : ";
	cin >> username;

	
	if(username.length() < 4)
	{
		cout << "Username length must be atleast 4 characters long.";
	}
	else  
	{
	
		cout << "Enter Password : ";
		cin >> password;
	
		if(password.length() < 6 )
		{
			cout << "Password length must be atleast 6 character long.";
		}
                
		else 
      		{
					if(username == USERNAME && password == PASSWORD)
			{
				cout << "matches" << endl;
			}
			else
			{
                               f(USERNAME,PASSWORD);
				
			}
		}
	}

	return 0;
}







