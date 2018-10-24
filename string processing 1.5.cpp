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
string s,s1,p,p1;
s="ababababab";s1="abaabbaaabbbaaaabbbb";
p="abc";p1="aaa";
cout<<index(s,p)<<endl;
cout<<index(s1,p1)<<endl;

    return 0;
}
