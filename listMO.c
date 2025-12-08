
/*!
* \file list.c
* \brief File with the functions required to manage the list as studied in labs 6 and 7
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "listMO.h"
#include "multimedia-object.h"



//fonction static pour qu'on puisse l'utiliser que dans ce fichier là et avoir d'autres fonctions avec le même nom ailleurs.
/*!
* \brief Allocate memory for the data element and initialize the structure members
* \param[in] name the name of the multimedia object
* \param[in] path the path of the multimedia object
* \param[in] day the day of creation of the multimedia object
* \param[in] month the  month of creation  of the multimedia object
* \param[in] year the  year of creation  of the multimedia object
* \param[in] type the type of the multimedia object
* \param[in] n the address of the setOnNext data element
* \return NodeList* the address of the new data element
*/
static NodeList *newNodeList(char * name, char * path, int day, int month, int year, TypeMultimediaObject type, NodeList * n)
{
    NodeList *newNL = (NodeList *) malloc(sizeof(NodeList));
    if(newNL != NULL)
    {
        fillMO(&(newNL->value),name,path,day,month,year,type);
        newNL->next = n;
    }
    else
        fprintf(stderr,"Erreur d'allocation memoire dans newNodeList()\n");
    return newNL;
}


/*!
* \brief Desallocate memory associated to a node
* \param[in] n the address of the  data element to be freed
*/
static void freeNodeList(NodeList *n)
{
    free((void *)n);
}

void initList(List * l){
    l->current=NULL;
    l->first=NULL;
    l->last=NULL;
}
int isEmpty(List *l)
{
    return (l->current==NULL && l->first==NULL && l->last==NULL);
}
int insertFirst(List * l, char * name, char * path, int day, int month, int year, TypeMultimediaObject type)
{
    NodeList * new = newNodeList(name, path, day, month, year, type, l->first);
    l->first=new;

}
int isFirst(List * l){
    return l->current==l->first;
}
int isLast(List * l){
    return l->last==l->current;
}
int isOutOfList(List * l)
{
    return l->current==NULL;
}
char * getCurrentName (List * l)
{
    if(l->current==NULL)
    {
        return NULL;
    } 
    else 
    {
        return l->current->value.name;
    }
}
char * getCurrentPath (List * l)
{
    if(l->current==NULL)
    {
        return NULL;
    } 
    else 
    {
        return l->current->value.path;
    }
}
Date getCurrentDate (List * l)
{
    if(l->current==NULL)
    {
        Date d = {0,0,0};
        return d;
    } 
    else 
    {
        return l->current->value.date;
    }
}

TypeMultimediaObject getCurrentType (List * l)
{
    if(l->current==NULL)
    {
        TypeMultimediaObject t = UNDEFINED;
        return t;
    } 
    else 
    {
        return l->current->value.type;
    }
}

void setOnFirst(List * l)
{
    l->current=l->first;
}

void setOnLast(List * l)
{
    l->current=l->last;
}
 
void setOnNext (List * l)
{
    l->current=l->current->next;
}

void printList(List * l)
{
    while(l->current->next!=NULL)
    {
        displayConsoleOM(&l->current->value);
    }
}
int nbElement(List * l);
#include "test.h"
/*!
* \brief  Unit testing of the functions provided in the list.c file
*/
void test_list()
{
    List l1;
    int ret1;
    printf("Unit tests on teh list module\n");

    /*group 1*/
    /*
    initList(&l1);
    display_test_int("Test isEmpty() on an empty list",1,isEmpty(&l1));
    display_test_int("Test isOutOfList() when the list is empty",1,isOutOfList(&l1));
    display_test_string("Test getCurrentName() when the list is empty",NULL,getCurrentName(&l1));
    display_test_check_by_user("Test printList on an isEmpty list");
    printList(&l1);

    ret1 = insertFirst(&l1,"WEI","data/fish.jpg",10,10,2014,PHOTO);
    display_test_int("Test insertFirst() on an empty list",1,ret1);

    ret1 = insertFirst(&l1,"WEI2","data/fishAndTree.jpg",11,10,2014,PHOTO);
    display_test_int("Test insertFirst() on a not-empty list",1,ret1);
    display_test_check_by_user("Test insertFirst : (list should be with WEI2 and WEI)");
    printList(&l1);
    display_test_int("Test isEmpty() on an non-empty list",0,isEmpty(&l1));

    setOnLast(&l1);
    display_test_int("Test isLast() when  setOnLast",1,isLast(&l1));
    display_test_int("Test isFirst() when not on first",0,isFirst(&l1));
    display_test_int("Test isOutOfList() when  in the list",0,isOutOfList(&l1));
    display_test_string("Test getCurrentName() when in the list","WEI",getCurrentName(&l1));

    setOnNext(&l1);
    display_test_int("Test isOutOfList() when out of the non-empty list",1,isOutOfList(&l1));
    display_test_string("Test getCurrentName() when out of a non-empty list",NULL,getCurrentName(&l1));

    setOnFirst(&l1);
    display_test_int("Test isFirst() when setOnFirst ",1,isFirst(&l1));
    display_test_int("Test isLast() when  not on last",0,isLast(&l1));
    display_test_string("Test getCurrentName() when in the list","WEI2",getCurrentName(&l1));

    setOnNext(&l1);
    display_test_int("Test setOnNext()",1,isLast(&l1));
    */

    /*group 2*/

    /*group 3*/

    /*group 4*/

    /*group 5*/
}
