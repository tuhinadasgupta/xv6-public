#include "types.h"
#include "user.h"


int main(){
    char minus = '-'; 
    char plus = '+'; 
    int p =fork(); 
    for(int i=0; i<50; i++){
        if(p!=0){
            //parent 
            printf(1,"%c\n",minus);
            yield(); 
        }
        else{
            //child
            printf(1,"%c\n",plus); 
            yield();
        }
    }
    wait(); 
    exit(); 
    return 0; 
}