#include<iostream.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
      double T,K,t,h,k,s,cd0,p0,beta,p,V;
      k=0.035;
      cd0=0.025;
      p0=0.4229;
      beta=9297;
      cout<<"Thrust\n";
      cin>>T;
      cout<<"K\n";
      cin>>K;
      cout<<"t\n";
      cin>>t;
      cout<<"h\n";
      cin>>h;
      cout<<"area\n";
      cin>>s;
      p=p0*exp(-1*h*beta);
      V=sqrt((T+sqrt(T*T-4*cd0*k*K*K*t*t))/cd0*p*s);
      cout<<V<<"\n";
      V=sqrt((T-sqrt(T*T-4*cd0*k*K*K*t*t))/cd0*p*s);
      cout<<V<<"\n";
}