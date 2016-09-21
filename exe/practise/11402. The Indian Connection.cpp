#include<stdio.h>
#include<iostream.h>
main()
{
    long long unsigned k;
    int t[100],x,n;
    while(1)
    {
            scanf("%d",&n);
    scanf("%llu",&k);
    n=0;
    while(k)
    {
     t[n]=k%2;
     k=k/2;
     cout<<t[n];       
           n++;
           
            }
            x=1;
            cout<<endl<<n--;
            do
            {
                    
                    x=x^t[n];
                    cout<<x;
                    
                    }while(n--);
                    
                    if(x)
                    printf("Male\n");
                    else printf("Female\n");
}
    
}
