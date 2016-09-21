#include <iostream>
#include <fstream>
#include<string.h>
#include<conio.h>
using namespace std;

int main() {
	int n = 0 ,com=0,line_com=0;
    string s;
    ifstream f("lab 1.txt");
    while (f.good())
	{
        getline(f, s);
        int a=s.length();
      if(s[0]=='/' && s[1]=='*')
      {
      line_com++;
      }
       if(s[0]=='/' )
       com++;
       if (s=="")
        {
       cout << "Number of lines  is "<<n<< endl<<cout<<"No. of commentlines  "<<com<<endl<<"comment line"<<line_com<<endl<<"logical line is "<<n-com-line_com; 
            
            
        }
else
{
            ++n;
}  
     }
    

	getch();
	return 0;
}
