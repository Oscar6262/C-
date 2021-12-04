#include <iostream>
#include <conio.h>





using namespace std;

int money[100], quincena[100][6], cont=0;

void dinero();
void gastos();
void tres();

int main(){
	int A=1, opcion;
	//PREG
	while(A==1){
		
		system("cls");
		cout<<"Finansas PRO"<<endl;
		cout<<"Presupuesto: "<<money[cont]<<endl;
		cout<<endl<<"*****OPCION A RELIZAR*****: "<<endl;
		cout<<"1- Agregar nueva quincena"<<endl;
		cout<<"2- Gastos y deducciones"<<endl;
		cout<<"3- Total de gastos"<<endl;
		cout<<" digite la opcion que desea a realizar: ";
		cin>>opcion;
		//GST
		if (opcion>4){
			
			system("cls");
			cout<<" Se Ha  Equivocado ha ingresado un digito incorrecto"<<endl;
			cout<<"Favor de ingresar un digito correcto"<<endl;
			
			getch();
			
		}else{
			
			system("cls");
			switch(opcion){
				case 1:
					dinero();
				break;
				case 2:
					gastos();
				break;
				case 3:
					tres();
				break;
			}
		}
	}
	
	return 0;
}

void dinero(){
	
	cout<<"ingrese la cantidad ganada en la quincena: ";
	
	cont++;
	
	cin>>money[cont];
	
	getch();
}
//GST HOG
void gastos(){
	
	int gasto, sector;
	
	cout<<"Gastos y deducciones"<<endl;
	cout<<"\n---------------------------\n";
	cout<<"1- Gastos del hogar"<<endl;
	cout<<"2- Gasolina y transporte"<<endl;
	cout<<"3- Gastos en restaurantes"<<endl;
	cout<<"4- Entretenimiento"<<endl;
	cout<<"5- Otros"<<endl;
	cout<<"6- Salir"<<endl;
	cin>>sector;
	
	if(sector<6){
		
		cout<<endl<<"Ingrese la cantidad de dinero: $ ";
		
		cin>>gasto;
		
		while(gasto>money[cont]){
			
			system("cls");
			cout<<"Ha ingresado un monto mayor al que cuenta actualmente"<<endl;
			cout<<"Vuelva a ingresar el monto plis"<<endl;
			getch();
			cout<<endl<<"Ingrese la cantidad de dinero: ";
			cin>>gasto;
		}
		
		quincena[cont][sector]+=gasto;
		
		quincena[cont][0]=quincena[cont][0]+gasto;
		
		money[cont]=money[cont]-gasto;
	}
	getch();
}
//GST TOT
void tres(){
	
	cout<<"*****TOTAL DE GASTOS EN LA QUINCENA*****: "<<endl;
	cout<<"\n*************************************\n";
	cout<<"1- Hogar:                  $._ "<<quincena[cont][1]<<endl;
	cout<<"2- Gasolina y transporte:  $._ "<<quincena[cont][2]<<endl;
	cout<<"3- Restaurantes:           $._ "<<quincena[cont][3]<<endl;
	cout<<"4- Entretenimiento:        $._ "<<quincena[cont][4]<<endl;
	cout<<"5- Otros:                  $._ "<<quincena[cont][5]<<endl;
	cout<<endl;
	cout<<"*****TOTAL GASTADO*****: $ "<<quincena[cont][0]<<endl;
	getch();
}     
