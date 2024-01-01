#include <stdio.h>

void razvrstaj_parne(int niz[], int broj) {
    int i = 0;
    int j = broj - 1;

    while(i < j){
        while(niz[i] % 2 == 0 && i < j){
            i++;
        }

        while(niz[j] % 2 != 0 && i < j){
            j--;
        }
        //ovo je moj novi komentar

        //niz= {1,2,3,4,5,6,7,8,9,10}
        if(i < j){
            int temp = niz[i];
            niz[i] = niz[j];
            niz[j] = temp;
        }
    }
}

    void ucitaj_niz(int niz[], int n){
        for(int i = 0; i < n; i++){
            printf("niz[%d] = ", i);
            scanf("%d", &niz[i]);
        }
    }

int main() {
    int niz[50];
    int broj;

    printf("unesite broj");
    scanf("%d", &broj);
    ucitaj_niz(niz, broj);


    razvrstaj_parne(niz, broj);

    printf("Niz sa parnim brojevima na pocetku: \n ");
    for (int i = 0; i < broj; i++) {
        printf("%d \n", niz[i]);
    }

    return 0;
}
