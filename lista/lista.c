#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear()
{
    
    Lista* lista_crear();
l =  (lista*)malloc(szeof(lista));
l -> head = NULL;
l -> tail= NULL;

}

int lista_vacia(Lista* lista)
{
   return lista -> head == NULL; 
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
    if(lista_vacia(lista)
        return -1;
Nodo* temp= lista->head;
int dato = temp -> dato;
    }
   
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
    actual -> actual -> siguiente;
}
    Nodo *temp = lista -> tail;
    int dato = temp -> dato;
    actual -> siguiente = NULL;
    lista -> tail = actual;

    return dato;
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
    
    while ( != lista_cvacia(lista));
    lista_eliminar_head(lista);
 } free(lista);
}
