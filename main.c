#include <stdio.h>

int main() {
  float dtb,drl;
  int hocluc=0,renluyen=0;
  //dtb
  if(dtb>=9.0)
    hocluc=1;//xs
  else if(dtb>=8.0)
    hocluc=2;//g
  else if(dtb >=7.0)
    hocluc=3;//k
  else 
    hocluc=0;
  //drl
  if(drl>=90)
    renluyen=1;//xs
  else if(drl>=80)
    renluyen=2;//t
  else if(drl>=70)
    renluyen=3;//k
  else
    renluyen=0;
  //hocbong
  if(hocluc==1 && renluyen==1)
    printf("HOC_BONG_XUAT_SAC");
  else if((hocluc==2 &&(renluyen==2 ||renluyen==1))||(hocluc==1 && renluyen==2))
    printf("HOC_BONG_GIOI");
  else if(hocluc==3 && (renluyen==1 || renluyen==2 || renluyen==3))
    printf("HOC_BONG_KHA");
  else if((hocluc==1 || hocluc==2) && renluyen==3)
    printf("HOC_BONG_KHA");
  else
    printf("KHONG_DAT");
  return 0;
}