#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 3, 4, 6, 2, 2};
    int maxCount = 0;
    int maxItem = 0;
    int lengthArr = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < lengthArr; i++) {
        int count = 0;
        for (int j = 0; j < lengthArr; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxItem = numbers[i];
        }
    }
    printf("Phan tu co gia tri la: %d xuat hien nhieu nhat voi %d lan.\n", maxItem, maxCount);
    return 0;
}
