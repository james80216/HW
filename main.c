#include <stdio.h>
#include <stdlib.h>
int AdultVedio,HomeWork;/*�ܼƫŧi*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int save();/*�Ƶ{��*/ 
int main(int argc, char *argv[]) {
	save();/*�s�X�Ƶ{��*/ 
	printf("%d",HomeWork);/*�L�X��*/ 
	return 0;
	
}
int save()/*�ŧi�Ƶ{��*/ 
{
	for(AdultVedio=0;AdultVedio<10;AdultVedio++)/*�j��*/
	{
	
	HomeWork=HomeWork+AdultVedio;/*�p��*/	
}
}
