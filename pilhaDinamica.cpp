  #include <iostream>
  #include "pilhaDinamica.h"
  #include <cstddef> // a biblioteca cstddef permite  atribuir uma permição a uma variavel para aceitar um dado nulo
  
  
  using namespace std;

    pilhaDinamica::pilhaDinamica(/* args */) // construtor // dinamic stack
    {
        NoTopo = NULL;
    }
    pilhaDinamica::~pilhaDinamica() // destrutor
    {
        No* NoTemporario;
       
        
        
        while (NoTemporario != NULL)
        {
            NoTemporario = NoTopo;
            NoTopo = NoTopo->proximo;
            delete NoTemporario;
        }
        
    }
    bool pilhaDinamica::estavazio() // isempty
    {           
        return(NoTopo == NULL);
    }
    bool pilhaDinamica::estacheio()//tem memorio // isfull
    {
        No* NoNovo;
        try{
            NoNovo = new No;
            delete NoNovo;
            return false;
        }catch(bad_alloc exception){
            return true;
        }
    }
    void pilhaDinamica::inserir(TypeItem item) //push
    {
        if(estacheio()){
            cout << "A pilha esta cheia\n";
            cout <<"Não foi possivel inserir este elemento\n";
        }else{
            No* NoNovo = new No;
            NoNovo ->valor = item;
            NoNovo -> proximo = NoTopo;
            NoTopo = NoNovo;
            

               
            

        }
        

    }
    TypeItem pilhaDinamica::remover()// pop
    {
        if(estavazio()){
                printf("A pilha esta vazia\n");
                cout << "num foi possivel remover nenhum elemento\n";
                return 0;
        }else{
            No* NoTemporario;
            NoTemporario = NoTopo;
            TypeItem item = NoTopo -> valor;
            NoTopo = NoTopo->proximo;
            delete NoTemporario;
            return item;
        }

    }
    void pilhaDinamica::imprimir()// print
    {
        No* NoTemporario = NoTopo;
        cout << "Pilha:[";
        while(NoTemporario != NULL){
            cout << NoTemporario -> valor <<" ";
            NoTemporario = NoTemporario ->proximo;

        }
        cout << "]\n";
        //cout << endl; // incica que acabou
    }