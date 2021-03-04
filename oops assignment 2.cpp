// Parmeshwar Gupta 191920 B.tech CSE 4th Semester
#include<iostream>
using namespace std;
class power
{
private:
double result=1;
public:
void setpower(double m,int n)
{
for(int i=1;i<=n;i++)
{
result=result*m;
}
}
double display()
{
return result;
}
};
int main()
{
double base;
int pwr=2;
cout<<"Enter the value:";
cin>>base;
cout<<"Enter the power value:";
cin>>pwr;
power calpower;
calpower.setpower(base,pwr);
cout<<calpower.display();
}
