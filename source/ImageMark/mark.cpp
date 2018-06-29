#include "mark.h"
#include <QDebug>
#include <opencv.hpp>
#include <opencv2/core.hpp>
#include <QTime>

using namespace cv;

#define LEFT_UP     0
#define LEFT_DOWN   1
#define CENTER      2
#define RIGHT_UP    3
#define RIGHT_DOWN  4
#define MARGIN      30


Mark::Mark()
{

}

bool Mark::AddImageMark(QString srcPath, QString markPath, QString savePath, int position)
{
    Mat srcImage = imread(srcPath.toStdString());
    Mat markImage = imread(markPath.toStdString());
    if(srcImage.data==nullptr || markImage.data==nullptr) return false;

    QPoint pos = MarkPosition(QPoint(srcImage.cols, srcImage.rows), QPoint(markImage.cols, markImage.rows), position);

    Mat imageROI = srcImage(Rect(pos.x(), pos.y(), markImage.cols, markImage.rows));
    //将logo加到原图上
    addWeighted(imageROI, 0.5, markImage, 0.3, 0.0, imageROI);
    imwrite(savePath.toStdString()+QTime::currentTime().toString("hh-mm-ss").toStdString()+".jpg", srcImage);
    //imshow("", srcImage);

    return true;
}

QPoint Mark::MarkPosition(QPoint srcPoint, QPoint markPoint, int position)
{
    int x, y;  //这里的x，y代表的是水印图的左上角坐标位置，而QPoint中的x，y代表的是原图和水印图的宽高
    switch(position)
    {
    case LEFT_UP:
        x = MARGIN;
        y = MARGIN;
        break;
    case LEFT_DOWN:
        x = MARGIN;
        y = srcPoint.y()-MARGIN-markPoint.y();
        break;
    case CENTER:
        x = srcPoint.x() / 2 - markPoint.x() / 2;
        y = srcPoint.y() / 2 - markPoint.y() / 2;
        break;
    case RIGHT_UP:
        x = srcPoint.x()-MARGIN-markPoint.x();
        y = MARGIN;
        break;
    case RIGHT_DOWN:
        x = srcPoint.x()-MARGIN-markPoint.x();
        y = srcPoint.y()-MARGIN-markPoint.y();
        break;
    default:
        x = MARGIN;
        y = MARGIN;
        break;
    }

    return QPoint(x, y);
}


