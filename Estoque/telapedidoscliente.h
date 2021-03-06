#ifndef TELAPEDIDOSCLIENTE_H
#define TELAPEDIDOSCLIENTE_H

#include <QDialog>
#include <QCloseEvent>
#include "produto.h"
#include "cliente.h"
#include "pedidos.h"
#include "compras.h"
#include "ldde.h"
#include "fila.h"
#include "conexao.h"
#include <QMessageBox>
#include <QString>

namespace Ui
{
class TelaPedidosCliente;
}

class TelaPedidosCliente : public QDialog
{
    Q_OBJECT

public:
    explicit TelaPedidosCliente(QWidget *parent = nullptr, int IdCliente = -1, QString nomeClient = "", QString telefone = "", QString cep = "", int numero_end = -1);
    ~TelaPedidosCliente();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_tabWidget_currentChanged(int index);

    void on_tabWidget_tabBarClicked(int index);

    void on_buttonAdiciona_clicked();

    void on_buttonListar_clicked();

    void on_buttonPesquisar_clicked();

    void on_pushButton_clicked();

    void on_buttonConfirma_clicked();

    void on_spnQuantidade_editingFinished();

    void on_twCompraCliente_itemSelectionChanged();

    void on_tabPedidosDoCliente_currentChanged(int index);

    void on_btnConfirmarPedido_clicked();

    void on_btnExcluirPedido_clicked();

private:
    Ui::TelaPedidosCliente *ui;
};

#endif // TELAPEDIDOSCLIENTE_H
