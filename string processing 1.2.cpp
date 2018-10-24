#include<iostream>
#include<cstdio>
using namespace std;

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
void insert(string text,int position,string str)
{
    char strcpy[100];
    int s=len(str);
    int j=0,i;
    for(i=0; i<position-1; i++)
    {
        strcpy[i]=text[i];
    }

    for( i=position-1; j<s; i++,j++)
    {
        strcpy[i]=str[j];
    }
    j=position;
    for(; text[j]!='\0'; i++,j++)
    {
        strcpy[i]=text[j];
    }

strcpy[i]='\0';
    for(int i=0;strcpy[i]!='\0';i++)cout<<strcpy[i];
    cout<<endl;

}


int main()
{
    insert("AAAAA",1,"BBB");
   insert("AAAAA",3,"BBB");
    insert("AAAAA",6,"BBB");
    return 0;
}
