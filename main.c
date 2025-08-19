#include <stdio.h>

  int  major(int vec[]) {
      if (vec[0] > vec[1] ) {
          printf(" maior %d",  vec[0]);
      }else if (vec[1] > vec[2] ) {
          printf(" maior %d",  vec[1]);
      } else if (vec[2] > vec[3] ) {
          printf(" maior %d",  vec[2]);
      } else {
          printf(" maior %d",  vec[3]);
      }
    }
int lower(int vec[]) {
      if (vec[0] < vec[1] ) {
          printf(" menor %d",  vec[0]);
      }else if (vec[1] < vec[2] ) {
          printf(" menor %d",  vec[1]);
      } else if (vec[2] < vec[3] ) {
          printf(" menor %d",  vec[2]);
      } else {
          printf(" menor %d",  vec[3]);
      }
  }





int main(void) {

    int vec[4];

      for (int i = 0; i < 4; i++) {
        scanf("%d", & vec[i]);
    }
int call = major(vec);
      int call2 = lower(vec);


}