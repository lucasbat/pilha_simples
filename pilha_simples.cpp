/*

Programa em C++ que insere 3 inteiros numa pilha.

*/
#include<stack>
#include<iostream>
using namespace std;
int main(){
stack <int> x;
x.push(1);
x.push(2);
x.push(3);
cout<<"\nA quantidade de elementos e: "<<x.size();
cout<<"\nO elemento do topo de x e: "<<x.top();
x.pop();    //remove elemento do topo
cout<<"\nElemento do topo: "<<x.top();
cout<<"\nQuantidade de elementos da pilha: "<<x.size()<<"\n";

  while(!x.empty()){
    cout<<x.top()<<"\n";
    x.pop();
  }

cout<<"\n\n";
return 0;
}
