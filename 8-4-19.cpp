#include <iostream>
using namespace std;
double input (string ohyeah){
    double total;
    cout<<"Input Nilai "<<ohyeah<<" : ";cin>>total;
    return total;}
void grade (double total){
 if(total>80)
    {cout<<total<<endl;cout<<"A"<<endl;}
 else if(total>60)
    {cout<<total<<endl;cout<<"B"<<endl;}
 else if(total>40)
    {cout<<total<<endl;cout<<"C"<<endl;}
 else if(total>20)
    {cout<<total<<endl;cout<<"D"<<endl;}
 else
    {cout<<total<<endl;cout<<"E"<<endl;}}
struct yo{
float u,ua,tu,ab;}y;
main()
{double uts,uas,tugas,absen;
 double total;
 uts=input ("UTS");
 uas=input ("UAS");
 tugas=input ("TUGAS");
 absen=input ("ABSEN");
 y.u=20*uts/100;
 y.ua=30*uas/100;
 y.tu=35*tugas/100;
 y.ab=15*absen/100;
 total=y.u+y.ua+y.tu+y.ab;
 cout<<y.u<<endl;
 cout<<y.ua<<endl;
 cout<<y.tu<<endl;
 cout<<y.ab<<endl;
 grade(total);
}
