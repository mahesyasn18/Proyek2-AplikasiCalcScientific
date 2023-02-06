#define Faisal_dev_h
#ifndef Faisal_dev_h
 
int pangkat(int x,int y)
{
    int a,total=1;
     for(a=1;a<=y;a++){
        total=total*x;
    }
    return total;
}
#endif
 


