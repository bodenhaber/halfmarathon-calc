#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* calculates weekly mileage */
int calculate_weekly(int weeks, int current){

    if((weeks <= 3) && (current <= 10)){
      printf("\n");
      printf("We suggest you train for a half-marathon with more time.");
      printf("\n");
      return 1;
    }

    if(current >= 30){
      printf("Keep doing what you are doing. You are ready for a half-marathon!\n");
    }

    
    printf("\n");
    printf("That seems like an acheivable goal! Heres your plan: \n");
    printf("\n");

    if ((current >= 10) && (current < 20)){
      int i = 1;
      int m = 0;
      int t = 3;
      int w = 4;
      int th = 3;
      int f = 0;
      int sa = 5;
      int sun = 2;

      int miles = 0;
      for(i = 1; i <= weeks; i+=1){
        printf("Monday: %d Tuesday: %d Wednesday: %d Thursday: %d Friday: %d Saturday: %d Sunday: %d\n", m, t, w, th, f, sa, sun);
        miles = (m + t + w + th + f + sa + sun);
        printf("Week %d Total Mileage: %d miles\n", i, miles);
        printf("\n");

        if(i == 9){
          sa = 13;
          sun = 0;
        }
        else if(i == 8){
          sa = 5;
        }else{
          sa+=1;
        }

        if((i > 2) && (i < 7)){
          sun = 3;
        }else if(i != 9){
          sun = 2;
        }

        if( (i%2 ==1) && (i != 1)){
          if(i < 6){
            t+=1;
            w+=1;
            th+=1;
          }else{
            t-=1;
            w-=1;
            th-=1;
          }
        }


      }
      printf("Good luck!\n");
      return 1;


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
