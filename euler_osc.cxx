#include<iostream>
#include<cmath>

using namespace std;

int main(void){

  double x, f[2], b[2];
  const double dt = M_PI/100.0;
  const int N = 20*M_PI/dt;

  f[0]=1;
  f[1]=0;
  b[0]=1;
  b[1]=0;

for(int i=0; i<N; i++){
  x    = f[0];
  f[0] = f[0]+dt*f[1];
  f[1] = f[1]-dt*x;
  b[1] = b[1]-dt*b[0];
  b[0] = b[0]+dt*b[1];
  
  cout<< dt*i << "\t" << f[0] << "\t" << b[0] << "\t" << endl;
}
   
return(0);
}