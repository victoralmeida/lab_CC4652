#include<iostream>
#include<cstdlib>

template <typename T>
class No{

public:
  No(T valor): prx(NULL), ant(NULL), valor(valor){}
  No*prx;
  No*ant;
  T valor;

};
