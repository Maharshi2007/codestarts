#include<stdio.h>
#include<math.h>

int main()  {
    int marks;
    printf("emter marks :");
    scanf("%d", &marks);

    if(marks >= 90) {
        printf("your grade is A1 \n");
    }
    else if(marks >= 80 && marks < 90) {
        printf("your grade is A2 \n");
    }
    else if(marks >= 70 && marks < 80) {
        printf("your grade is B1 \n");
    }
    else if(marks >= 60 && marks < 70) {
        printf("your grade is B2 \n");
    }
    else if(marks >= 50 && marks < 60) {
        printf("your grade is C1 \n");
    } 
    else if(marks >= 40 && marks < 50) {
        printf("your grade is C2 \n");
    }
    else if(marks >= 33 && marks < 40) {
        printf("your grade is D \n");
    }
    else {
        printf("you are fail \n");
    }
    printf("thank you \n");
    return 0; 
}

