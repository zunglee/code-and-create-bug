#include<iostream.h>
#include<windows.h>
int main()
{
    cout<<"\n\n\n\t\t\t\tLoading\n\t\t\t";
    /*for(int i=0;i<=21;i++)
    {cout<<"-";
    Sleep(70);
}
    for(int i=0;i<=21;i++)
    {cout<<"\b";
    
}*/
for(int k=0;k<=10;++k)
{
            for(int j=0;j<=10;++j)
            {
                    cout<<"#";
           // cout<<".\b";
           Sleep(70);
            cout<<"\b--";
            }
            for(int i=0;i<=20;i++)
    cout<<"\b";
    cout<<"\b"; 
    
} 
cout<<"\ndone...";  
    
    cout<<"\n";
    system("pause");
    return 0;
}
