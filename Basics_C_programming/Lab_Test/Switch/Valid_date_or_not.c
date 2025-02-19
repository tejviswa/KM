/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-09-2024
* Program: 
* Sample Input :
* Sample output :
*
*/


#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter date in format(dd-mm-yyyy)\n");
	scanf("%d-%d-%d",&d,&m,&y);
	switch(y>=1900&&y<=2200)
	{
		default:switch(m==2)
				{
					case 1:switch(d>0&&d<=28)
						   {
							   case 1:printf("valid date\n");break;
							   case 0:printf("Invalid date\n");break;
						   }
						   break;
				}
				break;

		case 0:printf("Invalid date\n");break;
		case 1:switch(y%100==0&&y%400==0||y%4==0)
			   {

				   case 1:switch(m==2)
						  { 
							  case 1:switch(d>0&&d<=29)
									 {
										 case 1:printf("valid date\n");break;
										 case 0:printf("Invalid date\n");break;
									 }

									 break;
						  }
						  break;

				   case 0:switch(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
						  {
							  case 1:switch(d>0&&d<=31)
									 {
										 case 1:printf("Valid date\n");break;
										 case 0:printf("Invalid date\n");break;
									 }
									 break;
						  }
						  break;

				   default:if(m>12)
							   printf("Invalid date\n");
						   else

							   switch(m==4||m==6||m==9||m==11)
							   {
								   case 1:switch(d>0&&d<=31)
										  { 
											  case 1:printf("Valid date\n");break;
											  case 0:printf("Invalid date\n");break;
										  }
										  break;
								   case 0:printf("Invalid date\n");break;


							   }

						   break;



			   }

	}


			   
	

	return 0;
}

