#ifndef mahesya_dev_H
#define mahesya_dev_H
#include<math.h>
#define PI 3.14159265358979323846
#include "header\mahesya_dev.h"
#include "header\AryaKusumah_dev.h"
#include "header\adinda_dev.h"
#include "header\Faisal_dev.h"
#include "header\AhmadFauzy_dev.h"
#include "header\syira_dev.h"	

double calculateRoot(double angka1, int angka2) {
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

double modolus(int angka1, int angka2){
	return angka1%angka2;
}

double calculateArscin(int angka){
    if(angka>1 || angka<-1)
    {
        printf("Diluar Jangkauan");
    }
    else
    {
        return asin(angka)*180/PI;
    }
}

double acos(double x) {
    return atan2(sqrt(1 - x * x), x);
}

double acos_in_degrees(double x) {
    double acos_in_radians = acos(x);
    return acos_in_radians * 180.0 / PI;
}


double prosesPerhitungan(double angka1, double angka2, char operator) {
    switch (operator) {
        case '^':
            return pow(angka1, angka2);
        case 'v':
            return calculateRoot(angka2, angka1);
        case '*':
            return perkalian(angka1, angka2);
        case '/':
            return prosesPembagian(angka1, angka2);
        case '+':
            return prosesPenambahan(angka1, angka2);
        case '-':
            return pengurangan(angka1, angka2);
        default:
            printf("Operator Tidak Diketahui: %c", operator);
            exit(1);
    }
}

int mencariPrioritas(char operator) {
    switch (operator) {
        case '^':
        case 'v':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            printf("Operator Tidak Diketahui: %c", operator);
            exit(1);
    }
}





#endif
