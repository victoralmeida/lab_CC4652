#include<iostream>
#include<cstdlib>

#include"no.h"

using namespace std;

template <typename T>
class Ldde{

private:
    int size;
    No<T>* primeiro;
public:
    Ldde():primeiro(NULL), size(0){}

    bool insere(T valor){
          No<T>* novo = new No<T>(valor);

          if(!novo){
            cout<<"Não foi possível inserir"<<endl;
            return false;
          }

          if(size == 0){
            primeiro=novo;
            //cout<<"valor do primeiro: "<<primeiro->valor<<endl;
          }

          


          size++;
          return true;

  }

  void imprime(){
    if(primeiro)
      cout<<primeiro->valor;
  }


};
