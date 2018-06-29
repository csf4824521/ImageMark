#-------------------------------------------------
#
# Project created by QtCreator 2018-06-29T10:55:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImageMark
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    mark.cpp

HEADERS  += mainwindow.h \
    mark.h

FORMS    += mainwindow.ui

OPENCV_PATH = C:\opencv\build
INCLUDEPATH+=$$OPENCV_PATH\include\
             $$OPENCV_PATH\include\opencv\
             $$OPENCV_PATH\include\opencv2\
             ..\_include\

#这是在x86下使用opencv需要调用的lib库
CONFIG(debug, debug|release){
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_calib3d331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_core331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_features2d331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_flann331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_highgui331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_imgcodecs331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_imgproc331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_ml331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_objdetect331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_photo331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_shape331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_stitching331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_superres331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_video331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_videoio331d.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_videostab331d.lib
}

CONFIG(release, debug|release){
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_calib3d331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_core331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_features2d331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_flann331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_highgui331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_imgcodecs331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_imgproc331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_ml331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_objdetect331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_photo331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_shape331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_stitching331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_superres331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_video331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_videoio331.lib
    LIBS+=$$OPENCV_PATH\x86\vc14\lib\opencv_videostab331.lib
}
