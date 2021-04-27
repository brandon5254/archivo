#include <iostream>

#include <iostream>

using namespace std;





void imprimirMenuPrincipal(){
       cout << "\nBIENVENIDO Al MENU DE LA GASOLINERIA ";
       cout << "\n-> Elija  su combustible <-" << endl;
        
         cout << "1.corriente" << endl;
        cout << "2.Diesel" << endl;
}


        



int main()
{
  //declaracion de variables

	string usuario;
	string clave;
  int opcion=0;
  int cantidad;
  int total;

  int precioCorriente=0;  //corriente
    int corriente=0; 
    int precioDiesel=0;  //Diesel
    int diesel=0; 
    int contadoVentas=0; // admin
    

	int estatus=0;
  int cantidadIntentos=0;


//LEER ENTRADAS
do{
  
  cout<<"\nBIENVENIDO A LA GASOLINERIA ";
	cout<<"\t\t\t Digite usuario del cliente:";
	cin>>usuario;
	cout<<" \n Digite contraseña del cliente:";
	cin>>clave;
if (usuario!="DIANA" || clave!="123")
{
cantidadIntentos++;
	cout<<"\nte equivocaste intentalo de nuevo";
}
	else 
	estatus=1;
	
}while (cantidadIntentos<3 &&estatus==0);

if(estatus==1){
	
  
  
}
else 
{
cout<<"\n supero la cantidad de intentos intentelo de nuevo mas tarde ";
}
while (opcion!=1) {
      
      imprimirMenuPrincipal();

       do {
            cout << "<opcion>: "; cin >> opcion;
        } while (!(opcion >= 1 && opcion <= 2));
        switch (opcion) {
        case 1: 
            cout << "-> Elija el combustible y costo <-" << endl;
            cout << "1. corriente: $9.555" << endl;
            
            
            do {
                 contadoVentas++; //admin
                cout << "Opcion: "; cin >> opcion;
            } while (!(opcion >= 1 ));
            
            do {
                 
               
                cout << "Cantidad en galones: "; cin >> cantidad;
            
           
                
              } while (!(cantidad > 0));

            switch (opcion) {
            case 1: precioCorriente += (9555*cantidad); corriente += cantidad; break;
            
            }

            break;
            
        case 2: 
            cout << "\n-> Elija el combustible  y costo <-" << endl;
            cout << "1. Diesel: $9.081" << endl;
            
            do {
               contadoVentas++; //admin
                cout << "Opcion: "; cin >> opcion;
            } while (!(opcion >= 1 && opcion <= 2));
            do {
                cout << "Cantidad en Galones: "; cin >> cantidad;
                
            } while (!(cantidad > 0));

            switch (opcion) {
            case 1: precioDiesel += (cantidad*9081); diesel += cantidad; break;
            
            }
            

}            
        ///CALCULA SALIDAS
        cout << "0.Continuar..." << endl;
        cout << "1. Salir" << endl;
        cout << "Opcion: ";
         cin >> opcion;
        system("cls");
        
    }
    cout << "\n usted llevo corriente ";
    cout << "\nPrecio total de corriente: " << precioCorriente << endl;
    cout << "Cantidad total de galones de corriente: " << corriente << endl;
    
     cout << "\n usted llevo  Diesel ";
     cout << "\nPrecio total en Diesel: " << precioDiesel << endl;
    cout << "Cantidad total de galones de Diesel: " << diesel  << endl;

    
    
    //esta linea especificfica el login del admin para ver el total de ventas
     ///IMPRIME RESULTADOS
    cout<<"\nBIENVENIDO A LA ADMINISTRACION DE  ";
	cout<<"\t\t\t digite su usuario:";
	cin>>usuario;
	cout<<" \n digite su clave:";
	cin>>clave;
if (usuario=="ADMIN" && clave=="123") 
{



cout << "\n cantidad de ventas realizadas: " << contadoVentas<<"\n cantidad de galones vendidos " << cantidad << endl;
total =  precioCorriente + precioDiesel;
    cout << "\nCuenta total de lo que se vendio hoy: " <<total << endl;   

}///
else{
  cout << "\n Usuario incorrecto ";
}
   




    
    
    system("pause>0");
    return 0;
 
}







