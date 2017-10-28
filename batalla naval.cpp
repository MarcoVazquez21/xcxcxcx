#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(){
	
	int b,c, i, j, k, n, pc, usuario;
	int carac;
	int ip;
	int tiropcx,tiropcy;
	int cxpc,cypc;
	int cux,cuy;
	char cx;
	char cy; 
	
	int matriz1[11][11];	   
	int matriz2[11][11];	       
	int matrizf[17][52]; 
	system("color 9");
		
	for ( i = 0 ; i < 11 ; i++){
		b = 47 + i;
		for( j = 0 ; j < 11 ; j++){
			
			matriz1[i][j] = b;
			b++;
			
		}

	}
	
	for( i = 0 ; i < 11 ; i++){ 
		b = 47 + i;
		for( j = 0 ; j < 11 ; j++){
			
			matriz2[i][j] = b;
			b++;
			
		}

	}	
	
	for ( i = 0 ; i < 17 ; i++){ 
	
		for( j = 0; j < 52; j++)
		{
			
			matrizf[i][j] = 126 ;	
			
		} 
	
	} 
		
		
		
		
	
		
		for ( i = 1 ; i < 11 ; i++){ //Este bloque genera la matriz de la pc con valores en 0 para la pc
		
			for( j = 1 ; j < 11 ; j++){
			
				matriz1[i][j] = 177;
			
			}
		
		}
			
		for ( i = 1 ; i < 11 ; i++){ //Este bloque genera la matriz de la pc con valores en 0 para el usuario
		
			for( j = 1 ; j < 11 ; j++){
			
				matriz2[i][j] = 177;
			
			}
		
		}
	
		for( i = 0 ; i < 6 ; i++){ // Bloque que genera las naves de la pc 
			

			cxpc = rand()% 10;
			cxpc += 1;
			cypc = rand()% 10;
			cypc += 1;
			
			if( matriz1[cxpc][cypc] == 11){
				
				i--;				
				
			}
			
			matriz1[cxpc][cypc] = 177 ;
			
		}
	
		printf("\n");	
		
		for( i = 1; i < 6 ; i++ ){  //Éste bloque se encarga de pedirle los valores al usuario de sus naves:
		
			system ("cls");
		
			printf("Ingresa el valor de tu barquito %d:\n", i);
					
					printf("coordenada en x: ");
					scanf("%d", &cux);
					printf("coordenada en y: ");
					scanf("%d", &cuy);
					
					cux +=1;
					cuy +=1; 
					
					if( cux < 11 && cuy < 11 && cux > 0 && cuy > 0 ){
						

						if (matriz2[cux][cuy] == 11){
							
							printf("no seas pendejo ya lo pusiste.\n");
							i--;
							system ("pause");
						}
						
						matriz2[cux][cuy] =42 ;
						
					}else{
						
						printf("Uno de las coordenadas que haz ingresado no es valido.\n");
						i--;
						system ("pause");
					}

		}			

	
	   	do {  // Inicia el juego +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

		   	system("cls");
		   	       	
			   cxpc = 0;
               cypc = 0;

               if ( k > 0){  // Tablero pc ******************************************************* Ataque!!!
               	
	    				if ( matriz1[cux][cuy] == 177){
		    				
		    				printf("ponte vergas\n");
		    				matriz1[cux][cuy] = 120; 
		    				system("color 8");
		    				
		    			}else if(  matriz1[cux][cuy] == 11 ){
		    				
                        	printf("%c te cagaste. %c\n\n\a",219, 219);
		    				system("color 2");
		    				
		    				matriz1[cux][cuy] = 178; 		    				
		    				usuario++;
		    				n++;
		    				
		    			}
               	
               }	
			   for( i = 3; i < 14 ; i++ ){ // Tablero pc *******************************************************
			
		    		for( j = 35 ; j < 46 ; j++ ){
		    			
                        if ( matriz1[i-3][j-35] == 11 ){
                        	
                        	carac = 177;
                        	
                        }else{
                        	
                        	carac = matriz1[i-3][j-35];
                        	
                        }  	
						   matrizf[i][j]= carac;
                           cypc++;
                    }
                    cxpc++;
               }
               
	    
		    
				for ( i = 3; i < 14 ; i++ ){ // tablero usuario ****************************************
				
		    		for ( j = 6 ; j < 17 ; j++ ){
                        
						   matrizf[i][j] = matriz2[i-3][j-6];
                           cypc++;
                    }
                    cxpc++;
               }
               
               if( k > 0 ){
               	
               		tiropcx = rand() % 10 ;
               		tiropcx +=1;
					tiropcy = rand() % 10 ;
					tiropcy +=1;
					
				     if( matriz2[tiropcx][tiropcy] == 177){
                        	
                        	matriz2[tiropcx][tiropcy] = 128 ;
                        	printf("\t\t\t\t\t\tEl enemigo es bien pendejo no te dio.\n\n");
                        }else if( matriz2[tiropcx][tiropcy] == 11 ){
                        	
                        	matriz2[tiropcx][tiropcy] = 178 ;
                        	printf("\t\t\t\t\t\t%c%c Te han golpeado animal perro del mal %c%c\n\n\a", 219, 219, 219, 219);
                        	system("color 4");
                        	pc++;
                        	n++;
                        	
                        }
               	
               	
               }             
                
                cxpc = 0;
                cypc = 0;
			
				for( i= 0; i < 17 ; i++ ){
					
					for( j = 0; j < 52; j++){
						
						printf(" %c", matrizf[i][j]);
						
					}
					
					printf("\n");
					
				}
			
				do {
					ip= 0;
					printf("\n\t\tIngresa un valor en x: ");
					scanf("%d", &cux);
					printf("\t\tIngresa un valor en y: ");		
					scanf("%d", &cuy);
			
					cux +=1;
					cuy +=1;
					
					if(cux < 11 && cux > -1 && cuy < 11 && cuy > -1){
						ip = 5;
					}else{
						printf("\n\tLos valores no son correctos.\n");
					}
					
				}while(ip < 3);

		    	k++; 

			} while( n < 11);	// Bloque de juego
		
		if ( pc == 10){
			
			printf("\n\t\tTe han ganado.");
			
		}else if(usuario == 10){
			
			printf("\n\t\tTenemos la victoria.");
			
		}
		
		c++;
		return 0;
		
	}
	




