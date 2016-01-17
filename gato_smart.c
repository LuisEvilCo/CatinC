//main
#include <stdio.h>
#include <stdlib.h>

void iniciargato();
void mostrar();
void usuario(int tirar);
void maquina(int dato);
int score();
void jugar();
int analizar(int jugador);
int max();

char gato[17][17]={'\0'};
int puntuacion[9]={0};
int opcion[9]={0};
int tirar,ganador=0,turno=0,media=1,baja=-1,alta=11,enemigo;

main()
{
	srand(time(NULL));
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
				printf("Creo que esa casilla esta ocupada [%d]\n",tirar);
				getch();
				jugar();
			}
		}
	}
	else{
		mostrar();
		tirar = analizar(1);
		/*printf("Jugador X\n : ");
		scanf("%d",&tirar);*/
		if((0<=tirar)&&(tirar<=8))
		{
			if(puntuacion[tirar]==0)
			{
			maquina(tirar);
			ganador = score();
			turno+=1;
			}
			else{
				printf("Creo que esa casilla esta ocupada [%d]\n",tirar);
				//getch();
				jugar();
			}
		}
	}
	
	switch(ganador)
	{
		case 1:
		{
			mostrar();
			printf("Ganaron las X, gracias por jugar\n");
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
	switch(dato)
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
	for(i=0;i<=16;i++)
		for(j=0;j<=16;j++)
			gato[i][j]='\0';
	
	for(i=0;i<=9;i++)
		puntuacion[i]=0;
	
	ganador=0;
	turno=rand()%2;
	
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
	/*printf("p:");
	for(i=0;i<=8;i++)
		printf("%d\t",puntuacion[i]);
	printf("\n");
	printf("o:");
	for(i=0;i<=8;i++)
		printf("%d\t",opcion[i]);
	printf("\n");*/
}

int max()
{
	int a=-1,i=0;
	for(i=0;i<=8;i++)
	{
		if(a<=opcion[i]){
		if(puntuacion[i]==0){
			a=i;
			if(a==11){
				return a;
				}
			}
			}		
	}
	if(a==1)
	{
		int inicial[5]={0,2,6,8,4};
		a=inicial[rand()%5];
	}
	while(puntuacion[a]!=0){
		a=rand()%9;
	};
	return a;
}

int si_max(int a,int b)
{
	if(a==0)
		return -1;
	if(a==1)
		return -1;
	if(a<=b){
		return b;}
	else{
		return a;}
}

int analizar(int jugador)
{
	alta =11;
	if(jugador==1)
	{
		enemigo=2;
	}
	else{
		enemigo=1;
	}
	int x=0,i=0;
	if((puntuacion[0]==0)&&(puntuacion[1]==0)&&(puntuacion[2]==0)&&(puntuacion[3]==0)&&(puntuacion[4]==0)&&(puntuacion[5]==0)&&(puntuacion[6]==0)&&(puntuacion[7]==0)&&(puntuacion[8]==0)){
			int validos[5]={0,2,4,6,8};
			x=validos[rand()%5];
		return x;
	}//juego vacio
	
	if(puntuacion[1]==jugador){
	opcion[0]=media;}
	if(puntuacion[4]==jugador){
	opcion[0]=media;}
	if(puntuacion[3]==jugador){
	opcion[0]=media;}
	if((puntuacion[1]==puntuacion[2]) && (puntuacion[1]==jugador)){
		opcion[0]=alta;
	}
	if(puntuacion[3]==puntuacion[6] && puntuacion[3]==jugador){
		opcion[0]=alta;
	}
	if((puntuacion[4]==puntuacion[8]) && (puntuacion[4]==jugador)){
		opcion[0]=alta;
	} //casilla 0
	if(puntuacion[0]==jugador){
	opcion[1]=media;}
	if(puntuacion[2]==jugador){
	opcion[1]=media;}
	if(puntuacion[4]==jugador){
	opcion[1]=media;}
	if((puntuacion[0]==puntuacion[2]) && (puntuacion[0]==jugador)){
		opcion[1]=alta;
	}
	if((puntuacion[4]==puntuacion[7]) && (puntuacion[4]==jugador)){
		opcion[1]=alta;
	}//casilla 1
	if(puntuacion[1]==jugador){
	opcion[2]=media;}
	if(puntuacion[5]==jugador){
	opcion[2]=media;}
	if(puntuacion[4]==jugador){
	opcion[2]=media;}
	if((puntuacion[1]==puntuacion[0]) && (puntuacion[1]==jugador)){
		opcion[2]=alta;
	}
	if((puntuacion[5])==puntuacion[8] && (puntuacion[5]==jugador)){
		opcion[2]=alta;
	}
	if((puntuacion[4]==puntuacion[6]) && (puntuacion[4]==jugador)){
		opcion[2]=alta;
	}//casilla 2
	if(puntuacion[0]==jugador){
	opcion[3]=media;}
	if(puntuacion[6]==jugador){
	opcion[3]=media;}
	if(puntuacion[4]==jugador){
	opcion[3]=media;}
	if((puntuacion[0]==puntuacion[3]) && (puntuacion[0]==jugador)){
		opcion[3]=alta;
	}
	if((puntuacion[4]==puntuacion[5]) && (puntuacion[4]==jugador)){
		opcion[3]=alta;
	}//casilla 3
	if(puntuacion[0]==jugador){
	opcion[4]=media;}
	if(puntuacion[1]==jugador){
	opcion[4]=media;}
	if(puntuacion[2]==jugador){
	opcion[4]=media;}
	if(puntuacion[5]==jugador){
	opcion[4]=media;}
	if(puntuacion[3]==jugador){
	opcion[4]=media;}
	if(puntuacion[6]==jugador){
	opcion[4]=media;}
	if((puntuacion[0]==puntuacion[8]) && (puntuacion[0]==jugador)){
		opcion[4]=alta;
	}
	if((puntuacion[6]==puntuacion[1]) && (puntuacion[6]==jugador)){
		opcion[4]=alta;
	}
	if((puntuacion[3]==puntuacion[5]) && (puntuacion[3]==jugador)){
		opcion[4]=alta;
	}
	if((puntuacion[1]==puntuacion[7]) && (puntuacion[1]==jugador)){
		opcion[4]=alta;
	}//casilla 4
	if(puntuacion[2]==jugador){
	opcion[5]==media;}
	if(puntuacion[8]==jugador){
	opcion[5]==media;}
	if(puntuacion[4]==jugador){
	opcion[5]=media;}
	if((puntuacion[3]==puntuacion[4]) && (puntuacion[3]==jugador)){
		opcion[5]=alta;
	}
	if((puntuacion[2]==puntuacion[8]) && (puntuacion[2]==jugador)){
		opcion[5]=alta;
	}//casilla 5
	if(puntuacion[3]==jugador){
	opcion[6]=media;}
	if(puntuacion[4]==jugador){
	opcion[6]=media;}
	if(puntuacion[7]==jugador){
	opcion[6]=media;}
	if((puntuacion[0]==puntuacion[3]) && (puntuacion[0]==jugador)){
		opcion[6]=alta;
	}
	if((puntuacion[7]==puntuacion[8]) && (puntuacion[7]==jugador)){
		opcion[6]=alta;
	}
	if((puntuacion[4]==puntuacion[2]) && (puntuacion[4]==jugador)){
		opcion[6]=alta;
	}//casilla 6
	if(puntuacion[6]==jugador){
	opcion[7]=media;}
	if(puntuacion[4]==jugador){
	opcion[7]=media;}
	if(puntuacion[8]==jugador){
	opcion[7]=media;}
	if((puntuacion[4]==puntuacion[1]) && (puntuacion[4]==jugador)){
		opcion[7]=alta;
	}
	if((puntuacion[6]==puntuacion[8]) && (puntuacion[6]==jugador)){
		opcion[7]=alta;
	}//casilla 7
	if(puntuacion[7]==jugador){
	opcion[8]=media;}
	if(puntuacion[4]==jugador){
	opcion[8]=media;}
	if(puntuacion[7]==jugador){
	opcion[8]=media;}
	if((puntuacion[6]==puntuacion[7]) && (puntuacion[6]==jugador)){
		opcion[8]=alta;
	}
	if((puntuacion[0]==puntuacion[4]) && (puntuacion[0]==jugador)){
		opcion[8]=alta;
	}
	if((puntuacion[2]==puntuacion[5]) && (puntuacion[2]==jugador)){
		opcion[8]=alta;
	}//casilla 8
	//analizando al enemigo
	alta=10;
	if((puntuacion[1]==puntuacion[2]) && (puntuacion[1]==enemigo)){
		opcion[0]=alta;
	}
	if((puntuacion[3]==puntuacion[6]) && (puntuacion[3]==enemigo)){
		opcion[0]=alta;
	}
	if((puntuacion[4]==puntuacion[8]) && (puntuacion[4]==enemigo)){
		opcion[0]=alta;
	}
	if((puntuacion[0]==puntuacion[2]) && (puntuacion[0]==enemigo)){
		opcion[1]=alta;
	}
	if((puntuacion[4]==puntuacion[7]) && (puntuacion[4]==enemigo)){
		opcion[1]=alta;
	}
	if((puntuacion[0]==puntuacion[1]) && (puntuacion[0]==enemigo)){
		opcion[2]=alta;
	}
	if((puntuacion[5]==puntuacion[8]) && (puntuacion[5]==enemigo)){
		opcion[2]=alta;
	}
	if((puntuacion[4]==puntuacion[6]) && (puntuacion[4]==enemigo)){
		opcion[2]=alta;
	}
	if((puntuacion[0]==puntuacion[6]) && (puntuacion[0]==enemigo)){
		opcion[3]=alta;
	}
	if((puntuacion[4]==puntuacion[5]) && (puntuacion[4]==enemigo)){
		opcion[3]=alta;
	}
	if((puntuacion[0]==puntuacion[8]) && (puntuacion[0]==enemigo)){
		opcion[4]=alta;
	}
	if((puntuacion[1]==puntuacion[7]) && (puntuacion[1]==enemigo)){
		opcion[4]=alta;
	}
	if((puntuacion[2]==puntuacion[6]) && (puntuacion[2]==enemigo)){
		opcion[4]=alta;
	}
	if((puntuacion[3]==puntuacion[5]) && (puntuacion[3]==enemigo)){
		opcion[4]=alta;
	}
	if((puntuacion[3]==puntuacion[4]) && (puntuacion[3]==enemigo)){
		opcion[5]=alta;
	}
	if((puntuacion[2]==puntuacion[8]) && (puntuacion[2]==enemigo)){
		opcion[5]=alta;
	}
	if((puntuacion[0]==puntuacion[3]) && (puntuacion[0]==enemigo)){
		opcion[6]=alta;
	}
	if((puntuacion[7]==puntuacion[8]) && (puntuacion[7]==enemigo)){
		opcion[6]=alta;
	}
	if((puntuacion[4]==puntuacion[2]) && (puntuacion[4]==enemigo)){
		opcion[5]=alta;
	}
	if((puntuacion[6]==puntuacion[8]) && (puntuacion[6]==enemigo)){
		opcion[7]=alta;
	}
	if((puntuacion[4]==puntuacion[1]) && (puntuacion[4]==enemigo)){
		opcion[7]=alta;
	}
	if((puntuacion[6]==puntuacion[7]) && (puntuacion[6]==enemigo)){
		opcion[8]=alta;
	}
	if((puntuacion[4]==puntuacion[0]) && (puntuacion[4]==enemigo)){
		opcion[8]=alta;
	}
	if((puntuacion[2]==puntuacion[5]) && (puntuacion[2]==enemigo)){
		opcion[8]=alta;
	}//
	if(puntuacion[1]==enemigo){
	opcion[0]=si_max(opcion[0],baja);}
	if(puntuacion[3]==enemigo){
	opcion[0]=si_max(opcion[0],baja);}
	if(puntuacion[4]==enemigo){
	opcion[0]=si_max(opcion[0],baja);}
	if(puntuacion[0]==enemigo){
	opcion[1]=si_max(opcion[1],baja);}
	if(puntuacion[2]==enemigo){
	opcion[1]=si_max(opcion[1],baja);}
	if(puntuacion[4]==enemigo){
	opcion[1]=si_max(opcion[1],baja);}
	if(puntuacion[1]==enemigo){
	opcion[2]=si_max(opcion[2],baja);}
	if(puntuacion[4]==enemigo){
	opcion[2]=si_max(opcion[2],baja);}
	if(puntuacion[8]==enemigo){
	opcion[2]=si_max(opcion[2],baja);}
	if(puntuacion[0]==enemigo){
	opcion[3]=si_max(opcion[2],baja);}
	if(puntuacion[4]==enemigo){
	opcion[3]=si_max(opcion[3],baja);}
	if(puntuacion[6]==enemigo){
	opcion[3]=si_max(opcion[3],baja);}
	if(puntuacion[4]==enemigo){
	opcion[5]=si_max(opcion[5],baja);}
	if(puntuacion[2]==enemigo){
	opcion[5]=si_max(opcion[5],baja);}
	if(puntuacion[8]==enemigo){
	opcion[5]=si_max(opcion[5],baja);}
	if(puntuacion[3]==enemigo){
	opcion[6]=si_max(opcion[6],baja);}
	if(puntuacion[7]==enemigo){
	opcion[6]=si_max(opcion[6],baja);}
	if(puntuacion[8]==enemigo){
	opcion[6]=si_max(opcion[6],baja);}
	if(puntuacion[4]==enemigo){
	opcion[7]=si_max(opcion[7],baja);}
	if(puntuacion[6]==enemigo){
	opcion[7]=si_max(opcion[7],baja);}
	if(puntuacion[8]==enemigo){
	opcion[7]=si_max(opcion[7],baja);}
	if(puntuacion[4]==enemigo){
	opcion[8]=si_max(opcion[8],baja);}
	if(puntuacion[7]==enemigo){
	opcion[8]=si_max(opcion[8],baja);}
	if(puntuacion[5]==enemigo){
	opcion[8]=si_max(opcion[8],baja);}
	return max();
}