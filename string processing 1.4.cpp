#include<iostream>
#include<cstring>
using namespace std;
char text[30],newtext [30],temp [30];
int i;

void  SUBSTRING(string s,int k, int l)
{
    int j;
    for( j=k; j<l; i++,j++)
    {
        temp[i]=s[j];
    }

}
int len (string str)
{
    int ck=0,i=0;
    while(str[i]!='\0')
    {
        ck++;
        i++;
    }
    return ck;
}
void DELETE (string  str,int pos,int length)
{
  int x=len(str);
    SUBSTRING(str,0,pos);
    SUBSTRING(str,pos+length,x);
        temp[i]='\0';
}


int main()
{
    DELETE("AAABBB",2,2);
    for(int i=0;temp[i]!='\0';i++)cout<<temp[i];
    i=0;
cout<<endl;
        DELETE("JOHN PAUL JONES",6,5);
    for(int i=0;temp[i]!='\0';i++)cout<<temp[i];


}
