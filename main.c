/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int pid[15];
    int bt[15];
    int n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
 
    printf("Enter process id of all the processes: ");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&pid[i]);
    }
 
    printf("Enter burst time of all the processes: ");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&bt[i]);
    }
 
    int i, wt[n];
    wt[0]=0;
 
    //for calculating waiting time of each process
    for(i=1; i<=n; i++)
    {
        wt[i]= bt[i-1]+ wt[i-1];
    }
 
   
    float twt=0.0;
    float tat= 0.0;
    for(i=1; i<=n; i++)
 {
        printf("Process:%d\n", pid[i]);
        
        printf("burst time:%d\n", bt[i]);
        printf("waiting time:%d\n", wt[i]);
 
        //calculating and printing turnaround time of each process
        printf("turnaround time:%d\n", bt[i]+wt[i]);
        printf("\n");
 
        //for calculating total waiting time
        twt += wt[i];
 
        //for calculating total turnaround time
        tat += (wt[i]+bt[i]);
    }
    float att,awt;
 
    //for calculating average waiting time
    awt = twt/n;
 
 //for calculating average turnaround time
    att = tat/n;
    printf("Avg. waiting time= %f\n",awt);
    printf("Avg. turnaround time= %f",att);
}
