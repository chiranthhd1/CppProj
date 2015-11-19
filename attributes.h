#ifndef _ATTRIBUTES_H
#define _ATTRIBUTES_H

#include <iostream>
#include <string>
#include "color.h"
#include <cstdlib>
#include <cmath>


using namespace std;

class Auth {
public:
	string USERNAME;
	string PASSWORD;// = "123456";
	string username, password;
	Auth(string USER = "sanjan", string PASS = "123456") : USERNAME(USER), PASSWORD(PASS) {}
	int a, b;
	int Usepwdcheck();
	int Maincheck();
};


class Attribute {

	string username, statement;
	double rent, carloan, elecgas, phone, insurance, groceries, commute, misc, rflag, threshold;

public:
	
	Attribute(double  r = 1000, double c = 400, double  e = 100, double p = 50, double  i = 800, double  g = 100, double co = 150, 
double  m = 400, double rf = 0, double  t = 1000) : rent(r), carloan(c), elecgas(e), phone(p), insurance(i), groceries(g), commute(co), misc(m), rflag(rf), threshold(t) {}


public:
	double ew;
	string GetUsername();
	void SetUsername();
	double SetRent(int a);
	double SetCarLoan(int a);
	double SetElecGas(int a);
	double SetPhone(int a);
	double SetInsurance(int a);
	double SetGroceries(int a);
	double SetCommute(int a);
	double SetMisc(int a);

	
	double GetRent();
	double GetCarLoan();
	double GetElecGas();
	double GetPhone();
	double GetInsurance();
	double GetGroceries();
	double GetCommute();
	double GetMisc();
	string GetStatement();
	double GetRecFlag();
	double GetThreshold();
	
	
	double CalRent();
	double CalCarLoan();
	double CalElecGas();
	double CalPhone();
	double CalInsurance();
	double CalGroceries();
	double CalCommute();
	double CalMisc();


};

class Display {
public:
	void welcome();
	void top(string s);
	void dismainmenu(string s);
	void disrent(string s);
	void DisGoback();
	void disviewoedit();
	void Time();
	int Mainmenu();
	int MainRent();
	int MainCarLoan();
	int MainInsurance();
	int MainGroceries();
	int RentGoback();
	int CarLoanGoback();
	int InsuranceGoback();
	int GroceriesGoback();
	void disrentrec(string s);
	void disrentnonrec(string s);

};

#endif
