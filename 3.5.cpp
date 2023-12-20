#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student( *GetStudent ( int *room ))[ 10 ] ;

int main() {
    struct student( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}

struct student( *GetStudent ( int *room ))[ 10 ] {
    printf( "Enter the number of ClassRooms: " ) ;
    scanf( "%d", room ) ;

    struct student( *children )[ 10 ] = new struct student[ *room ][ 10 ] ;

    for ( int i = 0 ; i < *room ; i++ ) {
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Enter data for Group %d, Student %d:\n", i + 1, j + 1 ) ;
            printf( "Name: " ) ;
            scanf( "%s", children[ i ][ j ].name ) ;
            printf( "Age: " ) ;
            scanf( "%d", &children[ i ][ j ].age ) ;
            printf( "Sex: " ) ;
            scanf(" %c", &children[ i ][ j ].sex ) ;
            printf( "GPA: " ) ;
            scanf( "%f", &children[ i ][ j ].gpa ) ;
            printf("-------------------------------------\n") ;
        }
    }
    return children ;
}

