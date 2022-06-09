//
//  main.c
//  atv2
//
//  Created by Angela Alves on 11/05/22.
//

#include <stdio.h>

//int main() {
//
//    for (int i=1000; i< 1500; i++) {
//        if (i % 2 != 0) {
//            printf("Número ímpar: %d\n",i);
//        }
//    }
//}

int main() {
    int i = 1000;
    while (i < 1500) {
        if (i % 2 != 0) {
            printf("Número ímpar: %d\n", i);
        }
        i++;
    }
}
