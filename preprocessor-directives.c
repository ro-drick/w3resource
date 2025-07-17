#include <stdio.h>
#define NAME "rick" 

int main(){
    #if defined (NAME) && (NAME == "rick") 
        printf("Welcome, %s\n", name);    
    #endif /* if name == 'rick'
            printf("Welcome, %s\n", name);     */

    return 0;
}
