#include <iostream>
#include <cmath>
using namespace std;
/*	Edita el archivo Factorial.cpp, añade una función de cajero automático que permita las acciones básicas 
(Consultar saldo, retirar efectivo y mostrar el saldo después del retiro
 (La cuenta debe estar inicializada en 20000). 
Debes generar un menú de selección para el usuario para que elija entre usar la función de 
Factorial o la de cajero automático 
y repite los pasos de commit y push para subir los cambios 
(inserta una impresión de pantalla de los cambios efectuados).*/

/**Funcionn Factorial**/
 int factorial(int n){
int numero=n;
int fac;
for(int i=1;i<=numero;i++){
  fac=(i+1*i);
}
return fac;
}
/**REALIZA EL MENU DE OPCIONES ENTRE BANCO O FACTORIAL**/

int main()
{
    int n ,op=0,o=0;
    int saldoinic=2000;
    			int r=0;
    		int saldoact;
    
    cout<<"Menu"<<endl<<"Selecciona una Opcion"<<"1:Banco"<<endl<<"2:Factorial"<<endl;
    cin>>op;
    
    switch(op){
    	case 1:
		cout<<"1. Consultar saldo"<<endl<<"2. Retirar Efectivo"<<endl<<"3. salir"<<endl;
    	cin>>o;
    		
    	
    	if(o==1){
    	
    		
    		cout<<"Tu saldo es: "<<saldoact<<endl;
    		
    		
		}
		if(o==2){
			cout<<"Ingrese la cantidad a retirar"<<endl;
			cin>>r;
			saldoact=saldoinic-r;
			cout<<"Su saldo actual es: "<<saldoact ;
    	
	}
		break;
		
   case 2:
    cout<<"Ingresa el numero del factorial"<<endl;
    cin>>n;
    factorial(n);
    cout<<"El resultado del factorial es: "<<factorial(n)<<endl;
    
  	break;
    
   case 3:
	break;
    


}
}