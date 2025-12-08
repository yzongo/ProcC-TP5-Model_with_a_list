#ifndef MULTIMEDIAOBJECTS_H
#define MULTIMEDIAOBJECTS_H


#define MY_NAME_MAX 512
#define MY_PATH_MAX 512

typedef struct {
    int day;
    int month;
    int year;
}Date;

typedef enum{PHOTO, VIDEO, UNDEFINED}TypeMultimediaObject;

typedef struct {
    char name[MY_NAME_MAX];
    char path[MY_PATH_MAX];
    Date date;
    TypeMultimediaObject type;
}MultimediaObject;

void fillMO (MultimediaObject * o, char * name, char * path, int day, int month, int year, TypeMultimediaObject type);

void changeNameMO(MultimediaObject * o, char * newName);
void test_MO();
void displayConsoleOM(MultimediaObject * o);

#endif /* MULTIMEDIAOBJECTS_H*/
