#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class Form;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void showSettingPanel();
    void generateCodeDialogCall();
private slots:
    void on_saveButton_clicked();

    void on_OpenButton_clicked();

    void on_exportProjectButton_clicked();

    void on_createNewFileButton_clicked();

    void on_settingsButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
