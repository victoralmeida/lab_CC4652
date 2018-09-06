#include<iostream>
#include<cstdlib>

#include"no.h"

using namespace std;

template <typename T>
class Ldde{

private:
    int size;
    No<T>* primeiro;
    No<T> *ultimo;
public:
    Ldde():primeiro(NULL), size(0){}
    ~Ldde(){
		    No<T>* a = primeiro;
		    No<T>* b = NULL;

		    int n=0;
		    while(a){
		      b=a->prx;
		      delete a;
		      a=b;
		      n++;
		    }
		  }

    bool insere(T valor){
            No<T>* novo = new No<T>(valor);
            
			if(!novo){
			    cout<<"Não foi possível criar novo"<<endl;
			    return false;
			}
			
			No<T>* anterior = NULL;
      		No<T>* atual = primeiro;

        	while(atual && atual->valor < novo->valor ){
		        anterior = atual;
		        atual = atual->prx;
      		}
            if(anterior)
        		anterior->prx = novo;
      		else
       			primeiro = novo;
       			
			if(atual)
			    atual->ant=novo;
			else
				ultimo= novo;
				
			novo->prx = atual;
			novo->ant = anterior;
			
			size++;
      		return true;

  }

  void imprime(){
	    No<T>* a = primeiro;
	    while(a){
	      cout<<a->valor<<endl;
	      a=a->prx;
    	}
  }
  
  bool remove(T valor){
    bool cond=false;

    No<T>* anterior = NULL;
    No<T>* atual=primeiro;

    if(atual->valor == valor){
      primeiro = atual->prx;
      delete atual;//Destói No removido da lista
      size--;
      return true;
    }
    if(ultimo->valor==valor){    	
    	atual = ultimo; 
    	ultimo = atual->ant;
    	ultimo->prx=NULL;
    	delete atual; 
		 
    	size--; 
    	return true;
	}

    while(atual && atual->valor<=valor){
      if(atual->valor==valor){
        cond=true;
        break;
      }
      anterior = atual;
      atual=atual->prx;
    }

    if(cond){
      anterior->prx = atual->prx;
	  atual->prx->ant =anterior;

      delete atual; //Destói No removido da lista
      size--;
      return true;
    }else{
      cout<<endl<<"Função remoção: valor "<<valor<< " não encontrado"<<endl;
      return false;
    }

  }
  
  

};
