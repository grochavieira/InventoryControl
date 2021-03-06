#ifndef LDDE_H
#define LDDE_H

#include "cliente.h"
#include "produto.h"
#include "pedidos.h"
#include "funcionario.h"
#include <chrono>
#include <iostream>
#include <QtSql>

using namespace std;

template <class F>
class No
{
private:
    int id;
    No<F> *prox;
    No<F> *anterior;
    F objeto;

public:
    template <class>
    friend class LDDE;
};

template <class F>
class LDDE
{
private:
    No<F> *primeiro;
    No<F> *ultimo;
    F sentinela;
    int n;

    void copia(LDDE &dest, const LDDE &other)
    {
        dest.Reseta();
        n = 0;
        primeiro = NULL;
        ultimo = NULL;
        No<F> *atu = other.primeiro;
        while (atu)
        {
            Insere(atu->objeto);
            atu = atu->prox;
        }
    }

public:
    LDDE() : primeiro(NULL), ultimo(NULL), n(0)
    {
    }

    LDDE(const LDDE &outra)
    {
        copia(*this, outra);
    }

    LDDE &operator=(const LDDE &other)
    {
        copia(*this, other);
        return *this;
    }

    bool Atualiza(F novo, int id)
    {
        No<F> *atual = BuscaNo(id);
        if (!atual)
            return false;

        atual->objeto = novo;
        return true;
    }

    bool Insere(F copiaObjeto)
    {
        No<F> *novo = new No<F>;
        novo->id = copiaObjeto.getId();
        novo->objeto = new F(&copiaObjeto);
        //novo->objeto.Imprime(); // debug
        novo->anterior = NULL;
        novo->prox = NULL;

        No<F> *ant = NULL;
        No<F> *atual = primeiro;

        while (atual && atual->id <= copiaObjeto.getId())
        {
            ant = atual;
            atual = atual->prox;
        }

        if (ant)
            ant->prox = novo;
        else
            primeiro = novo;

        if (atual)
            atual->anterior = novo;
        else
            ultimo = novo;

        novo->anterior = ant;
        novo->prox = atual;

        n++;
        return true;
    }

    No<F> *BuscaNo(int id)
    {
        No<F> *atual = primeiro;
        while (atual)
        {
            if (atual->objeto.getId() == id)
            {
                return atual;
            }
            atual = atual->prox;
        }

        return nullptr;
    }

    F Busca(int id)
    {
        No<F> *atual = primeiro;
        while (atual)
        {
            if (atual->id == id)
            {
                return atual->objeto;
            }
            atual = atual->prox;
        }
        return sentinela;
    }

    F Busca(QString nome)
    {
        No<F> *atual = primeiro;
        while (atual)
        {
            if (atual->objeto.getNome() == nome)
            {
                return atual->objeto;
            }
            atual = atual->prox;
        }
        return sentinela;
    }

    int BuscaId(int id)
    {
        int i = 0;
        No<F> *atual = primeiro;
        while (atual)
        {
            if (atual->objeto.getId() == id)
            {
                return i;
            }
            atual = atual->prox;
            i++;
        }
        return -1;
    }

    bool BuscaCadastro(QString usuario, QString senha)
    {
        No<F> *atual = primeiro;
        while (atual)
        {
            if (atual->objeto.getUsuario() == usuario && atual->objeto.getSenha() == senha)
            {
                return true;
            }
            atual = atual->prox;
        }
        return false;
    }

    bool BuscaUsuario(QString usuario)
    {
        No<F> *atual = primeiro;
        while (atual)
        {
            if (atual->objeto.getUsuario() == usuario)
            {
                return true;
            }
            atual = atual->prox;
        }
        return false;
    }

    F BuscaDadosUsuario(QString usuario, QString senha)
    {
        No<F> *atual = primeiro;
        while (atual)
        {
            if (atual->objeto.getUsuario() == usuario && atual->objeto.getSenha() == senha)
            {
                return atual->objeto;
            }
            atual = atual->prox;
        }
        return nullptr;
    }

    void Reseta()
    {
        bool existeCadastro = true;
        while (existeCadastro)
        {
            int index = 0;
            if (!(index < n))
            {
                existeCadastro = false;
            }
            else
            {
                No<F> *atual = primeiro;
                while (atual != NULL && index--)
                {
                    atual = atual->prox;
                }

                if (atual->anterior)
                    atual->anterior->prox = atual->prox;
                else
                    primeiro = atual->prox;

                if (atual->prox)
                    atual->prox->anterior = atual->anterior;
                else
                    ultimo = atual->anterior;

                delete atual;

                n--;
            }
        }
    }

    bool Remove(int id)
    {
        int index = BuscaId(id);
        if (!(index >= 0 && index < n))
        {
            return false;
        }

        No<F> *atual = primeiro;
        while (atual != NULL && index--)
        {
            atual = atual->prox;
        }

        if (atual->anterior)
            atual->anterior->prox = atual->prox;
        else
            primeiro = atual->prox;

        if (atual->prox)
            atual->prox->anterior = atual->anterior;
        else
            ultimo = atual->anterior;

        delete atual;

        n--;
        return true;
    }

    void Imprime()
    {
        No<F> *atual = primeiro;
        while (atual)
        {
            //atual->objeto.Imprime(); // debug
            atual = atual->prox;
        }
        qDebug() << endl;
    }

    int getQtdCadastrados()
    {
        return n;
    }

    const F &operator[](int index)
    {
        if (index < 0 || index >= n)
            return sentinela;

        int i = 0;
        No<F> *atual = primeiro;
        while (atual)
        {
            if (i == index)
            {
                return atual->objeto;
            }
            atual = atual->prox;
            i++;
        }
    }

    ~LDDE()
    {
        Reseta();
    }
};

#endif // LDDE_H
