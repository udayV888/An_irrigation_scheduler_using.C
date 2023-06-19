#include <stdio.h>

float calculateCropwaterRequriment(float cropCoefficent,float evapotranspiration){
  return cropCoefficent * evapotranspiration;
}
int main (){

  float cropCoefficent;
  float evapotranspiration;
  float soilMoisture;

  printf("Enter the crop coefficent: ");
  scanf("%f",&cropCoefficent);

  printf("Enter the evapotranspiration value:  ");
  scanf("%f",&evapotranspiration);

  printf("Enter the current soil moisture level: ");
  scanf("%f",&soilMoisture);

  float cropWaterRequirement = calculateCropwaterRequriment(cropCoefficent,evapotranspiration);

  printf("Crop water requriement: %.2funits\n",cropWaterRequirement)
 ;
  //Determine based on crop water requrement and soil moisture

  if(soilMoisture <0.4){
    printf("Irrigarion is needed.\n");
  }
  else{
    printf("No irrigation is needed.\n");
  }
  return 0;
}