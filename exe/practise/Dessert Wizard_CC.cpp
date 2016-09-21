#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm>
#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#define slld(x) scanf("%lld",&x) //long long int
#define plld(x) printf("%lld\n", x);

main()
{
  //    int t;
//cin>>t;
while(1)
{
         int len;
         cin>>len;
         long long int tl=0,tm=0,arr[len],minl[len],minr[len],maxl[len],maxr[len],zero=0, maxi=0;
         for(int i=0;i<len;i++)
         {
                  slld(arr[i]);
                 }
         
       //--------------------------------------------------  
         long long int max_ending_here=0, max_so_far=0 ;
         tl=arr[0];
          for(int i=0;i<len;i++)
          {       
                 tl=max(tl,arr[i]); 
                  max_ending_here= max (zero,max_ending_here+arr[i]);
                  max_so_far = max (max_so_far,max_ending_here);
                  if(max_so_far==0)
                  maxl[i]=tl;
                  else
                  maxl[i]=max_so_far;
         }
         
          
       //--------------------------------------------------   
          max_ending_here=0, max_so_far=0 , tl=arr[len-1];;
          for(int i=len-1;i>=0;i--)
          {
          tl=max(tl,arr[i]);
                  max_ending_here= max (zero,max_ending_here+arr[i]);
                  max_so_far = max (max_so_far,max_ending_here);
                  if(max_so_far==0)
                  maxr[i]=tl;
                  else
                  maxr[i]=max_so_far;
          }
       //----------------------------------------------------
       
       long long int min_ending_here=0, min_so_far=0 ;
        tm=arr[0];
          for(int i=0;i<len;i++)
          {
          tl=min(tl,arr[i]);
                  min_ending_here= min (zero,min_ending_here+arr[i]);
                  min_so_far = min (min_so_far,min_ending_here);
                  if(min_so_far==0)
                  minl[i]=tl;
                  else
                  minl[i]=min_so_far;
          }
       
       //----------------------------------------------------
       
       min_ending_here=0, min_so_far=0 ;
        tm=arr[len-1];
          for(int i=len-1;i>=0;i--)
          {
          tm=min(tm,arr[i]);
          min_ending_here= min (zero,min_ending_here+arr[i]);
                  min_so_far = min (min_so_far,min_ending_here);
                  if(min_so_far==0)
                  minr[i]=tm;
                  else
                  minr[i]=min_so_far;
          }
         
        //----------------------------------------------------
        maxi=INT_MIN;
        long long int diff;
          for(int i=0;i<len-1;i++)
        {  maxi=max(maxi,(abs(minl[i]-maxr[i+1])));
          maxi=max(maxi,(abs(maxl[i]-minr[i+1])));            
                      
                      } 
          
             
          
        
          plld(maxi);
          }

//system("pause");
}
