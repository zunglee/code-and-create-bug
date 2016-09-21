#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#include<map>
#include<vector>
#include<algorithm>
#include<queue>


using namespace std;
#define S scanf
#define Si(i) scanf("%d",&i)
#define P printf

#define Vi vector<int>
#define PUB push_back
#define F(i,a,b) for(int i=a;i<b;i++ )

int v[1003][3];int pv;int lx;
int h[1003][3];int ph;int ly;

int main(){

char dir;


v[0][0]=0;
v[0][1]=0;
v[0][2]=0;


h[0][0]=0;
h[0][1]=0;
h[0][2]=0;

int c=0;
int d;
int t,ans=0;

cin>>t;

while(t--){
           
cin>>d>>dir;          

c=0;

if(dir=='U'){
             
   for(int i=0;i<=ph;i++){
           if(lx<=h[i][2] && lx>=h[i][1] ){
             if(ly <=h[i][0] && ly+d >=h[i][0] ){
                  c++;
             }}
           }
   
   for(int i=0;i<=pv;i++){
           if(v[i][0]==lx){
                        
           int mx=max(v[i][2],ly+d);
               int mn=min(v[i][1],ly);
                int mm=(d+v[i][2]-v[i][1])-(mx-mn);
               
                 if( mm>0){
                    c+=mm;         
                 ///cases with--- ----
                 if(mx < v[i][2] )
                 ly=v[i][2];
                 
                 break;
                 }
                          
                           }
                            }
   
   
   
   
    }
else if(dir=='D'){
     
          
   for(int i=0;i<=ph;i++){
           if(lx<=h[i][2] && lx>=h[i][1] ){
             if(ly >=h[i][0] && ly-d <=h[i][0] ){
                  c++;
             }}
           }
    
    
   for(int i=0;i<=pv;i++){
           if(v[i][0]==lx){
                       
               int mx=max(v[i][2],ly);
               int mn=min(v[i][1],ly-d);
                int mm=(d+v[i][2]-v[i][1])-(mx-mn);
                 if( mm>0){ c+=mm;         
                 v[i][1]=mn;v[i][2]=mx;
                 }
                          
                           }
                            }
}
    
    
    
   else if(dir=='R'){
                 for(int i=0;i<=pv;i++){
                         if(ly<=v[i][2]&&ly>=v[i][1])
                         {if( v[i][0]>=ly && v[i][0]<=ly+d )
                                                    {
                                                     c++;      
                                                           }
                                                    
                                                     }
                                                     }
                
                 for(int i=0;i<=ph;i++){
                         if( h[i][0] ==ly  ){
                             
                         int mx=max(lx+d,h[i][2]);
                         int mn=min(lx,h[i][1]);    
                
                             int mm=(d+h[i][2]-h[i][1])-(mx-mn);
                 if( mm>0){ c+=mm;         
                 h[i][1]=mn;h[i][2]=mx;
                
                             
                             }
                         
                         
                         }
                 
                 
                 
                 }
}
    
   
   else if(dir=='L'){
                 for(int i=0;i<=pv;i++){
                         if(ly<=v[i][2]&&ly>=v[i][1])
                         {if( v[i][0]<=ly && v[i][0]>=ly-d )
                                                    {
                                                     c++;      
                                                           }
                                                    
                                                     }
                                                     }
                
                 for(int i=0;i<=ph;i++){
                         if( h[i][0] ==ly  ){
                             
                         int mx=max(lx,h[i][2]);
                         int mn=min(lx-d,h[i][1]);    
                
                             int mm=(d+h[i][2]-h[i][1])-(mx-mn);
                 if( mm>0){ c+=mm;         
                 h[i][1]=mn;h[i][2]=mx;
                
                             
                             }
                         
                         
                         }
                 
                 
                 
                 }
    
    
    
    
    
    
    
    
}
    
    
    for(int i=0;i<=ph;i++){
            
            cout<<h[i][0]<<" "<<h[i][1]<<"  "<<h[i][2]<<endl;}
    cout<<"......................................................\n";
    for(int i=0;i<=ph;i++){
            
            cout<<h[i][0]<<" "<<h[i][1]<<"  "<<h[i][2]<<endl;}
    
cout<<d-c;    
     
     }



    system("pause");
    return 0;
    }




