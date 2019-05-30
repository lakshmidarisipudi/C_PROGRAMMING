#include<iostream.h>
#include<typeinfo.h>
#include<string.h>
int main()
{
int var1=25;
float var2=14.5;
double var3=17.4;
char var4='z';
boolean var5=true;
string s1=typeid.(var1).name();
string s2=typeid.(var5).name();
if((s1=="i"||s1=="f"||s1=="d")&&(s2=="i"||s2=="f"||s2=="d"))
{
cout<<"both data types are compatable for multiplication"<<endl;
cout<<"product is"var1*var2<<endl;
}
else
cout<<"both data types are not compatable for multiplication";
return 0;
}
