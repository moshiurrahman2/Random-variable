#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

CapitalAlphabate()
{

srand(time(0));
char cAlphabate[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string c = "";
for(int i=0; i<1; i++)
    {
    c+=cAlphabate[rand()%26];
}
cout<<c;
}

SmallAlphabate()
{
    char sAlphabate[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s = "";
for(int i=0; i<5; i++)
    {
    s+=sAlphabate[rand()%26];
}
cout<<s;
}

RandomNumber()
{
    for (int i=0; i<1; i++)
    {
        cout<<(rand()%10);
    }
}

SpecialCharacter()
{
    char sCharacter[4]={'!','@','#','$'};
    string x="";
    for (int i =0; i<1; i++)
    {
        x+=sCharacter[rand()%4];
    }
    cout<<x;
}

int main()
{
   CapitalAlphabate();
   SmallAlphabate();
   RandomNumber();
   SpecialCharacter();
}
