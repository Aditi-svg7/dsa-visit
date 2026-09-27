// Main purpose of learning this is to understand how arrays work in memory and how to access them using loops.
// This is a simple program that initializes an array of integers and prints each element using a for loop.
#include <stdio.h>

int main(){
    int arr[10], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d intergers:\n", n);
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are :\n");
    for(i=0;i<n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
    printf("Enter the operation you want to perform on the array: \n");
    printf("1. Display Array\n");
    printf("2. Find the sum of all elements in the array\n");
    printf("3. Find the maximum element in the array\n");
    printf("4. Find the minimum element in the array\n");
    printf("5. Insert an element in the array\n");
    printf("6. Delete an element from the array\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:{
            printf("The elements in the array are :\n");
            for(i=0;i<n;i++){
                printf(" %d ", arr[i]);
            }
            printf("\n");
        break;}
        case 2:{
            int sum = 0;
            for(i=0;i<n;i++){
                sum += arr[i];
            }
            printf("The sum of all elements in the array is: %d\n", sum);
        break;}
        case 3:{
            int max = arr[0];
            for(i=1;i<n;i++){
                if(arr[i] > max){
                    max = arr[i];
                }
            }
            printf("The maximum element in the array is: %d\n", max);
        break;}
        case 4:{
            int min = arr[0];
            for(i=1;i<n;i++){
                if(arr[i] < min){
                    min = arr[i];
                }
            }
            printf("The minimum element in the array is: %d\n", min);
        break;}
        case 5:{
            int pos, val;
            printf("Enter the position where you want to insert the element: ");
            scanf("%d", &pos);
            printf("Enter the value you want to insert: ");
            scanf("%d", &val);
            for(i=n;i>=pos;i--){
                arr[i] = arr[i-1];
            }
            arr[pos-1] = val;
            n++;
            printf("The elements in the array after insertion are :\n");
            for(i=0;i<n;i++){
                printf(" %d ", arr[i]);
            }
            printf("\n");
        break;}
        case 6:{
            int del_pos;
            printf("Enter the position of the element you want to delete: ");
            scanf("%d", &del_pos);
            for(i=del_pos-1;i<n-1;i++){
                arr[i] = arr[i+1];
            }
            n--;
            printf("The elements in the array after deletion are :\n");
            for(i=0;i<n;i++){
                printf(" %d ", arr[i]);
            }
            printf("\n");
        break;}
        case 7:{
            printf("Exiting the program.\n");
        break;}
    }
    return 0;
}
