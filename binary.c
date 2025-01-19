#include<stdio.h>
int num, i = 1, j = 64, l=0, m = 0;

void binary(int num)
{
    while(i < 65)
    {//printf("%d",i);
        while(j != 0)
        {
        while(m < 65)
        {//printf("1");
            //if (i != j || i != m || j != m)
            //{//printf("1");
                if(i+j+m == num && l !=1)
                {
            
                    printf(" 1 ");
                    //printf(" 1 ");
                    ans(j);
                    l=1;
                }
            if(m==0)
            {
            m = 1;
            //m = m*2;
            }
            else
            m=m*2;
              //  else
              //  {
              //      printf(" 0 ");
              //      break;
              //  }
            //}
            
        }
        m = 0;
            //m = 64;
            j = j/2;
        }
        j = 64;
        i = i*2;
    }
}

int ans(int j)
{
  //  if(j == 1)
  //  printf(" 1 ");
  //m = m/2;
  j = j/2;
  while(j != 0)
  {
      if(j == i || j == m){
      printf(" 1 ");
      }
      
      else{
      printf(" 0 ");
      }
     // l = l/2;
     //m = m/2;
     j = j/2;
  }
  return 0;
}

int main()
{
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num == 0)
    printf(" 0 \n");
    
    else if(num == 1)
    printf(" 1 \n");
    
    else if(num == 2)
    printf(" 1 0 \n");
    
    else if(num == 4)
    printf(" 1 0 0 \n");
    
    else if(num == 8)
    printf(" 1 0 0 0 \n");
    
    else if(num == 16)
    printf(" 1 0 0 0 0 \n");
    
    else if(num == 32)
    printf(" 1 0 0 0 0 0 \n");
    
    else if(num == 64)
    printf(" 1 0 0 0 0 0 0 \n");
    
    else{
    binary(num);  
   // printf("1");
    }
    return 0;
}
// 1 2 4 8 16 32 64