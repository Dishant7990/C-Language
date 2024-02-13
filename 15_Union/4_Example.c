// By Using Union we can save the Memory

#include<stdio.h>

typedef struct Store{
    int prize;

    union {
        
        struct 
        {
            char *title;
            char *author;
            int num_pages;
        }book;
        
        struct {
            int color;
            int size;
            char *design;
        }shirt;
    
    }  item;

}s_t;


int main(void){

    s_t s;

    s.item.book.title = "The Alchemist";
    s.item.book.author = "Paulo";
    s.item.book.num_pages = 200;
    
    printf("Book Title is '%s'\n", s.item.book.title);
    printf("Size of Structure S is '%d' Bytes\n", sizeof(s_t));

    return 0;
}