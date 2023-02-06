#ifndef Faisal_dev_H
#define Faisal_dev_H


void inputPangkat (int *a, int *b){
	printf("Isi Angka yang Akan Dipangkatkan : ");
    scanf("%d", &(*a));
    printf("Masukkan pangkatnya : ");
	scanf("%d", &(*b));
}
	
int calculatepangkat(int x,int y,int hasil){
    int a,total=1;
     for(a=1;a<=y;a++){
        total=total*x;
    }
    return total;
}
void outputpangkat(int a,int b,int h){
	printf("hasil dari %d dipangkatkan %d adalah : %d ",a,b,h);
}
#endif
 


