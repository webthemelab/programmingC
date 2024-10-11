#include<stdio.h>
#include<math.h>
int main(){
   int n;
   scanf("%d", &n);
   int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount=0;
   for( int i = 0; i < n; i++)
   {
    int x;
    scanf("%d", &x);
    
    if( x%2 == 0){
        evenCount++;
    } 
    else{
      oddCount++;
    }
    if(x>0){
      positiveCount++;
    }
    else if(x<0){
      negativeCount++;
    }
   }
   printf("Even: %d\n", evenCount);
   printf("odd: %d\n", oddCount);
   printf("positive: %d\n", positiveCount);
   printf("negative: %d\n", negativeCount);

   return 0;

}
