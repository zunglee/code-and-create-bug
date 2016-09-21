#include <stdio.h>
#include <string.h>
#include <math.h>

#define ITER 10000
#define SIZE 200
#define ATTR 4
#define N 3

float dataSet[ SIZE ][ ATTR ];
float distance[ N ][ SIZE ];
int cluster[ SIZE ], copy[ SIZE ];
int TOT, k;
int ref[ N ];
float meanError;

void readFile()
{
	FILE* fp;
	char line[1024];
	char seps[] = ",";
	char* token;
	float var;

	fp = fopen( "iris.data", "r" );
	TOT = 0;
	while ( !feof( fp ) ) {
		fscanf( fp, "%s\n", line );

		token = strtok( line, seps );
		k = 0;
		while ( token != NULL && k < ATTR ) {
			sscanf( token, "%f", &var );
			dataSet[ TOT ][ k ] = var;
			//printf( "%f\t", var );
			token = strtok( NULL, seps );
			k++;
		}
		TOT++;
		//printf ( "\n" );
	}

	fclose( fp );
}

void printData()
{
	int i, j;

	for ( i = 0; i < TOT; i++ ) {
		for ( j = 0; j < ATTR; j++ ) {
			printf( "%f\t", dataSet[i][j] );
		}
		printf( "\n" );
	}
}

void random()
{
	ref[0] = rand() % TOT;

	ref[1] = rand() % TOT;
	while ( ref[1] == ref[0] )
    	ref[1] = rand() % TOT;

	ref[2] = rand() % TOT;
	
	while ( ref[2] == ref[0] || ref[2] == ref[1] )
    	ref[2] = rand() % TOT;
}

void calcDistance()
{
	int i, j, l, m;
	float temp;
	for ( i = 0; i < N; i++ ) {
		for ( j = 0; j < SIZE; j++ ) {
			temp = 0.0;
			for ( l = 0; l < ATTR; l++ )
				temp += pow( dataSet[ref[i]][l] - dataSet[j][l], 2 );
			temp = sqrt( temp );
			distance[i][j] = temp;
		}
	}
}
//n3
void findCluster()
{
	int i, j, cl;
	float prox;
	for ( j = 0; j < TOT; j++ ) {
		prox = distance[0][j];
		for ( i = 0; i < N; i++ ) {              
			if ( distance[i][j] <= prox ) {
				cl = i;
				prox = distance[i][j];
			}
		}
		copy[j] = cl;
	}
}

void printCluster()
{
	int i;
	for ( i = 0; i < TOT; i++ )
		printf( "%d\t", cluster[i] );

}

float findMeanError()
{
	float temp = 0.0;
	int i;
	for ( i = 0; i < TOT; i++ )
		temp += distance[cluster[i]][i];
	return temp/N;
}

int main()
{
	int i, j;
	float temp = 7128723423.0;
	readFile();
	printData();
	printf( "%d\n", TOT );
	i = 0;
	do {
		random();
		calcDistance();
		//printDistance();
		findCluster();
		//printCluster();
		meanError = findMeanError();
	//	printf( "%f\n", meanError );
		if ( meanError < temp ) {
             printf( "%f\n", meanError );
			temp = meanError;
			for ( j = 0; j < TOT; j++ )
				cluster[j] = copy[j];
		}
			
		i++;
		//printf( "%d %d %d\n", ref[0], ref[1], ref[2] );
	} while ( i < ITER );
	printf( "%f\n", temp );
	printCluster();
	system("pause");

	return 0;
}
