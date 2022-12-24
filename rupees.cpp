#include<iostream>
using namespace std;
main()
{
float coinv;
float coinf;
float kgv;
float kgf;
float vegamount;
float fruitamount;
float totalamount;
float amountinrupees;
float rp=1.94;
cout<<"Enter vegetable price per kilograms ";
cin>>coinv;
cout<<"Enter fruit price per kilograms ";
cin>>coinf;
cout<<"Enter total kilograms of vegetables sold ";
cin>>kgv;
cout<<"Enter total kilograms of fruits sold ";
cin>>kgf;
vegamount=coinv*kgv;
fruitamount=coinf*kgf;
totalamount=vegamount+fruitamount;
cout<<"The total amount you earned in coins is "<<totalamount<<endl;
amountinrupees=totalamount*rp;
cout<<"The total amount you earned in rupees is "<<amountinrupees<<endl;
}