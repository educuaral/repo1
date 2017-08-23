#include<iostream>
#include<cmath>


double fheron(double a,double b,double c, double d);
double falter(double a,double b,double c);

int main(void)
{

  std::cout.precision(16); std::cout.setf(std::ios::scientific);

  

  for(int n=0; n<=100; ++n){

  double b =3.0;
  double c =4.0;
  double x = (M_PI/2)*std::pow(1.1,-n);
  double a = std::sqrt((b*b)+(c*c)-(2*cos(x)));
  double d= (a+b+c)/2;


  std::cout<< n << "\t"<< fheron(a,b,c,d)<< "\t "<< falter(a,b,c)<< "\t "<< fabs(fheron(a,b,c,d)-falter(a,b,c))/falter(a,b,c)<<std::endl;

    }

  
}


double fheron(double a,double b,double c,double d)
{

  double S= sqrt(d*(d-a)*(d-b)*(d-c));

  return S;


}



double falter(double a,double b,double c)
{


  double w=a+(b+c);
  double y=c-(a-b);
  double h=c+(a-b);
  double k=a+(b-c);
  double Sa=sqrt(w*y*h*k)/4;

  return Sa;



}
