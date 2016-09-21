#include <vector>
#include <cstring>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <sstream>
#include <iostream.h>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
main ()
{
       double k=0.035, c=0.025,beta=9297,h,t1,t,K,s,d;
       cout<<"h\n";
      cin>>h;
      cout<<"Thrust\n";
      cin>>t;
     double den=0.4229*exp(-1*h*beta);
      beta=9297;
       cout<<"K\n";
      cin>>K;
      cout<<"t\n";
      cin>>t1;
        double v=sqrt(t+ sqrt((t*t)-(4*c*d*k*K*K*t1*t1))/(c*den*s*1.0));
       cout<<v;
         }
