#include<iostream>
using namespace std;
#include<math.h>
#include<time.h>
#include<string.h>
#include<algorithm> // in C qsort(arr,N,sizeof(int),compare);
#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<fstream.h>
main()
{
      int ct=-2;
  //    int t;
//cin>>t;
//while(t--)

        DIR *dir;
struct dirent *ent;

if ((dir = opendir ("G:")) != NULL)
     {
         ofstream ankitesh;
         ankitesh.open(";ist.txt");
  /* print all the files and directories within directory */
  while ((ent = readdir (dir)) != NULL) {
  ankitesh<<  ++ct<<".  "<<ent->d_name<<endl;
    printf ("%s\n", ent->d_name);
  }
  ankitesh.close();
  closedir (dir);
  
      } 
else 
{
  /* could not open directory */
  perror ("fuck off ");
  system("pause");
  return EXIT_FAILURE;
}
          

system("pause");
}
