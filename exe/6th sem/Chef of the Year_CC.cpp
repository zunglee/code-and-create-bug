#include <iostream>
#include <map>
#include <string.h>
#include <utility>

using namespace std;
int main ()


{
int n,m;
cin>>n;
cin>>m;

string cont,contry;
map<string,int> contestant;
map<string,int> country;
map<string,string> c_country;
map<char,int>::iterator it;
for(int i=0;i<n;i++)
{ cin>>cont;
cin>>contry;
c_country[cont]=contry;
}

for(int i=0;i<m;i++)
{ cin>>cont;
contestant[cont]++;
}
//map<string, int>::iterator ii;
// for( ii=contestant.begin(); ii!=contestant.end(); ++ii)
// { cout << (*ii).first << ": " << (*ii).second << endl;
// }
//for(int k=0;k<m)
int max=-1,max2=-1,countt=0;
string conte,c_conte,contes,countryy;
map<string, int>::iterator ii;
for( ii=contestant.begin(); ii!=contestant.end(); ++ii)
{ contes=(*ii).first;
countryy=c_country[contes];
country[countryy]+=(*ii).second;
// cout<<countryy<<" "<<country[countryy]<<endl;
}
map<string, int>::iterator ji;
/* for( ji=country.begin(); ji!=country.end(); ++ji)
{
cout << (*ji).first << ": " << (*ji).second << endl;
}*/
for( ii=contestant.begin(); ii!=contestant.end(); ++ii)
{ if((*ii).second>max)
{
max=(*ii).second;
conte=(*ii).first;
}

// cout << (*ii).first << ": " << (*ii).second << endl;

}

for( map<string, int>::iterator it=country.begin(); it!=country.end(); ++it)
{ if((*it).second>max2)
{
max2=(*it).second;
c_conte=(*it).first;
countt++;
}



}/*
cout <<endl<<"*******************"<<endl;
for( map<string, int>::iterator it=country.begin(); it!=country.end(); ++it)
cout << (*it).first << ": " << (*it).second << endl;
cout <<endl<<"*******************"<<endl;*/
cout <<c_conte << endl<<conte;
//system("pause");
return 0;
}

/*
for( map<string, string>::iterator ii=c_country.begin(); ii!=c_country.end(); ++ii)
{
cout << (*ii).first << ": " << (*ii).second << endl;
}*/
