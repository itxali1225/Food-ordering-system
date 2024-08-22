#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
// Functions declaration
void signUp();
void signIn();
void Menu();
//global variables
string name,emailid,password,contactNo,emailidForlogin,passwordForLogin;
int age;
//class
class FoodOrderingSysteam{
	private:
		
		
	public:
	//constructor
	FoodOrderingSysteam()
	{
		
	}
	//functions
	
void front()
	{
	cout<<"\t================================================"<<endl;
    cout<<"\t==                                            =="<<endl;
    cout<<"\t==            FOOD ORDERING SYSTEM            =="<<endl;
    cout<<"\t==                                            =="<<endl;
    cout<<"\t================================================"<<endl;
	}	
	
	
void signUp()
    {
    
    ofstream obj1;
    obj1.open("signUpFile");
    cout<<"\n\n\t Enter your Name : ";
    cin>>name;
    //getline(cin,name);
    cout<<"\n\n\t Enter your Age : ";
    cin>>age;
    cout<<"\n\n\t Enter your contact Number : ";
    cin>>contactNo;
	//getline(cin,contactNo);
    cout<<"\n\n\t Enter your Email Id : ";
    cin>>emailid;
	//getline(cin,emailid);
    cout<<"\n\n\t Enter Password ( you can't enter space in your password ) : ";
    cin>>password;
	//getline(cin,password);
    cout<<"\n\n\t Remember:- your Password is : "<<password<<endl<<endl<<endl;
  	obj1<<name<<endl;
  	obj1<<age<<endl;
  	obj1<<contactNo<<endl;
  	obj1<<emailid<<endl;
  	obj1<<password<<endl;
  	obj1.close();
  	cout<<"\n\n\t SIGN UP SUCCESSFUL...!"<<endl<<endl;
	}	
	
		
		
void signIn()
    {
    char data[100];
    label11:
    system("cls");
    front();
    cout<<"\n\n\tEnter your Email id : ";
    cin>>emailidForlogin;
    cout<<"\n\n\tEnter your password : ";
    cin>>passwordForLogin;
    ifstream obj2;
    obj2.open("signUpFile");
    while(!obj2.eof())
    {
    obj2>>data;
    if(data==emailidForlogin)
    {
    obj2.close();
    ifstream obj3;
    obj3.open("signUpFile");
    while(!obj3.eof())
    {
    obj3>>data;
    if(data==passwordForLogin)
    {
    system("cls");
    front();
    cout<<"\n\n\tLOG IN SUCCESSFUL...!"<<endl<<endl<<endl;
    system("pause");
	obj3.close();
	Menu();	
	}
	}
	obj3.close();
	system("cls");
    front();
	cout<<"\n\n\tSORRY your Passwoed is incorrect.\n\n\tPlease Try Again...!"<<endl<<endl<<endl;
	system("pause");
	goto label11;	
	}
	}
	obj2.close();
	system("cls");
    front();
	cout<<"\n\n\tSORRY your Email id is incorrect.\n\n\tPlease Try Again...!"<<endl<<endl<<endl;
	system("pause");
	goto label11;
	}		
		
//Menu function
void Menu()
    {
    
    int foodChoice,pizzaChoice,fastFoodChoice,BurgerChoice,pizzaPrice,burgerPrice,chineseFoodChoice,chineseFoodprice;
    int desiFoodChoice,BiryaniChoice,Biryaniprice,Chickenchoice,Chickenprice,Beefchoice,Beefprice;
    label2:
	system("cls");
	front();
    cout<<"\n\n\t1: Fast Food "<<endl;
    cout<<"\n\t2: Chinese Food "<<endl;
    cout<<"\n\t3: Desi Food "<<endl;
    cout<<"\n\t4: EXIT "<<endl;
    cout<<"\n\n\tEnter your choice : ";
    cin>>foodChoice;
    
// fast food portion    
    if(foodChoice==1)
    {
    system("cls");
    front();
    cout<<"\n\n\t1: Pizza "<<endl;
    cout<<"\n\t2: Burger "<<endl;
    cout<<"\nEnter your choice : ";
    cin>>fastFoodChoice;
    label3:
// pizza portion
    if(fastFoodChoice==1)
    {
    label4:
    system("cls");
    front();
    cout<<"\n\n\tPlease select PIZZA size."<<endl<<endl;
    cout<<"\t1: Small size  [ price 400  ] "<<endl;	
    cout<<"\t2: Medium size [ price 800  ] "<<endl;	
    cout<<"\t3: Large size  [ price 1200 ] "<<endl;
    cout<<"\t4: Back "<<endl;
    cout<<"\n\tEnter your choice : ";
    cin>>pizzaChoice;
    if(pizzaChoice==1)
    {
    system("cls");
    front();
    pizzaPrice=400;	
    cout<<"\n\n\tYour order is Small PIZZA & your Bill is "<<pizzaPrice;
	}
	else if(pizzaChoice==2)
	{
	system("cls");
    front();
	pizzaPrice=800;
    cout<<"\n\n\tYour order is Medium PIZZA & your Bill is "<<pizzaPrice;
    cout<<"\n\n\tTHANK YOU FOR COMING...! "<<endl<<endl<<endl;
    system("pause");	
	}
	else if(pizzaChoice==3)
	{
	system("cls");
    front();
	pizzaPrice=1200;	
	system("cls");	
    cout<<"\n\n\tYour order is Large PIZZA & your Bill is "<<pizzaPrice;
    cout<<"\n\n\tTHANK YOU FOR COMING...! "<<endl<<endl<<endl;
    system("pause");	
	}
	else if(pizzaChoice==4)
	{
	goto label2;
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label4;
	}
//  burger portion
	}
	else if(fastFoodChoice==2)
	{
	label5:
	system("cls");
    front();
    cout<<"\n\n\tPlease select BURGER type."<<endl<<endl;
    cout<<"\t1: Chicken Burger   [ price 200 ] "<<endl;	
    cout<<"\t2: Vegitable Burger [ price 100 ] "<<endl;	
    cout<<"\t3: Mix Burger       [ price 150 ] "<<endl;
    cout<<"\t4: Back "<<endl;
    cout<<"\n\tEnter your choice : ";
    cin>>BurgerChoice;
    if(BurgerChoice==1)
    {
    system("cls");
    front();
    burgerPrice=200;
    system("cls");
	cout<<"\n\n\tYour order is CHICKEN BURGER & your Bill is : "<<burgerPrice;
	cout<<"\n\n\tTHANK YOU FOR COMING...!"<<endl<<endl<<endl;
	system("pause");
		
	}
	else if(BurgerChoice==2)
	{
	system("cls");
    front();
	burgerPrice=100;
	system("cls");
	cout<<"\n\n\tYour order is VEGITABLE BURGER & your Bill is : "<<burgerPrice;
	cout<<"\n\n\tTHANK YOU FOR COMING...!"<<endl<<endl<<endl;
	system("pause");
	}
	else if(BurgerChoice==3)
	{
	system("cls");
    front();
	burgerPrice=150;
	system("cls");
	cout<<"\n\n\tYour order is MIX BURGER & your Bill is : "<<burgerPrice;
	cout<<"\n\n\tTHANK YOU FOR COMING...!"<<endl<<endl<<endl;
	system("pause");
	}
	else if(BurgerChoice==4)
	{
	goto label2;
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label5;
	}	
		
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label3;
	}
    	
	}
	
// chinese food portion	
	else if(foodChoice==2)
	{
	label6:
	system("cls");
    front();
	cout<<"\n\n\t1:  Nodles [ price 150 ]";
	cout<<"\n\n\t2:  soap   [ price 200 ]"<<endl;
	cin>>chineseFoodChoice;
	if(chineseFoodChoice==1)
	{
	system("cls");
    front();
	chineseFoodprice=150;	
		
	}
	else if(chineseFoodChoice==2)
	{
	system("cls");
    front();
	chineseFoodprice=200;	
		
	}
	else if(chineseFoodChoice==3)
	{
	goto label2;	
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label6;	
	}	
	}
	
// desi food portion 	
	else if(foodChoice==3)
	{
	label7:
	system("cls");
    front();
    cout<<"\n\n\t1: Biryani ";
    cout<<"\n\n\t2: chicken Karahi ";
    cout<<"\n\n\t3: Beef Karahi  ";
    cout<<"\n\n\t4: Back  ";
    cin>>desiFoodChoice;
    if(desiFoodChoice==1)
    {
    label8:
    system("cls");
    front();
    cout<<"\n\n\t1: Half [ 100 ]";	
	cout<<"\n\n\t2: Full [ 200 ] ";
	cout<<"\n\n\t3: Back ";
	cin>>BiryaniChoice;
    if(BiryaniChoice==1)
	{
	system("cls");
    front();
	Biryaniprice=100;
	
		
	}
	else if(BiryaniChoice==2)
	{
	system("cls");
    front();
	Biryaniprice=200;
		
		
	}
	else if(BiryaniChoice==3)
	{
	goto label7;
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label8;	
	}
	}
	else if(desiFoodChoice==2)
	{
	label9:	
	system("cls");
    front();
    cout<<"\n\n\t1: Half [ 400 ]";	
	cout<<"\n\n\t2: Full [ 750 ] ";
	cout<<"\n\n\t3: Back ";
	cin>>Chickenchoice;
    if(Chickenchoice==1)
	{
	system("cls");
    front();
	Chickenprice=400;
	
		
	}
	else if(Chickenchoice==2)
	{
	system("cls");
    front();
	Chickenprice=750;
		
		
	}
	else if(Chickenchoice==3)
	{
	goto label7;
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label9;	
	}	
	}
	else if(desiFoodChoice==3)
	{
	label10:	
	system("cls");
    front();
    cout<<"\n\n\t1: Half [ 400 ]";	
	cout<<"\n\n\t1: Full [ 750 ] ";
	cout<<"\n\n\t3: Back ";
	cin>>Beefchoice;
    if(Beefchoice==1)
	{
	system("cls");
    front();
	Beefprice=400;
	
		
	}
	else if(Beefchoice==2)
	{
	system("cls");
    front();
	Beefprice=750;
		
		
	}
	else if(Beefchoice==3)
	{
	goto label7;
	}
	else
	{
    system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label10;	
	}	
	}
	else if(desiFoodChoice==4)
	{
	goto label2;	
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...!"<<endl<<endl<<endl;
	system("pause");
	goto label7;	
	}
	}
	else if(foodChoice==4)
	{
	system("cls");
    front();
	cout<<"\n\n\tTHANK YOU FOR COMING...! "<<endl;
	system("pause");
	//exit();	
	}
	else
	{
	system("cls");
    front();
	cout<<"\n\n\tINVALID INPUT...! "<<endl<<endl<<endl;
	system("pause");
	goto label2;
	}
	
	}
};

//main function
int main()
{
	FoodOrderingSysteam obj;
	int loginChoice;
	label1:
	system("cls");
    obj.front();
	cout<<"\n\n\t1:- Sign Up\n\n\t2:- Sign In\n\n\t3: Exit\n\n\tEnter your choice : ";
	cin>>loginChoice;
	if(loginChoice==1)
	{
	system("cls");
	obj.front();	
	obj.signUp();
	system("pause");
	system("cls");
	obj.front();
	obj.Menu();
		
	}
	else if(loginChoice==2)
	{	
	obj.signIn();
	}
	else if(loginChoice==3)
	{
	system("cls");
	obj.front();
	cout<<"\n\n\tTHANK YOU FOR COMING...! "<<endl<<endl;		
	}
	else
	{
	system("cls");
	obj.front();
	cout<<"\n\nInvalid Input...!"<<endl<<endl;
	system("pause");
	goto label1;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
