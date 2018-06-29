#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), _mark(nullptr),
    _messageLab(nullptr),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _mark = new Mark();
    ShowStatusBarInfo();
}

MainWindow::~MainWindow()
{
    delete ui;

    if(_mark != nullptr)
    {
        delete _mark;
        _mark = nullptr;
    }
    if(_messageLab != nullptr)
    {
        delete _messageLab;
        _messageLab = nullptr;
    }
}

void MainWindow::on_srcBrowsBtn_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, QStringLiteral("打开图片文件"), ".", "Image Files(*.jpg)");
    if(imagePath.isEmpty()) return;

    ui->srcPathEdit->setText(imagePath);
}

void MainWindow::on_markBrowsBtn_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, QStringLiteral("打开图片文件"), ".", "Image Files(*.jpg)");
    if(imagePath.isEmpty()) return;

    ui->markPathEdit->setText(imagePath);
}

void MainWindow::on_savePathBtn_clicked()
{
    //其中第三个参数是默认选择路径
    QString savePath = QFileDialog::getExistingDirectory(this, QStringLiteral("请选择打好水印图片保存路径:"), "./");
    if(savePath.isEmpty()) return;

    ui->savePathEdit->setText(savePath);
}

void MainWindow::on_createBtn_clicked()
{
    if(ui->srcPathEdit->text().isEmpty() || ui->markPathEdit->text().isEmpty())
    {
        QMessageBox::critical(this, QStringLiteral("错误"), QStringLiteral("原图和水印图像路径不能为空"), QStringLiteral("确定"), "", "", QMessageBox::Yes);
        return;
    }

    if(_mark != nullptr)
    {
        QString savePath;
        QString srcPath = ui->srcPathEdit->text();
        QString markPath = ui->markPathEdit->text();
        if(ui->savePathEdit->text().isEmpty()) savePath = QApplication::applicationDirPath()+"//";
        else savePath = ui->savePathEdit->text();
        if(_mark->AddImageMark(srcPath, markPath, savePath, ui->posComboBox->currentIndex()))
        {
            _messageLab->setText(QStringLiteral("水印制作成功"));
        }
        else
        {
            _messageLab->setText(QStringLiteral("水印制作失败"));
        }
    }
    else
    {
        _messageLab->setText(QStringLiteral("程序初始化失败"));
    }
}

void MainWindow::ShowStatusBarInfo()
{
    _messageLab = new QLabel();
    if(_messageLab == nullptr) return;

    _messageLab->setAlignment(Qt::AlignHCenter);
    _messageLab->setMinimumSize(_messageLab->sizeHint());
    _messageLab->setFont(QFont("Microsoft YaHei", 9, QFont::Bold));

    ui->statusBar->setStyleSheet(QString("QStatusBar::item{border : 0px}"));  //设置不显示Label的边框
    ui->statusBar->setSizeGripEnabled(false);  //设置是否显示右边的大小控制点
    ui->statusBar->addWidget(_messageLab);
}
