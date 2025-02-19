/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 04-10-2024
* Program: Calculate simple interest and print the total amount the user will get after the tenure(priciple+interest).
* Sample Input :10000 12 7.5
* Sample output :Enter principle amount,no of months and rate of interest:
* 				10000
* 				12
* 				7.5
* 				Simle interest is 10750
*
*/


#include<stdio.h>


/*****************simple interest()**********************/


/*
 *  @brief  : This function is used to find the simple interest.
 *  @note   : Simple interest is calculated by using formula p*n*r/100.
 *  @Param1 : int
 *	@Param2 : int
 *	@Param3 : flaot
 *	@retval : float - simple interest.
 */



float simp(int p,int n,float r)    //Function header
{
	float y,si;                      //decalring inputs
	y=n/12.0;                       //conversion of months to year
	si=(p*r*y)/100;                 //simple interest calculation
	return si;                     //returning si value
}


  
int main()
{
	int p,n,ret;                                                       //declaring inputs
	float r,si;                                                        //declaring inputs
	printf("Enter principle amount, no of months and rate of interest\n");
	
	ret=scanf("%d%d%f",&p,&n,&r);
//	printf("%d\n",ret);
	while(ret!=3)                                                      //error handling
	{
		printf("Enter values correctly\n");
		getchar();
		scanf("%d%d%f",&p,&n,&r);
	}
	si=simp(p,n,r);                                                     //Function call
	printf("simple interest is %0.3f\n",si+p);               //printing total amount the user will get after the tenure
	return 0;
}

