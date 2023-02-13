#ifndef mahesya_dev_H
#define mahesya_dev_H
#include<math.h>
#define PI 3.14159265358979323846	

double calculateRoot(double number, int root) {
   double low = 0, high = number, mid, prev;

   while (low <= high) {
      mid = (low + high) / 2;
      prev = mid;
      mid = pow(mid, root);

      if (fabs(mid - number) < 0.00001)
         return prev;
      else if (mid < number)
         low = prev;
      else
         high = prev;
   }
   return prev;
}

double calculateArscin(int angka){
	double radians = angka * (PI / 180);
    return atan2(sin(radians), sqrt(1 - sin(radians) * sin(radians)));
}




#endif
