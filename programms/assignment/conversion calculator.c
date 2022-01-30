#include<stdio.h>

main()

{
  float a,b,c,d;
  
  printf("please enter time in hours          : ");
  scanf("%f",&a);
  printf("please enter distance in kilometres : ");
  scanf("%f",&b);
  printf("please enter the area in metres     : ");
  scanf("%f",&c);
  printf("please enter the volume in metres   : ");
  scanf("%f",&d);	
  
  printf("\n%f hours      = %fminutes",a,(a*60));
  printf("\n%f hours      = %fseconds",a,(a*60*60));
  printf("\n%f kilometres = %fmetres",b,(b*1000));
  printf("\n%f kilometres = %fcentimetres",b,(b*1000*100));
  printf("\n%f m^2        = %fcm^2",c,(c*100*100));
  printf("\n%f m^2        = %fmm^2",c,(c*100*100*10*10));
  printf("\n%f m^3        = %fcm^3",d,(d*100*100*100));
  printf("\n%f m^3        = %fmm^3",d,(d*100*100*100*10*10*10));
}
