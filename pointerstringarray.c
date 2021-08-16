#include <stdio.h>

int main() {
      char *arr[100];
      char *str1[50];
      char *str2[50];
      int i,j=0,n,r,p;
      int q,b,s;
      int x=0;
      gets(arr);
      gets(str1);
      gets(str2);
      n=strlen(str1);
      s=strlen(str2);


          for(i=0;i!='/0';i++)
            {
                if(arr[i]==str1[j])
                {
                    q=i;b=j;
                    for(r=j+1;r<n;r++)
                    {
                        i++;
                        if(arr[i]==str1[r])
                            p=1;
                    }
                }
                    else
                        j++;
            }

      if(p==1)
        for(i=q;i<s;i++)
      {
          arr[i]=str2[x];
          x++;
      }
else
{

}



     puts(arr);

    return 0;
}
