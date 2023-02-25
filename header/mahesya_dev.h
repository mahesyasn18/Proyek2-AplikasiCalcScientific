#ifndef mahesya_dev_H
#define mahesya_dev_H
#include<math.h>
#define PI 3.14159265358979323846	
#define SUDUT 180.0

double operasiAkar(double angka1, double angka2) {
   double low = 0, high = angka1, mid, prev;

   while (low <= high) {
      mid = (low + high) / 2;
      prev = mid;
      mid = pow(mid, angka2);
      if (fabs(mid - angka1) < 0.00001)
         return prev;
      else if (mid < angka1)
         low = prev;
      else
         high = prev;
   }
   return prev;
}


double operasiAsin(double angka){
    if(angka>1 || angka<-1)
    {
        printf("Diluar Jangkauan\n");
    }
    else
    {
        return asin(angka)* SUDUT/ PI;
    }
}



double operasiAcos(double angka) {
	if(angka>1 || angka<-1)
    {
        printf("Diluar Jangkauan\n");
    }
    else
    {
        double acos_in_radians = acos(angka);
   		 return acos_in_radians * SUDUT/ PI;
    }
    
}

double operasiAtan(double x) {
    double atan_in_radians = atan(x);
    return atan_in_radians * SUDUT/ PI;
}








#endif
