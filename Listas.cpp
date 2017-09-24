#include <stdlib.h>
#include <stdio.h>
#include <cpio.h>
#include <iostream>


using namespace std;


typedef struct n{
  struct n *sgt=NULL;
  int dato;
  
} Nodo;

Nodo *ptr=NULL, *r,*k,*j,*p;

void insertarCabeza(int dato);
void mostrar();

int main(){
  int d=0;
  
  do{
    
    cout<<"-----Menu-----\n";
    cout<<"1 ingresar dato\n";
    cout<<"2 Mostrar lista\n";
    cout<<"3 Salir\n";
    cin>>d;
    switch(d){
      case 1:
	system("clear");
	int dato;
	cout<<"Escriba un numero: ";
	cin>>dato;
	insertarCabeza(dato);
	system("clear");
	break;
      case 2:
	system("clear");
	mostrar();
	system("pause");
	system("clear");
	break;
      case 3:
	system("clear");
	cout<<"Saliendo";
	d=7;
	system("pause");
	system("clear");
	break;
      default:
	system("clear");
	cout<<"Opcion no valida";
	system("pause");
	system("clear");
	break;   
    }
  }while(d!=7);
   
  return 0;
}

void insertarCabeza(int dato){
    p=new Nodo();
    p->dato=dato;
    if(ptr==NULL){
      p->sgt=NULL;
      ptr=p;
    }else{
      p->sgt=ptr;
      ptr=p;
    }
}
void mostrar(){
  j=ptr;
  while(j!= NULL){
    cout<<"["<<j->dato<<"]->";
    j=j->sgt;
    
  }
  
}