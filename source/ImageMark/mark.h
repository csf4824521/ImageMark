#ifndef MARK_H
#define MARK_H
#include <QString>
#include <QPoint>

class Mark
{
public:
    Mark();

    QPoint MarkPosition(QPoint srcPoint, QPoint markPoint, int position);
    bool AddImageMark(QString srcPath, QString markPath, QString savePath,  int position);
};

#endif // MARK_H
