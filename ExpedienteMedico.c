#include <stdio.h>
#include <string.h> //gets, strcmp
#include <stdlib.h> //system

//define el usuario y contraseña
#define USUARIO "VICTORIA CONSULTORIO"
#define CLAVE "pacientes"

#define LONGITUD 80

int main()
{


	//Varibales a utilizar
	char usuario[LONGITUD+1];
	char clave[LONGITUD+1];
	char nombre1[LONGITUD+1];
	char nombre2[LONGITUD+1];
	char nombre3[LONGITUD+1];
	char nombre4[LONGITUD+1];
	char domicilio[LONGITUD+1];
	char ocupacion[LONGITUD+1];
	char recomendado1[LONGITUD+1];
	char recomendado2[LONGITUD+1];
	char respuesta;	

	int intento = 0;
	int ingresa = 0;
	long telc, telo;
	int op, op2, op3, op4, n, nu, p1, p2, p3, total;

	//FILE, para escribir dentro de un archivo, en este caso el archivo se llamará Expediente
	FILE *m;
	m=fopen("Expediente.txt", "w");

		do{
			//Al momento de compilar el archivo, se limpiará la terminal
			system("cls");

			//Inicio de sesion
			printf("\n\t\tINICIO DE SESION\n");
			printf("\t\t----------------\n");
			printf("\t\tUSUARIO: ");
			gets(usuario);
			printf("\t\tCLAVE: ");
			gets(clave);

			if(strcmp(usuario, USUARIO) == 0 && strcmp(clave, CLAVE) == 0){
				ingresa =1;
			} else {
				printf("\n\tUsuario y/o clave son incorrectos\n");
				intento++;
				getchar();
			}
		} while (intento < 3 && ingresa == 0);

		if (ingresa == 1){

			//Si la contraseña es correcta, mensaje de Bienvenida
			printf("\n\n\tBienvenido al Sistema!!!\n\n");

			//Mostrar menú
			printf("\t1) CREAR EXPEDIENTE\n\t2) SALIR\n\t3) VER CODIGO DEL EXPEDIENTE\n\t");		

			//Solicitar la opción y los números
			printf("\nElije una opci%cn: ",162);
				scanf("%d",&op);

			switch(op)
			{
				case 1:
					//Solicitar Datos Personales
					printf("\n\n\tCREAR EXPEDIENTE\n\nDATOS PERSONALES:");
					printf("\nNombre del paciente (4 palabras): ");
					scanf("%s %s %s %s",nombre1, nombre2, nombre3, nombre4);
					printf("Domilicio (solo calle): ");
					scanf("%s", domicilio);
					printf("Tel%cfono Celular: (55) ", 130);
					scanf("%ld", &telc);
					printf("Tel%cfono Oficina o casa: (55) ", 130);
					scanf("%ld", &telo);
					printf("Ocupaci%cn (1 palabra): ", 162);
					scanf("%s",ocupacion);
					printf("Recomendado por (2 palabras): ");
					scanf("%s %s",recomendado1, recomendado2);

					//Mostrar opciones de tratamiento a realizar 
					printf("\nTratamiento a realizar: \n");
					printf("1) Amalgamas\n2) Resinas\n3) Extracci%cn permanente\n4) Extracci%cn temporal\n", 162, 162);
					printf("5) Limpieza y Pulido\n6) Incrustaciones metalicas\n7) Incrustaciones Esteticas\n");
					printf("8) Coronas de Porcelana\n9) Coronas de Adorno\n10) Placas de Ortopedia\n11) Modelos de Estudio\n");
					printf("12) Tx. de Ortodoncia Inicial\n13) Protesis Removible Bilateral flexible\n");
					printf("14) Protesis Removible Unilateral flexible\n15) Endodoncia por consulta\n16) Curaciones\n");
					printf("15) Endodoncia por consulta\n16) Curaciones\n17) Cementaci%cn con yonomero\n18) NINGUNA\n", 162);

					//Solicitar opción 1 de tratamiento
					printf("\nElije una opci%cn (1): ",162);
					scanf("%d",&op2);

				switch(op2)
				{
					case 1:
						printf("AMALGAMAS\n");
						p1=500;
						break;
					case 2:
						printf("RESINAS\n");
						p1=500;
						break;
					case 3:
						printf("EXTRACCION PERMANENTE\n");
						p1=700;
						break;
					case 4:
						printf("EXTRACCION TEMPORAL\n");
						p1=350;
						break;
					case 5:
						printf("LIMPIEZA Y PULIDO\n");
						p1=400;
						break;
					case 6:
						printf("INCRUSTACIONES METALICAS\n");
						p1=1500;
						break;
					case 7:
						printf("INCRUSTACIONES ESTETICAS\n");
						p1=2200;
						break;
					case 8:
						printf("CORONAS DE PORCELANA\n");
						p1=2500;
						break;
					case 9:
						printf("CORONAS DE ADORNO\n");
						p1=2500;
						break;
					case 10:
						printf("PLACAS DE ORTOPEDIA\n");
						p1=3500;
						break;
					case 11:
						printf("MODELOS DE ESTUDIO\n");
						p1=300;
						break;
					case 12:
						printf("TX. DE ORTODONCIA INICIAL\n");
						p1=5000;
						break;
					case 13:
						printf("PROTESIS REMOVIBLE BILATERAL FLEXIBLE\n");
						p1=4800;
						break;
					case 14:
						printf("PROTESIS REMOVIBLE UNILATERAL FLEXIBLE\n");
						p1=2600;
						break;
					case 15:
						printf("ENDODONCIA POR CONDUCTO\n");
						p1=1000;
						break;
					case 16:
						printf("CURACIONES\n");
						p1=250;
						break;
					case 17:
						printf("CEMENTACION CON YONOMERO\n");
						p1=400;
						break;
					case 18:
						printf("NINGUNA\n");
						p1=0;
						break;
					default:
						printf("Opci%cn no v%clida!!! ):\n", 162, 160);
						p1=0;
						break;

				}

					//Solicitar opción 2 de tratamiento
					printf("\nElije una opci%cn (2): ",162);
					scanf("%d",&op3);

				switch(op3)
				{
					case 1:
						printf("AMALGAMAS\n");
						p2=500;
						break;
					case 2:
						printf("RESINAS\n");
						p2=500;
						break;
					case 3:
						printf("EXTRACCION PERMANENTE\n");
						p2=700;
						break;
					case 4:
						printf("EXTRACCION TEMPORAL\n");
						p2=350;
						break;
					case 5:
						printf("LIMPIEZA Y PULIDO\n");
						p2=400;
						break;
					case 6:
						printf("INCRUSTACIONES METALICAS\n");
						p2=1500;
						break;
					case 7:
						printf("INCRUSTACIONES ESTETICAS\n");
						p2=2200;
						break;
					case 8:
						printf("CORONAS DE PORCELANA\n");
						p2=2500;
						break;
					case 9:
						printf("CORONAS DE ADORNO\n");
						p2=2500;
						break;
					case 10:
						printf("PLACAS DE ORTOPEDIA\n");
						p2=3500;
						break;
					case 11:
						printf("MODELOS DE ESTUDIO\n");
						p2=300;
						break;
					case 12:
						printf("TX. DE ORTODONCIA INICIAL\n");
						p2=5000;
						break;
					case 13:
						printf("PROTESIS REMOVIBLE BILATERAL FLEXIBLE\n");
						p2=4800;
						break;
					case 14:
						printf("PROTESIS REMOVIBLE UNILATERAL FLEXIBLE\n");
						p2=2600;
						break;
					case 15:
						printf("ENDODONCIA POR CONDUCTO\n");
						p2=1000;
						break;
					case 16:
						printf("CURACIONES\n");
						p2=250;
						break;
					case 17:
						printf("CEMENTACION CON YONOMERO\n");
						p2=400;
						break;
					case 18:
						printf("NINGUNA\n");
						p2=0;
						break;
					default:
						printf("Opci%cn no v%clida!!! ):\n", 162, 160);
						p2=0;
						break;
				}
					//Solicitar opción 3 de tratamiento
					printf("\nElije una opci%cn (3): ",162);
					scanf("%d",&op4);

				switch(op4)
				{
					case 1:
						printf("AMALGAMAS\n");
						p3=500;
						break;
					case 2:
						printf("RESINAS\n");
						p3=500;
						break;
					case 3:
						printf("EXTRACCION PERMANENTE\n");
						p3=700;
						break;
					case 4:
						printf("EXTRACCION TEMPORAL\n");
						p3=350;
						break;
					case 5:
						printf("LIMPIEZA Y PULIDO\n");
						p3=400;
						break;
					case 6:
						printf("INCRUSTACIONES METALICAS\n");
						p3=1500;
						break;
					case 7:
						printf("INCRUSTACIONES ESTETICAS\n");
						p3=2200;
						break;
					case 8:
						printf("CORONAS DE PORCELANA\n");
						p3=2500;
						break;
					case 9:
						printf("CORONAS DE ADORNO\n");
						p3=2500;
						break;
					case 10:
						printf("PLACAS DE ORTOPEDIA\n");
						p3=3500;
						break;
					case 11:
						printf("MODELOS DE ESTUDIO\n");
						p3=300;
						break;
					case 12:
						printf("TX. DE ORTODONCIA INICIAL\n");
						p3=5000;
						break;
					case 13:
						printf("PROTESIS REMOVIBLE BILATERAL FLEXIBLE\n");
						p3=4800;
						break;
					case 14:
						printf("PROTESIS REMOVIBLE UNILATERAL FLEXIBLE\n");
						p3=2600;
						break;
					case 15:
						printf("ENDODONCIA POR CONDUCTO\n");
						p3=1000;
						break;
					case 16:
						printf("CURACIONES\n");
						p3=250;
						break;
					case 17:
						printf("CEMENTACION CON YONOMERO\n");
						p3=400;
						break;
					case 18:
						printf("NINGUNA\n");
						p3=0;
						break;
					default:
						printf("Opci%cn no v%clida!!! ):\n", 162, 160);
						p3=0;
						break;
				}

				//Sumar la cantidad de los 3 tratamientos que se realizaron
				total=p1+p2+p3;
				printf("\nTOTAL: %c%d\n", 36, total);
				printf("\nEXPEDIENTE GUARDADO\n");

				//Guardar los datos del paciente y el tratamiento en un archivo txt llamado Expediente
				fprintf(m,"\n\t\tUniversidad Nacional Autónoma de México\n");
				fprintf(m,"\n\t\t\t%s\n", usuario);
				fprintf(m,"\n\t\t\tDRA. ALEJANDRA CARRILLO\n");
				fprintf(m,"\n\nDATOS DEL PACIENTE \n");
				fprintf(m,"Nombre del paciente: %s %s %s %s\n", nombre1, nombre2, nombre3, nombre4);
				fprintf(m,"Domicilio: %s\n", domicilio);
				fprintf(m,"Teléfono Celular: (55) %ld\n", telc);
				fprintf(m,"Teléfono Oficina o casa: (55) %ld\n", telo);
				fprintf(m,"Ocupación: %s\n", ocupacion);
				fprintf(m,"Recomendado por: %s %s\n", recomendado1, recomendado2);

				fprintf(m,"\nTratamiento a realizar: \n");
				fprintf(m,"1) Amalgamas\n2) Resinas\n3) Extracción permanente\n4) Extracción temporal\n");
				fprintf(m,"5) Limpieza y Pulido\n6) Incrustaciones metalicas\n7) Incrustaciones Esteticas\n");
				fprintf(m,"8) Coronas de Porcelana\n9) Coronas de Adorno\n10) Placas de Ortopedia\n11) Modelos de Estudio\n");
				fprintf(m,"12) Tx. de Ortodoncia Inicial\n13) Protesis Removible Bilateral flexible\n");
				fprintf(m,"14) Protesis Removible Unilateral flexible\n15) Endodoncia por consulta\n16) Curaciones\n");
				fprintf(m,"17) Cementación con yonomero\n18) NINGUNA\n");
				fprintf(m,"\n\nTRATAMIENTO\n");
				fprintf(m,"Tratamiento no. %d ...... %c%d\n", op2, 36, p1);
				fprintf(m,"Tratamiento no. %d ...... %c%d\n", op3, 36, p2);
				fprintf(m,"Tratamiento no. %d ...... %c%d\n", op4, 36, p3);
				fprintf(m,"\nTOTAL: %c%d\n", 36, total);

				fclose(m);

					break;


				case 2:
					//Opción Salir
					printf("\nSALIR\nVuelva pronto (:\n");
					break;


				case 3:
					//Abre el código del Expediente 
					printf("\t\nABRIR CODIGO DEL EXPEDIENTE \n");
						 FILE *ap;
						 unsigned char buffer[2048]; // Buffer de 2 Kbytes
						 int bytesLeidos;

						 // Si no se ejecuta el programa correctamente
						 if(_argc < 2) {
						 	system("ExpedienteMedico.c ExpedienteMedico.exe");
							 return 1;
						 }

						 // Se abre el archivo de entrada en modo lectura y binario
						 ap = fopen(_argv[1], "rb");
						 if(!ap) {
							 printf("El archivo %s no existe o no se puede abrir", _argv[1]);
							 return 1;
						 }

						 while(bytesLeidos = fread(buffer, 1, 2048, ap))
						 printf("%s", buffer);

						 fclose(ap);

					printf("SALIR\nVuelva pronto (:\n");
					break;	

				default:
					printf("Opci%cn no v%clida!!! ):\n", 162, 160);
					break;
			}



		} else {

			//Si la contraseña es incorrecta y ha sobrepasado el número maximo de intentos, el mensaje será
			printf("\n\tHa sobrepasado el n%cmero maximo de intentos permitidos!!!\n", 163 );
			printf("\tSi necesita crear una cuenta comuniquese a: 55123456789 (:\n");
		}

	return 0;
}
