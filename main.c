#include <stdio.h>
#include <stdlib.h>
int AdultVedio,HomeWork;/*變數宣告*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int save();/*副程式*/ 
int main(int argc, char *argv[]) {
	save();/*叫出副程式*/ 
	printf("%d",HomeWork);/*印出值*/ 
	return 0;
	
}
int save()/*宣告副程式*/ 
{
	for(AdultVedio=0;AdultVedio<10;AdultVedio++)/*迴圈*/
	{
	
	HomeWork=HomeWork+AdultVedio;/*計算*/	
}
}
