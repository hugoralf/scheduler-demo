#include <stdio.h>
/*Laboratorio Scheduler demo EA879
	Hugo Ralf Pereira RA:155742
 */

int main() {
  int a[5], n;
  short int flag = 0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */    
		for(int j = 0; j<5; j++){
			if(i % a[j] == 0){
				printf("%d", j);
				flag++;
			}			        
		}
		if(flag == 0)
			printf("-\n");
		else{		
			printf("\n");
			flag = 0;
		}	 
  }
  return 0;
}
