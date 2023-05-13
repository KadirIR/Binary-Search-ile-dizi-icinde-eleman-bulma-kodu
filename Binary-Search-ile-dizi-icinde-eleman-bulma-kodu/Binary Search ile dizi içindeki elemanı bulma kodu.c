#include <stdio.h>

void BubbleSort(int dizi[], int DiziBuyuklugu) {
    int k, d;
    for (k = 0; k < DiziBuyuklugu-1; k++) {
        for (d = 0; d < DiziBuyuklugu-k-1; d++) {
            if (dizi[d] > dizi[d+1]) {
                int temp = dizi[d];
                dizi[d] = dizi[d+1];
                dizi[d+1] = temp;
            }
        }
    }
}

int BinarySearch(int dizi[], int DiziBuyuklugu, int AranacakEleman) {
    int sol = 0;
    int sag = DiziBuyuklugu - 1;
    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;
        if (dizi[orta] == AranacakEleman)
            return orta;
        if (dizi[orta] < AranacakEleman)
            sol = orta + 1;
        else
            sag = orta - 1;
    }
    return -1;
}

int main() {
    int dizi[] = {4,8,3,84,47,76,9,24,68};
    int DiziBuyuklugu = sizeof(dizi) / sizeof(dizi[0]);
    BubbleSort(dizi, DiziBuyuklugu);
    
    printf("Aramanin yapildigi dizi: {4, 8, 3, 84, 47, 76, 9, 24, 68}\n\n");
    printf("BubbleSort ile dizinin siralanmasi degistirilip duzene sokuldu.\n\n");
    printf("Dizinin BubbleSort ile siralandiktan sonraki hali: {3,4,8,9,24,47,68,76,84}\n\n265");
    
    
    int AranacakEleman;
    printf("Lutfen aramak istediginiz elemani giriniz:");
    scanf("%d",&AranacakEleman);
    int sonuc = BinarySearch(dizi, DiziBuyuklugu, AranacakEleman);
    if(sonuc == -1)
        printf("Aradiginiz %d elemani dizide bulunamamistir.\n", AranacakEleman);
    else
        printf("Aradiginiz %d elemani dizinin %d. sirasinda bulunmustur.\n", AranacakEleman, sonuc+1);
    return 0;
}

