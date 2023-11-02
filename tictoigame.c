// tic toe game 
#include<stdio.h>
#define n 3
static char mat[n][n];
void userinput(void);
void ini(void);
void des(void);
int check(int a,int b);
int win(char  );
void computer(void);
int main()
{
ini();
s:
 des();

do{
    
    userinput();
     
      
      des();
   if(win('X')==1){
    printf("\nYou win : \n");
    break;
    }
    printf("\n\n 2 Computer chance : \n\n");
    computer();
    des();
    printf("\n");
    if(win('#')==1){
    printf("\ncomputer win : \n");
    break;}
      
          
       
        
}while(1);
 short unsigned int a;
printf("Enter  1 for play again \n enter 0 for exit ");
scanf("%u",&a);
if(a==1)
goto s;
else return 0;
printf("Thanyou : ");
}
//---------------------------
// initlise matrix with zero;
void ini(void)
{
    register int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           
            mat[i][j]='0';
        
    }
    
}//-------------------------------------------------
void des(void)
{
    register int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%c\t",mat[i][j]);
            printf("\n");
        
    }
    
}
//--------------------------------------------------
void userinput(void)
{
    
    int a,b;
    r:
    printf("Entet coadinate : ");
    scanf("%d%d",&a,&b);
    
    if(!check(a,b)){
        printf("invlaid move : ");
        goto r;
    }
        mat[a][b]='X';
}
//--------------------------------------------
int check(int a,int b)
{
    if(mat[a][b]=='0')
    return 1;
    
    else 
    return 0;
}
//--------------------------------------------
//int win(void );
//-------------------------------------------
void computer(void)
{
    register int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {

               if(mat[i][j]=='0'){
       //         printf(" %d %d\n ",i,j,);
                    mat[i][j]='#';
                   return ;
               }
                
               
           }
        
    }
}
//-------------------------------------------
int win(char a)
{
    register int i,j,k=0;
    // for row
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
        if(mat[i][j]==a)
        k++;
        }
        if(k==3)
    return 1;
    }
    // for coloum : 
        for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
        if(mat[j][i]==a)
        k++;
        }
        if(k==3)
    return 1;
    }

   
        k=0;
        for(j=0;j<n;j++)
        {
        if(mat[j][j]==a)
        k++;
        }
        if(k==3)
    return 1;

     if(mat[0][2]==a&&mat[1][1]==a&&mat[2][0]==a)
     return 1;
    
    
    
    return 0;
    
    
}

