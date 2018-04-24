#include <stdio.h>
#include <stdlib.h>

#include "G2_5Galli.h"



int main(void)
{
	float temp;
	espectral_t clase;
	char c;

	puts(MSJ_INGRESE_TEMP);
	if(scanf("%f",&temp)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_LECTURA);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	if (temp<MINIMA_TEMP || temp>MAXIMA_TEMP)
	{
		fprintf(stderr, "%s\n", MSJ_ERROR_TEMP );
		return EXIT_FAILURE;
	}

	else if (temp>=MINIMA_TEMP && temp<=MAXIMA_TEMP_M)
	{
		clase = CLASE_M;
	}

	else if (temp>MAXIMA_TEMP_M && temp<=MAXIMA_TEMP_K)
	{
		clase = CLASE_K;
	}

	else if (temp>MAXIMA_TEMP_K && temp<=MAXIMA_TEMP_G)
	{
		clase = CLASE_G;
	}	

	else if (temp>MAXIMA_TEMP_G && temp<=MAXIMA_TEMP_F)
	{
		clase = CLASE_F;
	}

	else if (temp>MAXIMA_TEMP_F && temp<=MAXIMA_TEMP_A)
	{
		clase = CLASE_A;
	}

	else if (temp>MAXIMA_TEMP_A && temp<=MAXIMA_TEMP_B)
	{
		clase = CLASE_B;
	}

	else if (temp>MAXIMA_TEMP_B && temp<=MAXIMA_TEMP_O)
	{
		clase = CLASE_O;
	}


	switch (clase){
		case CLASE_M:
			puts(MSJ_COLOR_ROJO);
			break;

		case CLASE_K:
			puts(MSJ_COLOR_NARANJA);
			break;

		case CLASE_G:
			puts(MSJ_COLOR_AMARILLO);
			break;

		case CLASE_F:
			puts(MSJ_COLOR_BLANCO_AMARILLENTO);
			break;

		case CLASE_A:
			puts(MSJ_COLOR_BLANCO);
			break;

		case CLASE_B:
			puts(MSJ_COLOR_BLANCO_AZULADO);
			break;

		default:
			puts(MSJ_COLOR_AZUL);
	}

	return EXIT_SUCCESS;
}