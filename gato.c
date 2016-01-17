//main
#include <stdio.h>
#include <stdlib.h>

void iniciargato();
void mostrar();
void usuario(int tirar);
void maquina(int dato);
int score();
void jugar();

char gato[17][17]={'\0'};
int puntuacion[9]={0};
int tirar,ganador=0,turno=0;

main()
{
	iniciargato();	
	jugar();	
}

void jugar(){
	
while(ganador==0)
{
	if(turno%2==0){
		mostrar();
		printf("Jugador O\n : ");
		scanf("%d",&tirar);
		if((0<=tirar)&&(tirar<=8))
		{
			if(puntuacion[tirar]==0)
			{
			usuario(tirar);
			ganador = score();
			turno+=1;
			}
			else{
				printf("Creo que esa casilla esta ocupada");
				getch();
				jugar();
			}
		}
	}
	else{
		mostrar();
		printf("Jugador X\n : ");
		scanf("%d",&tirar);
		if((0<=tirar)&&(tirar<=8))
		{
			if(puntuacion[tirar]==0)
			{
			maquina(tirar);
			ganador = score();
			turno+=1;
			}
			else{
				printf("Creo que esa casilla esta ocupada");
				getch();
				jugar();
			}
		}
	}
	
	switch(ganador)
	{
		case 1:
		{
			mostrar();
			printf("Felicidades usuario X, ganaste\n");
		}break;
		
		case 2:
		{
			mostrar();
			printf("Felicidades usuario O, ganaste\n");
		}break;
		
		case 3:
		{
			mostrar();
			printf("Empate, quizas si jugamos otra vez...\n");
		}break;
	}	
}
}

void usuario(int tirar)
{
	switch(tirar)
	{
		case 0:
		{			
			puntuacion[0]=2;
			gato[1][1]='/';
			gato[1][2]=238;
			gato[1][3]=92;
			gato[2][0]='|';
			gato[2][4]='|';
			gato[3][1]=92;
			gato[3][2]='_';
			gato[3][3]='/';
		}break;
		case 1:
		{
			puntuacion[1]=2;
			gato[1][7]='/';
			gato[1][8]=238;
			gato[1][9]=92;
			gato[2][6]='|';
			gato[2][10]='|';
			gato[3][7]=92;
			gato[3][8]='_';
			gato[3][9]='/';
		}break;
		case 2:
		{
			puntuacion[2]=2;
			gato[1][13]='/';
			gato[1][14]=238;
			gato[1][15]=92;
			gato[2][12]='|';
			gato[2][16]='|';
			gato[3][13]=92;
			gato[3][14]='_';
			gato[3][15]='/';
		}break;
		case 3:
		{
			puntuacion[3]=2;
			gato[7][1]='/';
			gato[7][2]=238;
			gato[7][3]=92;
			gato[8][0]='|';
			gato[8][4]='|';
			gato[9][1]=92;
			gato[9][2]='_';
			gato[9][3]='/';
		}break;
		case 4:
		{
			puntuacion[4]=2;
			gato[7][7]='/';
			gato[7][8]=238;
			gato[7][9]=92;
			gato[8][6]='|';
			gato[8][10]='|';
			gato[9][7]=92;
			gato[9][8]='_';
			gato[9][9]='/';
		}break;
		case 5:
		{
			puntuacion[5]=2;
			gato[7][13]='/';
			gato[7][14]=238;
			gato[7][15]=92;
			gato[8][12]='|';
			gato[8][16]='|';
			gato[9][13]=92;
			gato[9][14]='_';
			gato[9][15]='/';
		}break;
		case 6:
		{
			puntuacion[6]=2;
			gato[13][1]='/';
			gato[13][2]=238;
			gato[13][3]=92;
			gato[14][0]='|';
			gato[14][4]='|';
			gato[15][1]=92;
			gato[15][2]='_';
			gato[15][3]='/';
		}break;
		case 7:
		{
			puntuacion[7]=2;
			gato[13][7]='/';
			gato[13][8]=238;
			gato[13][9]=92;
			gato[14][6]='|';
			gato[14][10]='|';
			gato[15][7]=92;
			gato[15][8]='_';
			gato[15][9]='/';
		}break;
		case 8:
		{
			puntuacion[8]=2;
			gato[13][13]='/';
			gato[13][14]=238;
			gato[13][15]=92;
			gato[14][12]='|';
			gato[14][16]='|';
			gato[15][13]=92;
			gato[15][14]='_';
			gato[15][15]='/';
		}break;
	}
}

