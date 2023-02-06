#ifndef AhmadFauzy_dev_H
#define AhmadFauzy_dev_H

 
// function pwmbagian
void inputPembagian(int *a, int *b){
	scanf("%d", &(*a));
	scanf("%d", &(*b));
}

float prosesPembagian(int x, int y){
	return (double)x / (double)y;
}

void outputPembagian(int h, int i, float j){
	printf(" hasil %d / %d = %f", h,i,j);
}


#endif
