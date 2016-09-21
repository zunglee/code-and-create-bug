////////                    NEED 17.83 ptr in 6th+7th sem


#include<iostream.h>
#include<conio.h>
int main()
{
    float ptr ,cgpi;
    int a[8]={27,28,28,28,27,23,23,20},t=1,n=8,grade_point=138+23+23;
    cgpi=(8.52*27+8.39*28+7.43*28+7.79*28+8.63*27+8.43*23+8.43*23)  ;
    cout<<(float)cgpi/(138.0+23+23)<<endl;
     
    while(1)
    {
    while(t--)
    {
              cout<<"pointer of "<<n-t<<" sem :";
            cin>>ptr;
             cgpi=cgpi+ (a[n-t-1]*ptr);
             cgpi=cgpi*1.0;
             grade_point=grade_point+a[n-t-1];
             cout<<"cgpi = "<<  cgpi/(grade_point*1.0)<<endl;     
             }  
             cout<<"----------------------------------------------------------\n"; 
             t=1;
             n=8;            
             cgpi=(8.52*27+8.39*28+7.43*28+7.79*28+8.63*27+8.43*23+8.43*23)  ;
             grade_point=138+23+23;
            }  
    return 0;
}
