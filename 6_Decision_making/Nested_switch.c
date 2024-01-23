#include <stdio.h>

int main() {
    int category = 67;
    int subCategory = 2;

    switch (category) {
        case 1:
            printf("Category 1\n");
            switch (subCategory) {
                case 1:
                    printf("Subcategory 1-1\n");
                    break;
                case 2:
                    printf("Subcategory 1-2\n");
                    break;
                default:
                    printf("Unknown Subcategory\n");
            }
            break;

        case 2:
            printf("Category 2\n");
            switch (subCategory) {
                case 1:
                    printf("Subcategory 2-1\n");
                    break;
                case 2:
                    printf("Subcategory 2-2\n");
                    break;
                default:
                    printf("Unknown Subcategory\n");
            }
            break;

        default:
            printf("Unknown Category\n");
    }

    return 0;
}
