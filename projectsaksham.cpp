
int int two_numbers(){
string de,we;
int z=0,x=0;
for(int i=5;i<s.length();i++)
{
    if(s[i]!=' ' && z==0)
    {
        de+=s[i];
    }
    else if(s[i]==' ')
    {
        z++;
    }
    if(s[i]==' ')
    {
        space++;
    }
    if(s[i]==' ' && space==3 && x==0)
    {
        we+=s[i];
    }
    else
    {
        x++;
    }
}
int no1=stoi(de);
int no2=stoi(we);
}
