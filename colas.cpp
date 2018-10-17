# incluye  < iostream >
# incluye  < conio.h >
# include  < stdlib.h >

utilizando  namespace  std ;

estructura  ICO {
	char clave [ 20 ];
	char nombre [ 30 ];
	calificacion de flotadores ;
};

estructura  nodo {
	Alumnos de ICO;
	Nodo * siguiente;
};
// Insertar elementos al cola
 menú vacío ();
void  agregarDatos (ICO &);
void  insertDatos (Nodo * &, Nodo * &, ICO);
bool  c_vacia (Nodo *);

int  main () {
	Alumnos de ICO;
	Nodo * frente = NULL ;
	Nodo * fin = NULL ;
	opcion de charla
	
	hacer {
		menú ();
		cin >> opcion;
		fflush (stdin);
		Nodo * aux = frente;
		interruptor (opcion) {
			caso  ' 1 ' :
				agregarDatos (alumnos);
				insertarDatos (frente, aleta, alumnos);
				romper ;
			caso  ' 2 ' :
				cout << " CLAVE " << " \ t NOMBRE \ t \ t \ t " << " CALIFICACION " << endl;
				while (aux! = NULL ) {
					cout <<aux-> alumnos . clave << " \ t " <<aux-> alumnos . nombre << " \ t \ t \ t " <<aux-> alumnos . calificacion << endl;
					aux = aux-> siguiente ;
				}
				romper ;
			caso  ' 3 ' :
				cout << " \ n Salio del programa ... " << endl;
				romper ;
			por defecto :
				cout << " \ n Opcion invalida " << endl;
				romper ;
		}
		cout << " Presionar una tecla para continuar " << endl;
		getch ();
		sistema ( " cls " );
	} while (opcion! = ' 3 ' );
	devuelve  0 ;
}

 menú vacío () {
	cout << " MENU " << endl
	    << " 1.Agregar datos del alumno " << endl
	    << " 2.Mostrar datos de los alumnos " << endl
	    << " 3. Carrera del programa " << endl
	    << " Ingresar el numero de opcion que desea: " ;
}

void  agregarDatos (ICO & alumnos) {
	cout << " Ingresar clave del alumno: " ; cin getline (alumnos. clave , 20 , ' \ n ' );
	cout << " Ingresar nombre del alumno: " ; cin getline (alumnos. nombre , 30 , ' \ n ' );
	cout << " Ingresar calificacion: " ; cin >> alumnos. calificacion ;
}


void  insertDatos (Nodo * & frente, Nodo * & fin, ICO alumnos) {
	Nodo * n_nodo = nuevo  Nodo ();
	
	n_nodo-> alumnos = alumnos;
	n_nodo-> siguiente = NULL ;
	
	if ( c_vacia (frente)) {
		frente = n_nodo;
	}
	else {
		fin-> siguiente = n_nodo;
	}
	
	fin = n_nodo;
}

bool  c_vacia (Nodo * frente) {
	
	volver (frente == NULL )? verdadero : falso ;
}
