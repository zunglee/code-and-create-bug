#include <iostream>
#include <fstream>
#include <istream>
#include<conio.h>
using namespace std;

int main() {
	int number_of_lines = 0, track=1,noofcomment=0;
    string line;
    ifstream f("add.txt");
    while (f.good())
	{
        getline(f, line);
        cout<<line;
       
        int a=line.length();
      
       if(line[0]=='/')
       noofcomment++;
         
       
   if (line=="")
        {
            cout << "Number of lines for track "<< track << " is "<<number_of_lines<< endl; 
            cout<<"No. of commentlines  "<<noofcomment;
            number_of_lines=0;
            track++;
        }
else
{
            ++number_of_lines;
}  
     }
    
	//system("pause");
	getch();
	return 0;
}
