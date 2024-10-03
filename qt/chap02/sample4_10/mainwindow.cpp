#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QActionGroup"
#include "QSpinBox"
#include "QFontComboBox"
#include "QLabel"
#include "QProgressBar"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //解决中英互斥性
    QActionGroup *actionGroup=new QActionGroup(this);
    actionGroup->addAction(ui->actLang_CN);
    actionGroup->addAction(ui->actLang_EN);
    actionGroup->setExclusive(true);

    //创建ui无法直接设计的组件
    QSpinBox * spinFontSize=new QSpinBox(this);
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(spinFontSize);

    QFontComboBox * comboFontBox=new QFontComboBox(this);
    comboFontBox->setMinimumWidth(150);
    comboFontBox->setFont(ui->textEdit->font());
    ui->toolBar->addWidget(comboFontBox);

    ui->toolBar->addSeparator();

    ui->toolBar->addAction(ui->actClose);

    //status bar
    labFile =new QLabel(this);
    labFile->setMinimumWidth(150);
    labFile->setText("文件名");
    ui->statusbar->addWidget(labFile);

    QProgressBar *progressBar=new QProgressBar(this);
    progressBar->setMinimum(5);
    progressBar->setMaximum(50);
    progressBar->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progressBar);

    QLabel * labInfo=new QLabel(this);
    labInfo->setText("Permanent");
    ui->statusbar->addPermanentWidget(labInfo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actFile_New_triggered()
{
    ui->textEdit->clear();
    ui->textEdit->document()->setModified(false);
    labFile->setText("文件名：新建的一个文件");
}


void MainWindow::on_actFile_Open_triggered()
{
    labFile->setText("正在打开一个文件");

}


void MainWindow::on_actFile_Save_triggered()
{
    ui->textEdit->document()->setModified(false);
    labFile->setText("文件已保存");
}


void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->actEdit_Copy->setEnabled(b);
    ui->actEidt_Cut->setEnabled(b);
    ui->actEdit_Paste->setEnabled(ui->textEdit->canPaste());
}


void MainWindow::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    ui->actFont_Bold->setChecked(fmt.font().bold());
    ui->actFont_Italic->setChecked(fmt.font().italic());
    ui->actFont_UnderLine->setChecked(fmt.font().underline());
}



void MainWindow::on_actFont_Bold_triggered(bool checked)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->setCurrentCharFormat(fmt);
}

