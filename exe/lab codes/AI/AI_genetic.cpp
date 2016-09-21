#include<iostream>
using namespace std;
int chromosome[2000][102],n,population,fitness[2000][1]={0},crossover[2000][102],mutationno,p,mut;

void selection()
{
  cout<<"\n";
  int i,j,k,l;
  for(i=0;i<population;i++)
  {
    fitness[i][0]=0;
    for(j=0;j<n;j++)
    {
      for(k=j;k<n;k++)
      {
        if(chromosome[i][j]!=chromosome[i][k] && chromosome[i][j]!=chromosome[i][k]+abs(k-j) && chromosome[i][j]!=chromosome[i][k]-abs(k-j))
        fitness[i][0]++;
      }
    }
    cout<<fitness[i][0]<<"\n";
    if(fitness[i][0]==p)
    {
      cout<<"\nsolution found\n";
      for(l=0;l<n;l++)
      cout<<chromosome[i][l]<<" ";
      system("pause");
    }
  }
  //system("pause");
}

void sorting()
{
  int i,j,k,max,l,m;
  for(i=0;i<population;i++)
  {
    max=fitness[i][0];
    k=i;
    for(j=i+1;j<population;j++)
    {
      if(fitness[j][0]>max)
      {
        max=fitness[j][0];
        k=j;
      }
    }
    swap(fitness[i][0],fitness[k][0]);
    for(l=0;l<n;l++)
    swap(chromosome[i][l],chromosome[k][l]);
  }
  cout<<"\n";
  for(i=0;i<population;i++)
  cout<<fitness[i][0]<<"\n";
  //system("pause");
}

void crossoverfxn()
{
  int i,j,k,l,prcnt,m;
  prcnt=(80*100)/population;
  for(i=0;i<prcnt;i+=2)
  {
    j=rand()%n;
    for(k=0;k<j;k++)
    {
      crossover[i][k]=chromosome[i][k];
      crossover[i+1][k]=chromosome[i+1][k];
    }
    for(k=j;k<n;k++)
    {
      crossover[i][k]=chromosome[i+1][k];
      crossover[i+1][k]=chromosome[i][k];    
    }        
  }
  /*cout<<prcnt<<"\n";
  system("pause");*/
  
  for(i=prcnt;i<population;i++)
  {
    j=rand()%prcnt;
    k=rand()%n;
    l=rand()%prcnt;
    for(m=0;m<k;m++)
    {
      crossover[i][m]=chromosome[j][m];
      //crossover[i+1][m]=chromosome[l][m];
    }
    //system("pause");
    for(m=k;m<n;m++)
    {
      crossover[i][m]=chromosome[l][m];
     // crossover[i+1][m]=chromosome[j][m];
    }
  }
}
  
void mutation()
{
  int i,j,k,l,m;
  for(i=0;i<mutationno;i++)
  {
    j=rand()%population;
    for(l=0;l<n/5;l++)
    {
      m=rand()%n;
      k=rand()%n;
      crossover[j][m]=k;
   
    }
  }   
} 

void GA()
{
  cout<<"generated population is\n";
  int i,j;
  for(i=0;i<population;i++)
  {
    for(j=0;j<n;j++)
    {
      chromosome[i][j]=crossover[i][j];
    }
  }
  for(i=0;i<population;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<chromosome[i][j]<<" ";
    }
    cout<<"\n";
  }
  //system("pause");
  cout<<"\n";
  selection();
  cout<<"\nout from selection\n";
  //system("pause");
  sorting();
  cout<<"\nout from sorting\n";
  //system("pause");
  crossoverfxn();
  cout<<"\nout from crossover\n";
  //system("pause");
  mutation();
  GA();
}

int main()
{
   srand ( time(NULL) );
  cout<<"enter value of n and number of chromosomes (polpulation size), number of mutation\n";
  cin>>n>>population>>mutationno;
  int i,j;
  for(i=0;i<population;i++)
  {
    for(j=0;j<n;j++)
    {
      crossover[i][j]=rand()%n;
    }
  }
  
p=(n*(n-1))/2;
 cout<<p;
 system("pause");
  cout<<"\n";
  
  
  GA();
  return 0;
}
  
  
