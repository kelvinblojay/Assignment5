#include <stdio.h>
#include <time.h>
int main()
{
    clock_t s_time, e_time;
    double t_used; //cpu time used 
    
    s_time = clock(); //starts cpu clock 
    for(int i=0; i<20000; i++){
        func_subscript();   
    }
    // closing the cpu clock
    e_time = clock(); 
    // calculating time elapsed in secs
    t_used = ((double) (e_time - s_time)) / CLOCKS_PER_SEC;  
    printf("Time taken (subscript)::%f\n",t_used);  

    s_time = clock(); // starts cpu clock
    for(int i=0; i<20000; i++){
        func_pointers();
    }
  
    // closing the cpu clock
    e_time = clock();
  
    // calculating the time elapsed(pointers reference)
    t_used = ((double) (e_time - s_time)) / CLOCKS_PER_SEC;
  
    printf("Time taken(pointers)::%f\n",t_used);
  
    return 0;
}

//referencing 2D array through subscripts
void func_subscript()
{ 
    int arr[15][5] = {0}; //square matrice is not mandatory

    for(int j=0; j<5 ; j++){
        for(int i=0; i<15; i++){
            arr[i][j]; //no operation is done, only accessing the element
        }
    }
    return;
}

// function to reference the 2D array through pointers
void func_pointers()
{  
    int arr[15][5] = {0};  

    for(int j=0; j<5 ; j++){
        for(int i=0; i<15; i++){
            *(*(arr+i)+j); //accessing element
        }
    }
    return;
}