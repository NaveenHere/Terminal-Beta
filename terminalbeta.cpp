#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<ctime>
#include<stdlib.h>
#include<windows.h>
#include<fstream>

using namespace std;

int main()
{
string cmd;
string name;
system("Color 0A");
cout<<"Please Enter Your Name:- ";
cin>>name;

string input;
string pass="1234";
cout<<"Enter Password:- "<<endl;
cin>>input;
if(input!=pass)
{
    cout << "Invalid Password.. Try Again:- "<<endl; 
    cin >>input; 
    while (input != pass) 
    cout << "Invalid Password.. Try Again" << endl; 
    cin >>input;
}
else{ 
    cout<<"Password Accepted"<<endl;
    goto up;
}

int a,b,c;
//int n,sum=0;
double d;
up:
Beep(800,1000);
    cin.get();
    // return 0;
cout<<"Welcome "<<name<<endl;
cout<<"WELCOME TO THE K@JU BETA VERSION"<<endl;
cout<<"===================================="<<endl;
cout<<"                                    "<<endl;
list:
cout<<"Terminal/$"<<name<<"/$Command $";
getline(cin,cmd);
if(cmd=="hack"){
    cout<<"enter the victim details"<<endl;
    cin>>a;
    cout<<"Fetching data..../"<<endl;
    cout<<"Access granted successfully.."<<endl;
    cout<<"Now what you want to do with this.."<<endl;
    cout<<"1. Delete \n2. Download all details \n3. Dump all messages"<<endl;
}
if(cmd=="what is your name"){
    cout<<"My name is K@JU"<<endl;
}
if(cmd=="who made you"||cmd=="who created you"||cmd=="who made you"||cmd=="who are you"){
    cout<<"I am K@JU, a virtual terminal assistant."<<endl;
    cout<<"I am in a developement phase."<<endl;
    cout<<"Sir Naveen made me."<<endl;
}
if(cmd=="add")
{
    int n,sum=0;
    cout<<"Enter the a positve value= "<<endl;    
    cin>>n;
    for(int i=0;i<=n;i++){
    sum+=i;
    }
    cout<<"Sum is"<<sum<<endl;
    return 0;
}
if(cmd=="sub")
{
    cout<<"Enter the 1st Value= "<<endl;
    cin>>a;
    cout<<"Enter the 2nd Value= "<<endl;
    cin>>b;
    c=a-b;
    cout<<"Value is"<<c<<endl;
}
if(cmd=="mul")
{
    cout<<"Enter the 1st Value= "<<endl;
    cin>>a;
    cout<<"Enter the 2nd Value= "<<endl;
    cin>>b;
    c=a*b;
    cout<<"Value is"<<c<<endl;
}
if(cmd=="msg"){
    cout<<"I Love U "<<name<<endl;
}
if(cmd=="mod")
{
    cout<<"Enter the 1st Value= "<<endl;
    cin>>a;
    cout<<"Enter the 2nd Value= "<<endl;
    cin>>b;
    c=a%b;
    cout<<"Value is"<<c<<endl;
}
if(cmd=="div")
{
    cout<<"Enter the 1st Value= "<<endl;
    cin>>a;
    cout<<"Enter the 2nd Value= "<<endl;
    cin>>b;
    c=a/b;
    cout<<"Value is"<<c<<endl;
}
if(cmd=="sin")
{
    cout<<"Enter the number to find sine value= "<<endl;
    cin>>d;
    cout<<"sine value is= "<<sin(d)<<endl;
}
if(cmd=="cos")
{
    cout<<"Enter the number to find cosine value= "<<endl;
    cin>>d;
    cout<<"cosine value is= "<<cos(d)<<endl;
}
if(cmd=="sqr")
{
    cout<<"Enter the number to find square root value= "<<endl;
    cin>>d;
    cout<<"square root value is= "<<sqrt(d)<<endl;
}
if(cmd=="fact")
{
int i,fact=1,number;
cout<<"enter the value= "<<endl;
cin>>number;
for(i=1;i<=number;i++)
{
fact=fact*i;
}
cout<<"factorial of"<<number<<"is = "<<fact<<endl;
}
if(cmd=="sysoff")
{
system("c:\\windows\\system32\\shutdown /s");
}
if(cmd=="linuxoff")
{
system("shutdown -P now");
}
if(cmd=="time")
{
// system("Color 0B");
time_t now = time(0);
char* date_time = ctime(&now);
cout<<"The current Date & Time is:- "<<date_time<<endl;
}
if(cmd=="fun")
{
    // system("Color 0E");
    cout<<"============="<<endl;
    cout<<"| _       _ |"<<endl;
    cout<<"| *       * |"<<endl;
    cout<<"|    ||     |"<<endl;
    cout<<"|     @     |"<<endl;
    cout<<"|  |----|   |"<<endl;
    cout<<"============="<<endl;
}

if(cmd=="exit")
{
    cout<<"Good Bye "<<name<<endl;  
    exit(0);
}
if(cmd=="search")
 {
string site;
cout << "Enter Desired site: " << endl;
cin >> site;
string baseUrl;
baseUrl="https://www."+ site +".com/";
 if(site=="youtube")
 {
   cout << "Which Youtube Channel You Want to Search? :- " << endl;
   string username;
   cin >> username;
   		baseUrl="https://www."+ site +".com/results?search_query="+username;

	}
 string completeUrl=baseUrl;
system(std::string("start " + completeUrl).c_str());
	return 0;
 }

if(cmd=="help")
{
    // system("Color 0A");
    cout<<"You can use these Commands"<<endl;
    cout<<"=================="<<endl;
    cout<<"| -->add         |"<<endl;
    cout<<"| -->sub         |"<<endl;
    cout<<"| -->mul         |"<<endl;
    cout<<"| -->div         |"<<endl;
    cout<<"| -->mod         |"<<endl;
    cout<<"| -->sin         |"<<endl;
    cout<<"| -->cos         |"<<endl;
    cout<<"| -->sqr         |"<<endl;
    cout<<"| -->fact        |"<<endl;
    cout<<"| -->sysoff      |"<<endl;
    cout<<"| -->linuxoff    |"<<endl;
    cout<<"| -->time        |"<<endl;
    cout<<"| -->fun         |"<<endl;
    cout<<"| -->exit        |"<<endl;
    cout<<"| -->search      |"<<endl;
    cout<<"| -->hack        |"<<endl;
    cout<<"=================="<<endl;
}
goto list;
return 0;
}