void maquina(int dato)
{
	int prob=dato;
	switch(prob)
	{
		case 0:
		{
			puntuacion[0]=1;
			gato[1][1]=92;
			gato[1][3]='/';
			gato[3][1]='/';
			gato[3][3]=92;
		}break;
		
		case 1:
		{
			puntuacion[1]=1;
			gato[1][7]=92;
			gato[1][9]='/';
			gato[3][7]='/';
			gato[3][9]=92;
		}break;
		
		case 2:
		{
			puntuacion[2]=1;
			gato[1][13]=92;
			gato[1][15]='/';
			gato[3][13]='/';
			gato[3][15]=92;
		}break;
		
		case 3:
		{
			puntuacion[3]=1;
			gato[7][1]=92;
			gato[7][3]='/';
			gato[9][1]='/';
			gato[9][3]=92;
		}break;
		
		case 4:
		{
			puntuacion[4]=1;
			gato[7][7]=92;
			gato[7][9]='/';
			gato[9][7]='/';
			gato[9][9]=92;
		}break;
		
		case 5:
		{
			puntuacion[5]=1;
			gato[7][13]=92;
			gato[7][15]='/';
			gato[9][13]='/';
			gato[9][15]=92;
		}break;
		
		case 6:
		{
			puntuacion[6]=1;
			gato[13][1]=92;
			gato[13][3]='/';
			gato[15][1]='/';
			gato[15][3]=92;
		}break;
		
		case 7:
		{
			puntuacion[7]=1;
			gato[13][7]=92;
			gato[13][9]='/';
			gato[15][7]='/';
			gato[15][9]=92;
		}break;
		
		case 8:
		{
			puntuacion[8]=1;
			gato[13][13]=92;
			gato[13][15]='/';
			gato[15][13]='/';
			gato[15][15]=92;
		}break;
	}
}

int score()
{
	if((puntuacion[0]==puntuacion[1]&&(puntuacion[1]==puntuacion[2]))&&(puntuacion[0]!=0)){
		return puntuacion[0];
	}
	if((puntuacion[3]==puntuacion[4]&&(puntuacion[4]==puntuacion[5]))&&(puntuacion[3]!=0)){
		return puntuacion[3];
	}
	if((puntuacion[6]==puntuacion[7]&&(puntuacion[7]==puntuacion[8]))&&(puntuacion[6]!=0)){
		return puntuacion[6];
	}
	if((puntuacion[0]==puntuacion[3]&&(puntuacion[3]==puntuacion[6]))&&(puntuacion[0]!=0)){
		return puntuacion[0];
	}
	if((puntuacion[1]==puntuacion[4]&&(puntuacion[4]==puntuacion[7]))&&(puntuacion[1]!=0)){
		return puntuacion[1];
	}
	if((puntuacion[2]==puntuacion[5]&&(puntuacion[5]==puntuacion[8]))&&(puntuacion[2]!=0)){
		return puntuacion[2];
	}
	if(((puntuacion[0]==puntuacion[4])&&(puntuacion[4]==puntuacion[8]))&&(puntuacion[0]!=0)){
		return puntuacion[0];
	}
	if((puntuacion[2]==puntuacion[4]&&(puntuacion[4]==puntuacion[6]))&&(puntuacion[2]!=0)){
		return puntuacion[2];
	}
	if((puntuacion[0]!=0)&&(puntuacion[1]!=0)&&(puntuacion[2]!=0)&&(puntuacion[3]!=0)&&(puntuacion[4]!=0)&&(puntuacion[5]!=0)&&(puntuacion[6]!=0)&&(puntuacion[7]!=0)&&(puntuacion[8]!=0)){
		return 3;
	}
	return 0;
}

void iniciargato()
{
	int j=5,i=0;
	for(i=0;i<=16;i++){
		for(j=5;j<=11;j+=6){
			gato[i][j]='|';
		}
	}
	i=5;
	j=0;
	for(i=5;i<=11;i+=6)
	{
		for(j=0;j<=16;j++)
			gato[i][j]='-';
	}
	gato[2][2]='0';
	gato[2][8]='1';
	gato[2][14]='2';
	gato[8][2]='3';
	gato[8][8]='4';
	gato[8][14]='5';
	gato[14][2]='6';
	gato[14][8]='7';
	gato[14][14]='8';
}

void mostrar()
{
	system("cls");
	int i=0,j=0;
	for(i=0;i<=16;i++){
		for(j=0;j<=16;j++){
			printf("%c",gato[i][j]);
		}
		printf("\n");	
	}
}