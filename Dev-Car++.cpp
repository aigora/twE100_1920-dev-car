#include <stdio.h>
#include <stdlib.h>

# define N 3

typedef struct
{
	float factura;
}Factura;

void PedirPrecios (void);
void Operandos (float *vi, float *add1, float *add2, float *vf);
void Suma (float vi, float add1, float add2, float vf);
void PedirVector (float *v, int dim);
void LimpiarBufer (void);
void PresentarVector (float *v, int dim);
void Cierre (void);

int main ()
{
	Factura z;
	
	char nombre [50];
	char edad [3];
	char pin [4];
	char aux1 [5];
	char aux2 [5];
	
	printf ("****************************************\n****************************************\nBienvenido al concesionario Dev-C++\n****************************************\n****************************************\n\n");
	printf ("¿C%cmo se llama?: \n", 162);
	scanf ("%s", nombre);
	printf ("¿Cu%cntos años tiene?: \n", 160);
	scanf ("%d", edad);
	printf ("Introduzca su n%cmero PIN de tarjeta si est%c interesado en comprar un coche: \n", 163, 160);
	scanf ("%g", pin);
	system ("cls");

	FILE *factura;
	
	factura = fopen ("factura.txt", "w");
	if (factura == NULL)
	{
		printf ("No se ha podido abrir el fichero.\n");
		exit (1);
	}
	
	float vi, add1, add2, vf;
	
	int eleccion;
	int respuesta;
	int respuestados;
	int respuestatres;
	int respuestacuatro;
	int respuestacinco;
	int respuestaseis;
	int respuestasiete;
	int respuestaocho;
	int respuestanueve;
	int respuestadiez;
	int respuestaonce;
	int respuestadoce;
	int respuestatrece;
	int respuestacatorce;
	int respuestaquince;
	int respuestadieciseis;
	int respuestadiecisiete;
	int respuestadieciocho;
	int respuestadiecinueve;
	int respuestaveinte;
	int respuestaveintiuno;
	int respuestaveintidos;
	int respuestaveintitres;
	int respuestaveinticuatro;
	
	printf ("Elija el tipo de coche que desea comprar\n");
	
	printf ("1. Modelo coupe\n");
	printf ("2. Modelo sub\n");
	printf ("3. Modelo berlina\n");
	printf ("4. Modelo descapotado\n");
	scanf ("%d", &eleccion);
	system ("cls");

	switch (eleccion)
	{
		case 1:
			retorno:
			printf ("El modelo elegido tiene un coste inicial de 38000€\n");
			printf ("A continuaci%cn elija las modificaciones o adiciones que desea para su coche coup%c:\n", 162, 130);
			printf ("1. ruedas de serie\n");
			printf ("2. ruedas con llantas a elegir\n");
			scanf ("%d", &respuesta);
			
			
			switch (respuesta)
			{
				case 1:
					printf ("Ha elegido mantener las ruedas con llantas de serie, no se adiciona coste a la factura.\n");
					printf ("1. pintura de serie\n");
					printf ("2. pintura a elegir\n");
					scanf ("%d", &respuestados);
						
						switch (respuestados)
						{
							case 1:
								printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
								fprintf (factura, "El precio final de su compra es: 38000€\n");
						
							case 2:
								fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
								printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
								void PedirPrecios (void);
								{
									printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
									scanf ("%f", &vi);
									printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
									scanf ("%f", &add1);
									printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
									scanf ("%f", &add2);
								}
								void Operandos (void);
								void Suma (float vi, float add1, float add2, float vf);
								{
									float Facturaz;
									vf = vi + add1 + add2;
									printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
								}
								fprintf (factura, "El precio final de su compra es: %g\n");
								printf ("El precio final de su compra es: %g\n");
						break;}
			
			
				case 2:
						printf ("1. llantas de 17'\n");
						printf ("2. llantas de 18'\n");
						printf ("3. llantas de 19'\n");
						scanf ("%d", &respuestatres);
						
					switch (respuestatres)
					{
						case 1:
						fprintf (factura, "La modificación elegida ha sumado 300€ a su factura final.\n");
						printf ("La modificación elegida ha sumado 300€ a su factura final.\n");
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf("%d", &respuestacuatro);
							
							switch (respuestacuatro)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
						
						
						case 2:
						fprintf (factura, "La modificaci%cn elegida ha sumado 400€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestacinco);
							
							switch (respuestacinco)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
						
						
						case 3:
						fprintf (factura, "La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);
						printf ("La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);	
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestaseis);
							
							switch (respuestaseis)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}	
					break;}
			break;}
			
			
		case 2:
			
			printf ("El modelo elegido tiene un coste inicial de 28000€\n");
			printf ("A continuaci%cn elija las modificaciones o adiciones que desea para su coche sub:\n", 162);
			printf ("1. ruedas de serie");
			printf ("2. ruedas con llantas a elegir\n");
			scanf ("%d", &respuestasiete);
			
			switch (respuestasiete)
			{
				case 1:
					printf ("Ha elegido mantener las ruedas de serie, no se adiciona coste a la factura.\n");
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestaocho);
							
							switch (respuestaocho)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									fprintf (factura, "El precio final de su compra es: 28000€\n");
									printf ("El precio final de su compra es: 28000€\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
					
				case 2:
					printf ("1. llantas de 17'\n");
					printf ("2. llantas de 18'\n");
					printf ("3. llantas de 19'\n");
					scanf ("%d", &respuestanueve);
					
				switch (respuestanueve)
				{
					case 1:
					fprintf (factura, "La modificaci%cn elegida ha sumado 300€ a su factura final.\n", 162);
					printf ("La modificaci%cn elegida ha sumado 300€ a su factura final.\n", 162);
							puts ("1. pintura de serie\n");
							puts ("2. pintura a elegir\n");
							scanf ("%d", &respuestadiez);
							
							switch (respuestadiez)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
					

					case 2:
					fprintf (factura, "La modificaci%cn elegida ha sumado 400€ a su factura final.\n", 162);
					printf ("La modificaci%cn elegida ha sumado 400€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestaonce);
							system ("cls");
							
							switch (respuestaonce)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
					
					
					case 3:
					fprintf (factura, "La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);
					printf ("La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestadoce);
							
							switch (respuestadoce)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							}		
				break;}
			break;
			
			
		case 3:
			
			printf ("El modelo elegido tiene un coste inicial de 32000€\n");
			printf ("A continuaci%cn elija las modificaciones o adiciones que desea para su coche berlina:\n", 162);
			printf ("1. ruedas de serie\n");
			printf ("2. ruedas con llantas a elegir\n");
			scanf("%d", &respuestatrece);
			
			switch (respuestatrece)
			{
				case 1:
					printf ("Ha elegido mantener las ruedas de serie, no se adiciona coste a la factura.\n");
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf("%d", &respuestacatorce);
							
							switch (respuestacatorce)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									fprintf (factura, "El precio final de su compra es: 32000€\n");
									printf ("El precio final de su compra es: 32000€\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
					
			
				case 2:
						printf ("1. llantas de 17'\n");
						printf ("2. llantas de 18'\n");
						printf ("3. llantas de 19'\n");
						scanf ("%d", &respuestaquince);
						system ("cls");
						
					switch (respuestaquince)
					{
						case 1:
						fprintf (factura, "La modificaci%cn elegida ha sumado 300€ a su factura final.\n", 162);
						printf ("La modificaci%cn elegida ha sumado 300€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestadieciseis);
							system("cls");
							
							switch (respuestadieciseis)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
						
						
						case 2:
						fprintf (factura, "La modificaci%cn elegida ha sumado 400€ a su factura final.\n", 162);
						printf ("La modificaci%cn elegida ha sumado 400€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestadiecisiete);
							
							switch (respuestadiecisiete)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
						
						
						case 3:
						fprintf (factura, "La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);
						printf ("La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestadieciocho);
							
							switch (respuestadieciocho)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
						break;	}
	
				break;	}
			break;}
			
			
		case 4:
			
			printf ("El modelo elegido tiene un coste inicial de 35000€\n");
			printf ("A continuaci%cn elija las modificaciones o adiciones que desea para su coche descapotado:\n", 162);
			printf ("1. ruedas de serie\n");
			printf ("2. ruedas con llantas a elegir\n");
			scanf("%d", &respuestadiecinueve);
			
			switch (respuestadiecinueve)
			{
				case 1:
					printf ("Ha elegido mantener las ruedas de serie, no se adiciona coste a la factura.\n");
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestaveinte);
							
							switch (respuestaveinte)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									fprintf (factura, "El precio final de su compra es: 35000€\n");
									printf ("El precio final de su compra es: 35000€\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
					
			
				case 2:
						printf ("1. llantas de 17'\n");
						printf ("2. llantas de 18'\n");
						printf ("3. llantas de 19'\n");
						scanf ("%d", &respuestaveintiuno);
						
					switch (respuestaveintiuno)
					{
						case 1:
						fprintf (factura, "La modificaci%cn elegida ha sumado 300€ a su factura final.\n", 162);
						printf ("La modificaci%cn elegida ha sumado 300€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestaveintidos);
							
							switch (respuestaveintidos)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}
						
						
						case 2:
						fprintf (factura, "La modificaci%cn elegida ha sumado 400€ a su factura final.\n", 162);
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestaveintitres);
							
							switch (respuestaveintitres)
							{
								case 1:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 2:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
						break;	}
						
						
						case 3:
						fprintf (factura, "La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);
						printf ("La modificaci%cn elegida ha sumado 500€ a su factura final.\n", 162);	
							printf ("1. pintura de serie\n");
							printf ("2. pintura a elegir\n");
							scanf ("%d", &respuestaveinticuatro);
							
							switch (respuestaveinticuatro);
							{
								case 8:
									printf ("Ha elegido mantener la pintura de serie, no se adiciona coste a la factura.\n");
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							
								case 9:
									fprintf (factura, "La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									printf ("La modificaci%cn elegida ha sumado: 600€ a su factura final.\n", 162);
									
									void PedirPrecios (void);
									{
										printf ("Introduzca el valor inicial del modelo de coche elegido: %f\n");
										scanf ("%f", &vi);
										printf ("Introduzca el valor añadido por la modificaci%cn de llantas elegida: %f\n", 162);
										scanf ("%f", &add1);
										printf ("Introduzca el valor añadido por la modificaci%cn de pintura elegida: %f\n", 162);
										scanf ("%f", &add2);
									}
									void Operandos (void);
									void Suma (float vi, float add1, float add2, float vf);
									{
										float Facturaz;
										vf = vi + add1 + add2;
										printf ("\n%f + %f + %f = %g", vi, add1, add2, vf);
									}
									fprintf (factura, "El precio final de su compra es: %g\n");
									printf ("El precio final de su compra es: %g\n");
							break;}	
					break;}
			break;}
	break;}
	
	printf ("Nos gustar%ca regalarle un c%cdigo de descuento para cuando vuelva a nuestro concesionario\n", 161, 162);

    float vector1 [N], vector2 [N], auxiliar;
    char cierre;
	int i, j;

	do
    {
        printf ("\nIndique las componentes del vector:\n");
        PedirVector (vector1, N);

        	for (i = 0; i < N; i++)
        	{
        		vector2 [i] = vector1 [i];
			}

			for (i = 0; i < N - 1; i++)
			{
				for (j = i + 1; j < N; j++)
				{
					if (vector2 [j] < vector2 [i])
					{
						auxiliar = vector2 [j];
						vector2 [j] = vector2 [i];
						vector2 [i] = auxiliar;
					}
				}
			}

        printf ("\n\nEl vector introducido es:\n");
        PresentarVector (vector1, N);
        printf ("\n\nSu c%cdigo de descuento para cuando vuelva a nuestro concesionario es:\n", 162);
        PresentarVector (vector2, N);
	return 999;
	}
	while (cierre == 's' || cierre == 'S');
    Cierre ();
    return 123;
	
getchar ();

fclose (factura);
	
return 999;
}
}

void PedirVector (float *v, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	printf ("\n\tIndique la componente %d del vector:   \n", i + 1);
        	scanf ("%f", &v [i]);
        	LimpiarBufer ();
		}
}

void LimpiarBufer (void)
{
	char c;
	while((c = getchar())!= EOF && c!= '\n');
}

void PresentarVector (float *v, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
        {
        	printf ("%g\t", v [i]);
		}
}

