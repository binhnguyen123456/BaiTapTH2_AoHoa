#include <stdio.h>

// Hàm kiểm tra số có phải là bội của 7 không
int boi(int num) {
    return (num % 7 == 0);
}

int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
    
    // Duyệt qua các số nguyên có 2 chữ số và kiểm tra nếu là bội của 7
    for (int i = 10; i < 100; i++) {
        if (boi(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
