#ifndef adinda_dev_h
#define adinda_dev_h

void inputbilangan(int *bilangansatu, int *bilangandua){
	printf("Masukkan bilangan 1: ");
	scanf("%d", &*bilangansatu);
	printf("Masukkan bilangan dua: ");
	scanf("%d", &*bilangandua);
}

int perkalian(int bilangansatu, int bilangandua){
	return bilangansatu * bilangandua;
}

void outputbilangan(int hasil){
	printf("Hasil: %d", hasil);
}

#endif
