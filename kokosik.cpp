
#include <iostream>

#include <ctime>

#include <fstream>

 using namespace std;

 

void fibb( long long int n, long long int &res )

{   

  long long int massiv[100] = { };

    

    if ( n == 0 || n == 1 )

    {

        res = 1;

        return;

    }   

    

    if ( !massiv[n - 1] )

        fibb(n - 1,massiv[n - 1]);

    

    if ( !massiv[n - 2] )

        fibb(n - 2, massiv[n - 2]);

        

    res = massiv[n - 1] + massiv[n - 2];

}

 

int main()

{

long long int z;

z = 30; 

long long int zz;

zz=z+1;

    long long int x;

int ii=1;

ofstream fout("fael.txt"); 

cout <<"METOD REKURSII" << endl; 

while (ii<zz){

float v1 =  clock();

    fibb(ii, x);

ii++;

    cout <<"vashe chislo "<< x << endl; 

    

   float v2 = clock();

float v3 = (v2 - v1)/CLOCKS_PER_SEC;

fout << x << " ";  

fout << v3 << endl;  

   

}
fout << "LINE" << endl;
fout << "1 " << "0" << endl;
 

 

long long int f1=1;

 long long int f2=1;

int a;

long long int fiba=0;

 

  float v4 =  clock();

   int i=1;

   cout <<"vashe chislo 1" << endl; 

   while (i<z){

   float v5 = clock();

    fiba = f1 + f2;

    f1 = f2;

    f2 = fiba;

    i++;

float v6 = (v5 - v4)/CLOCKS_PER_SEC;

fout << fiba << " "; 

 fout << v6 << endl;  

   

cout <<"vashe chislo "<< fiba << endl; 

   }

    float v5 = clock();

float v6 = (v5 - v4)/CLOCKS_PER_SEC;

 

fout.close();

// system("pause");

}