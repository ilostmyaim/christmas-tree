#include <stdio.h>
#include <assert.h>

int main()
{
  int i, j, N;

  // Read in the value of N
  printf("Enter a positive integer N: ");
  scanf("%d", &N);

  assert(N>0);
  assert(N%2>0);

  printf("Second tree\n\n");

  for(i = 1; i<= N/2; i++)
  {
  //print the top of the tree
    if(i == 1)
    {
      for(j = 1; j <= (N/2)+1; j++)
        if(j<(N/2)+1)
          printf(" ");
        else
          printf("*");

      for(j=(N/2)+2; j<=N; j++)
        printf(" ");
    
      printf("\n");
      continue;
    }


    //print left side of the tree
    for(j=1; j<= (N/2) - i; j++)
      printf(" ");

    for(j=1; j<=i+1; j++)
      if(j<i+1)
        printf("/");
      else
        printf("|");

    //print right side of the tree
    for(j=1; j<=i; j++)
      printf("\\");

    for(j=1; j<= N/2-i; j++)
      printf(" ");

    //print new line to increse depth by one
    printf("\n");

  }
  return 0;
}
