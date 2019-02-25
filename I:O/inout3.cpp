#include <stdio.h>
#include <iostream>
int main () {


   FILE *fp;
   int c;
   int pic[375000];



   fp = fopen("abc.raw","r");
   FILE *pf;

   pf = fopen( "pic3.raw" , "w" );
   int i= 0;

   while(1) {

      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }

      pic[i] = c+20;
      fwrite(pic ,sizeof(unsigned char), sizeof(pic[i]), pf );

        //std::cout<<i<<std::endl;


   }

}
