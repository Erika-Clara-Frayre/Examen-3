#include <iostream>
#include <cmath>

using namespace std;

 int factorial(int n){
int numero=n;
int fac;
for(int i=1;i<=numero;i++){
  fac=(i+1*i);
}
return fac;
}


int main()
{
    int n;
    
    cout<<"Ingresa el numero del factorial"<<endl;
    cin>>n;
    factorial(n);
    cout<<"El resultado del factorial es: "<<factorial(n)<<endl;


}