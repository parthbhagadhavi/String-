






#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter any string: ");
    gets(str);

    while (str[i]<=100) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
           
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Toggle case string: %s", str);

    return 0;
}




