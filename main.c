#include <stdio.h>
#include <stdlib.h>
int i,j;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int save();
int main(int argc, char *argv[]) {
	save();
	printf("%d",j);
	return 0;
	
}
int save()
{
	for(i=0;i<10;i++){
	
	j=j+i;	
}
}
