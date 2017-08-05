#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(void)
{
ofstream sum("suma.dat");

 for (int N=1; N<=1000; N++){
  double c=0;
   for (double i=1; i<=N; i++){
   c += 1/i ;
   }
cout<< N <<"  "<< c<< endl;
sum<< N <<"  "<< c<< endl;
}
sum.close();
}


