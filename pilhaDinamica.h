// pilha dinamica = dinamic stack
typedef int TypeItem;

struct No // node ou nó
{
    TypeItem valor;
    No* proximo;
    
    
};



class pilhaDinamica
{
private:
    No* NoTopo;
       
public:
    pilhaDinamica(/* args */); // construtor // dinamic stack
    ~pilhaDinamica(); // destrutor
    bool estavazio(); // isempty
    bool estacheio();//tem memorio // isfull
    void inserir(TypeItem item); //push
    TypeItem remover();// pop
    void imprimir();// print
    
    
    
};


