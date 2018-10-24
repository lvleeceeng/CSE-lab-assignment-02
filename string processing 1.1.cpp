#include<iostream>
using namespace std;
int index(string str,string sub)
{
    int ck=1;
    for(int i=0; str[i]!='\0'; i++)
    {
        int j=0;
        if(str[i]==sub[j])
        {
            int k=i+1;
            for( j=1; sub[j]!='\0'; j++)
            {
                if(str[k]!=sub[j])
                {
                    ck=0;
                    break;
                }
                // break;
                else
                    ck=1;
                k++;
            }
            if(ck==1)
            {
                return i+1;
            }
        }
    }
    return 0;
}
int  main()
{
    string sub;
    string str="JOHN PAUL JONES";
    string str1="A THING OF BEAUTY IS A JOY FOREVER";


    cout<<"In string  1 :"<<index(str,"JO")<<endl;
    cout<<"In string  2 :"<<index(str1,"JO")<<endl;

        cout<<"In string  1 :"<<index(str,"JOY")<<endl;
    cout<<"In string  2 :"<<index(str1,"JOY")<<endl;

        cout<<"In string  1 :"<<index(str,"A")<<endl;
    cout<<"In string  2 :"<<index(str1,"A")<<endl;

        cout<<"In string  1 :"<<index(str,"THE")<<endl;
    cout<<"In string  2 :"<<index(str1,"THE")<<endl;


    return 0;
}
