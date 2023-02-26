#ifndef mahesya_dev_H
#define mahesya_dev_H
#include<math.h>
#define PI 3.14159265358979323846	
#define SUDUT 180.0

double operasiAkar(double bilangansatu, double bilangandua) {
   double rendah = 0, tinggi = bilangansatu, tengah, hasil;

   while (rendah <= tinggi) {
      tengah = (rendah + tinggi) / 2;
      hasil = tengah;
      tengah = pow(tengah, bilangandua);
      if (fabs(tengah - bilangansatu) < 0.00001)
         return hasil;
      else if (tengah < bilangansatu)
         rendah = hasil;
      else
         tinggi = hasil;
   }
   return hasil;
}


double operasiAsin(double bilangan){
    if(bilangan>1 || bilangan<-1)
    {
        printf("Diluar Jangkauan\n");
    }
    else
    {
        return asin(bilangan)* SUDUT/ PI;
    }
}



double operasiAcos(double bilangan) {
	if(bilangan>1 || bilangan<-1)
    {
        printf("Diluar Jangkauan\n");
    }
    else
    {
   		return acos(bilangan) * SUDUT/ PI;
    }
    
}

double operasiAtan(double bilangan) {
    return atan(bilangan) * SUDUT/ PI;
}








#endif
