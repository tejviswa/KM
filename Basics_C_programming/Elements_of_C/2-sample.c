                                                 //Keywords         Identifiers          constants 


  int Change_Value = 0;                         //int             Change_Value              0
  int Sum_it (int, int);                        //int               Sum_it 
  void error_with_code (void);                  //void            error_with_code
 int main (void)                               // int,void           main
 {  
    int Arg_1 = 20, Arg_2 = 40;                //int               Arg_1,Arg_2             20,40
    int i;                                     //in                   i
     for (i = 0; i < 10;i++)                  //for                    i                    0,10
     {
        if (Arg_1 > Arg_2)                     //if                 Arg_1,Arg_2
             Arg_2 = Sum_it (Arg_1, Arg_2);     //                Arg_1,Arg_2,Sum_it
        else                                    //else             
            Arg_1 = Sum_it (Arg_1, Arg_2);      //                Arg_1,Arg_2,Sum_it
     }
     error_with_code ();                        //                error_with_code
 }   /* End of main() */

 int Sum_it (int a, int b)                     //int                 a,b,Sum_it
 {
     return a+b;                               //return                 a,b
 } /* End of Sum_it */

 void error_with_code(void)                   //void                 error_with_code
 {
    int divide_value;                          //int                 divide_value
    int result;                                //int                  result
    divide_value = Change_Value;               //               divide_value,Change_Value
    result = 10 / divide_value;               //                     result,divide_value      10
    return ;                                   //return             

 } /* End of error_with_code() */
