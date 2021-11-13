#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//1
using namespace std;
int claveacceso;
int nuevo_nip;

int main(int argc, char** argv) {

	string usuario;
	string contrasena;
	int estatus=0, cant_intentos=0;
	
    do{
cout<<"\n COLOCAR NUMERO DE CUENTA : \n";
	cin>>usuario;
	cout<<"\n COLOCAR NIP:\n";
	cin>>contrasena;
	
	if(usuario!="123456789" && contrasena!="6262")
	{cant_intentos++;
	  cout<<"\n esstas equivocado";
	  
	  }
	  else
	  estatus=1;
	  }while(cant_intentos<2&&estatus==0);
	  
	  if(estatus==1){
	  	cout<<"\n BIEMBENIDO AL CAJERO\n";
	  }
	  	

       else
       {cout<<"\n ha superado la cantidad de intentos permitidos";
	   }
	


	int saldo_inicial = 10000;
	int saldo, reintegro,opcion,agregar;
	
	
		cout<<"\n BIENVENIDO CAJERO AUTOMATICO OSC";
	cout<<"\nESCOJA LA OPCION DESEADA:";
	cout<<"\n1.  Depositar en cuenta";
	cout<<"\n2.  Retiro de efectico";
	cout<<"\n3.  Ver saldo en cuenta";
	cout<<"\n4. cambio de nip";
	cout<<"\n0 SALIR CJA";
	cin>>opcion;

	
	
	//op
	if(opcion==1){
		cout<<"\nINGRESE LA CANTIDAD A DEPOSITAR: ";
		cin>>agregar;
		saldo = saldo_inicial + agregar;
		cout<<"\nCANTIDAD DISPONIBLE EN CUENTA: "<<saldo;
	}
	
	else if(opcion==2){
		cout<<"\nCUANTA CANTIDAD DESEA RETIRAR: ";
		cin>>reintegro;
		if(reintegro
		<10000){
			cout<<"LA CANTIDAD DIGITADA ES MAYOR A 10000, DIJITE DE NUEVO LA CANTIDAD";
			cin>>reintegro;
			
		}
		saldo=saldo_inicial- reintegro;
		cout<<"\nCANTIDAD DESPONIBLE EN CUENTA:"<< saldo;
	}
	
	else if(opcion == 3)
	{
		cout<<"\n LA CANTIDAD DISPONIBLE EN CUENTA ES DE: "<<saldo_inicial;
	}
	else if(opcion == 4)
	{
		
	cout<<"\n Colocar nuevo NIP:";
	 cin>>nuevo_nip;
	 
	 if(contrasena!=nuevo_nip)
	 {
	 	cout<<"\n pin incorrecto vuelva  intentar";
	 }
	  
	  
	 cout<<"\n porfavor de ingresar nip:"<<nuevo_nip;
	}
	
	else if(opcion == 0)
	{
		cout<<"GRACIAS POR UTILIZAR EL CAJERO AUTOMATICO OSC ";
	}
	else
	{
		cout<<"OPCION NO ENCONTRADA";

	  
	
	}
	//do{
     //}
	
    //while()

	return 0;
}
