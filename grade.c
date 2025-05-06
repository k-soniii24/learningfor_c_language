#include <stdio.h>

int main() {
    int marks;
     scanf("%d", &marks);
  
    // Assign grade based on marks
  if (marks >= 85 && marks <= 100 ){
    printf("grade S");
  
  }else if ( marks >=75 && marks <=84 ){
    printf("grade A ");
  }else if ( marks >=65 &&  marks <=74 ){
    printf("grade B ");
  }else if ( marks >=55 && marks <=64 ){
    printf("grade C ");
  }else if ( marks >=50 &&  marks <=54 ){
    printf("grade D ");
  }else if ( marks >=0 && marks <=49 ){
    printf("grade F ");
  }else{
    printf("Enter right");
  }
      return 0;
}
