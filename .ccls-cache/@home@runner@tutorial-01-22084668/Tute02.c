/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float dis,tot,firstdis;
  printf("Enter the distance in kilometers:");
  scanf("%f",&dis);
  if(dis<0){
    printf("Distance Error");
    return -1;
    }
  else if (dis<=30)
    tot=dis*50;
  else if(dis>30){
    firstdis=dis-30;
    tot=firstdis*40+30*50;
  }

  printf("Rent for the vehicle is:%.2f",tot);
  return 0;
}
