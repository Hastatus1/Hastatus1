 #include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x,y,z=0;
    
    for (y=1;y<=5;y++){
        printf("informe um numero: \n");
        scanf("%d",&x);
        if (x%2==!0){z++;}
        }
        printf("numeros impares: %d \n",z);
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
 