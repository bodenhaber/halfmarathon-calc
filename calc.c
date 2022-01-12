#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* calculates weekly mileage */
int calculate_weekly(int weeks, int current){

    if((weeks <= 3) && (current <= 10){
      printf("\n");
      printf("We suggest you train for a half-marathon with more time.");
      printf("\n");
      return 1;
    }
    printf("\n");
    printf("That seems like an acheivable goal!");
    printf("\n");

    if (current <= 10){
      int i = 1;
      int miles = 15;
      for(i = 1; i <= weeks; i+=1){
        printf("Week %d: %d miles\n", i, miles);
        miles += 1;
        return 1;
      }


    }

    }




}




/* runs the prompt */
void main() {
  int weeks;
  int current_mileage;
  int weekly_mileage;
  printf("Please enter how many weeks you have til your half-marathon: ");
  scanf("%d", &weeks);
  printf("Please enter how many miles you currently run per week: ");
  scanf("%d", &current_mileage);

  weekly_mileage = calculate_weekly(weeks, current_mileage);

}
