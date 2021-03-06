#ifndef CLIENTLISTVIEW_H
#define CLIENTLISTVIEW_H

#include <QWidget>

namespace Ui {
class ClientListView;
}

class ctkPluginContext;
class ClientListView : public QWidget
{
    Q_OBJECT

public:
    ClientListView(ctkPluginContext* context, QWidget *parent = 0);
    ~ClientListView();

private:
    void showClientDetail(const int clientMark);

private slots:
    void on_pushButton_clicked();

    void on_btnMonitor1_clicked();

    void on_btnMonitor2_clicked();

private:
    Ui::ClientListView *ui;
    ctkPluginContext* m_pContext;
};

#endif // CLIENTLISTVIEW_H
