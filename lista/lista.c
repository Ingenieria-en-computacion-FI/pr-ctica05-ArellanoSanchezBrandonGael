#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear()
{
    
    Lista* lista_crear();
l (lista*)malloc(szeof(lista));
l -> head = NULL;
l -> tail= NULL;

}

int lista_vacia(Lista* lista)
{
    
}

void lista_insertar_head(Lista* lista, int dato)
{

    

    Nodo *newNode = CrearNodo(e);
    if(lista_vacia(lista)){
    l -> head = newNode;
    l -> tail = newNode;
    } else if {
    newNode -> siguiente = lista -> head;
        lista -> head;
        
}

void lista_insertar_tail(Lista* lista, int dato)
{
   Nodo *newNode = CrearNodo(e);
    if(lista_vacia(lista)){
    l -> head = newNode;
    l -> tail = newNode;
    } else if {
    lista -> tail ->suiguiente = newnode;
        lista -> tail = newNode;
}

int lista_eliminar_head(Lista* lista){
    if(lista_vacia(lista){
        return -1;
}
Nodo* temp= lista->head;
int dato = temp -> dato;
}
   
    return -1;
}

int lista_eliminar_tail(Lista* lista)
{
    if(lista_vacia(lista)){
        int dato = actual -> dato;
        nodo_destruir(actual);
        lista -> head = NULL;
        lista -> tail = NULL;
        return dato;
    }
    nodo_destruir(temp);
    return dato;
}
Nodo* actual = ista -> head;
if(lista -> head == lista tail){
    int dato = actual -> dato;
    nodo_destruir(actual);
    lista -> head = NULL;
    lista -> tail = NULL;

    reutrn dato;
}
while(actual -> siguiente != lista -> tail){
    actual -> actual -> siguiente

    return -1;
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista)
{
    /*
    TODO:

    1 si la lista no esta vacia
    2 borrar el primero o el último 
    3 hacer que lista apunte a nulo
    */
}
