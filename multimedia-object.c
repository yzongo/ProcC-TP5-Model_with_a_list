#include "multimedia-object.h"
#include <string.h>
#include <stdio.h>

static Date createDate(int j, int m, int a)
{
    Date d;
    d.year = a;
    d.day = j;
    d. month = m;
    return d;
}

void fillMO (MultimediaObject * o, char * name, char * path, int day, int month, int year, TypeMultimediaObject type)
{
   strncpy(o->name, name, MY_NAME_MAX); // copie de name vers o.name
   strncpy(o->path, path, MY_PATH_MAX);
   o->date = createDate(day, month, year); //creer la date avec la fn du dessus
   o->type=type; //met le type
}

void changeNameMO(MultimediaObject * o, char * newName){
    strncpy(o->name, newName, MY_NAME_MAX);// copie de newname vers o.name
}

void displayConsoleOM(MultimediaObject * o)
{
    printf("name: %s \n", o->name);
    printf("path: %s \n", o->path);
    printf("date: %d / %d / %d \n", o->date.day, o->date.month,o->date.year);
    switch (o->type) {
        case PHOTO:
            printf("Type: photo");
            break;
        case VIDEO:
            printf("Type: vidéo");
            break;
        case UNDEFINED:
            printf("Type: undefined");
            break;
        default:
            printf("Type: undefined");
            break;
    }
}

#include "test.h"
/*!
* \brief  Unit testing of the functions provided in the multimedia-object.c file
*/
void test_MO()
{
	printf("Tests unitaires du module multimedia-object :\n");
	/* To be completed*/
    	printf(" TO BE DONE :-) \n");
}

