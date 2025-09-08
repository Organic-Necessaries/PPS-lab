#include<stdio.h>
int main()
{
   int a , b , c , d , e , f ;
   printf("==========Quizzes==========");
   printf("\nEnter the score of the first quiz: ");
   scanf("%d" , &a);
   printf("Enter the score of the scond quiz: ");
   scanf("%d" , &b);
   printf("Enter the score of the third quiz: ");
   scanf("%d" , &c);
   printf("\n==========Mid-term==========");
   printf("\nEnter the score of the mid-term: ");
   scanf("%d" , &d);
   printf("\n==========Final==========");
   printf("\nEnter the score of the final: ");
   scanf("%d" , &e);
   f = a + b + c ;
   printf("\nQuiz total: %d" , f);
   printf("\nMid-term: %d" , d);
   printf("\nFinal: %d" , e);   
   
   scanf("%d" , &e);
   return 0;
}
