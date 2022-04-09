#include <stdio.h>
#include <math.h>

int main(){
	
	int dia, mes, ano;
	
	printf("dia:");
	scanf("%i",&dia);
	
	printf("mes:");
	scanf("%i",&mes);
	
	printf("ano:");
	scanf("%i",&ano);
	
	if (ano <= 0)
		printf("informe um ano válido");
	else if (ano % 4 == 0){
		switch (mes){
			case 1: { /*Janeiro*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 2: { /*fevereiro*/
				if (dia <= 0 && dia > 29){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 28){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 29){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 3: { /*março*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 4: { /*abril*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 5: { /*maio*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 6: { /*junho*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 7: { /*julho*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 8: { /*agosto*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 9: { /*setembro*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 10: { /*outubro*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 11: { /*novembro*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 12: { /*dezembro*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = 1;
					ano = ++ano;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
				break;
			default:
				printf("Mes invalido");
			}
				break;
		}
	}
	else if (ano % 4 != 0){
		switch (mes){
			case 1: { /*Janeiro*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 2: { /*fevereiro*/
				if (dia <= 0 && dia > 28){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 27){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 28){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 3: { /*março*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 4: { /*abril*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes = ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 5: { /*maio*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes == ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 6: { /*junho*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes == ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 7: { /*julho*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes == ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 8: { /*agosto*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes == ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 9: { /*setembro*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes == ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 10: { /*outubro*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes == ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 11: { /*novembro*/
				if (dia <= 0 && dia > 30){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 29){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 30){
					dia = 1;
					mes == ++ mes ;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
			}
				break;
			case 12: { /*dezembro*/
				if (dia <= 0 && dia > 31){
					printf("Dia invalido");}	
				else if (dia >= 1 && dia <= 30){
					dia = ++ dia ;
					printf("%i/%i/%i\n",dia , mes, ano);
				}	
				else if (dia = 31){
					dia = 1;
					mes = 1;
					ano = ++ ano;
					printf("%i/%i/%i\n",dia, mes, ano);
				}
				break;
			default:
				printf("Mes invalido");
			}
				break;
		}
	}
	return 0;	
}
