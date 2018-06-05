#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"


ArrayList* al_newArrayList(void){
    ArrayList *auxArrayList=(ArrayList *)malloc(sizeof(ArrayList));

    if(auxArrayList){
        void** auxPElements=(void **)malloc(sizeof(void *)*AL_INITIAL_VALUE);
        if(auxPElements){
            auxArrayList->size=0;
            auxArrayList->pElements=auxPElements;
            auxArrayList->reservedSize=AL_INITIAL_VALUE;
            for(int i=0;i<AL_INITIAL_VALUE;i++){
                auxArrayList->pElements[i]=NULL;
            }
        }else{
            free(auxArrayList);
            auxArrayList=NULL;
        }
    }

    return auxArrayList;
}

int al_len(ArrayList* pList){
    int auxLen=-1;
    if(pList){
        auxLen=pList->size;
    }
    return auxLen;
}

int al_add(ArrayList* pList,void* pElement){
    int auxAdd=-1;

    if(pList){
        if(pElement){
            if(pList->size<pList->reservedSize){
                for(int i=0;i<pList->reservedSize;i++){
                    if(!pList->pElements[i]){
                        pList->size++;
                        pList->pElements[i]=pElement;
                        auxAdd=0;
                        break;
                    }
                }
            }
        }
    }
    return auxAdd;
}

int al_deleteArrayList(ArrayList* pList){
    int auxDel=-1;

    if(pList){
        auxDel=0;
        free(pList->pElements);
        free(pList);
        pList=NULL;
    }
    return auxDel;
}

void* al_get(ArrayList* pList , int index){
    void *auxGet=NULL;
    if(pList){
        if(pList->size>0){
            if(index>=0 && index<pList->reservedSize){
                if(pList->pElements[index]){
                    auxGet=(void *)pList->pElements[index];
                }
            }
        }
    }
    return auxGet;
}

int al_contains(ArrayList* pList, void* pElement){
    int auxContains=-1;
    if(pList){
        if(pList->size>0){
            for(int i=0;i<pList->reservedSize;i++){
                if(pList->pElements[i]==pElement){
                    auxContains=1;
                    break;
                }else{
                    auxContains=0;
                }
            }
        }
    }

    return auxContains;
}

int al_set(ArrayList* pList, int index,void* pElement){
    int auxSet=-1;
    if(pList){
        if(pElement){
            if(index>=0 && index<pList->reservedSize){
                if(!pList->pElements[index]){
                    pList->pElements[index]=pElement;
                    pList->size++;
                    auxSet=0;
                }
            }
        }
    }
    return auxSet;
}

int al_remove(ArrayList* pList,int index){
    int auxRemove=-1;
    if(pList){
        if(index>=0 && index<pList->reservedSize){
            if(!pList->pElements[index]){
                free(pList->pElements[index]);
                pList->pElements[index]=NULL;
                pList->size--;
                auxRemove=0;
            }
        }
    }
    return auxRemove;
}

int al_clear(ArrayList* pList){
    int auxClear=-1;
    if(pList){
        for(int i=0;i<pList->reservedSize;i++){
            free(pList->pElements[i]);
        }
        //free(pList);
        //pList=al_newArrayList();
        auxClear=0;
    }
    return auxClear;
}
