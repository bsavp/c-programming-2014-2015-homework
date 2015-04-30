#include<stdio.h>

int main () {

 char simvol ;

 int  number;

 for(simvol = 97 ; simvol <= 122; simvol++) {

     number = simvol ;
      
     printf("%c - %d\n", simvol, number) ;

     if(simvol == 122) {
 
        simvol = 65 ;

     }else {

        if(simvol == 90) {  

           simvol = 48 ;

        }else{

           if(simvol == 57) {

              break;
           }
        }
     }
  }

return 0;

}
