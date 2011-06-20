/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jun 17 16:37:01 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionQuit;
    QAction *actionOptions;
    QAction *actionAbout_StreamfileCreator;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_all;
    QAction *actionCircular_spiral;
    QAction *actionRectangular_spiral;
    QAction *actionLine;
    QAction *actionCircle;
    QAction *actionRectangle;
    QWidget *centralWidget;
    QWidget *widget_plot;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAdd;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_groups;
    QWidget *dockWidgetContents_groups;
    QTreeView *treeView;
    QDockWidget *dockWidget_info;
    QWidget *dockWidgetContents_info;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(885, 400);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/icons/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon2);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionAbout_StreamfileCreator = new QAction(MainWindow);
        actionAbout_StreamfileCreator->setObjectName(QString::fromUtf8("actionAbout_StreamfileCreator"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName(QString::fromUtf8("actionSelect_all"));
        actionCircular_spiral = new QAction(MainWindow);
        actionCircular_spiral->setObjectName(QString::fromUtf8("actionCircular_spiral"));
        actionRectangular_spiral = new QAction(MainWindow);
        actionRectangular_spiral->setObjectName(QString::fromUtf8("actionRectangular_spiral"));
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget_plot = new QWidget(centralWidget);
        widget_plot->setObjectName(QString::fromUtf8("widget_plot"));
        widget_plot->setGeometry(QRect(60, 40, 421, 211));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 885, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAdd = new QMenu(menuEdit);
        menuAdd->setObjectName(QString::fromUtf8("menuAdd"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_groups = new QDockWidget(MainWindow);
        dockWidget_groups->setObjectName(QString::fromUtf8("dockWidget_groups"));
        dockWidgetContents_groups = new QWidget();
        dockWidgetContents_groups->setObjectName(QString::fromUtf8("dockWidgetContents_groups"));
        treeView = new QTreeView(dockWidgetContents_groups);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(-30, 10, 161, 192));
        dockWidget_groups->setWidget(dockWidgetContents_groups);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_groups);
        dockWidget_info = new QDockWidget(MainWindow);
        dockWidget_info->setObjectName(QString::fromUtf8("dockWidget_info"));
        dockWidgetContents_info = new QWidget();
        dockWidgetContents_info->setObjectName(QString::fromUtf8("dockWidgetContents_info"));
        dockWidget_info->setWidget(dockWidgetContents_info);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_info);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionQuit);
        menuEdit->addAction(menuAdd->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_all);
        menuAdd->addAction(actionCircular_spiral);
        menuAdd->addAction(actionRectangular_spiral);
        menuAdd->addAction(actionLine);
        menuAdd->addAction(actionCircle);
        menuAdd->addAction(actionRectangle);
        menuHelp->addAction(actionAbout_StreamfileCreator);
        menuTools->addAction(actionOptions);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionRectangle);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", 0, QApplication::UnicodeUTF8));
        actionSave_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("MainWindow", "Options...", 0, QApplication::UnicodeUTF8));
        actionAbout_StreamfileCreator->setText(QApplication::translate("MainWindow", "About StreamfileCreator...", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionSelect_all->setText(QApplication::translate("MainWindow", "Select all", 0, QApplication::UnicodeUTF8));
        actionCircular_spiral->setText(QApplication::translate("MainWindow", "Circular spiral", 0, QApplication::UnicodeUTF8));
        actionRectangular_spiral->setText(QApplication::translate("MainWindow", "Rectangular spiral", 0, QApplication::UnicodeUTF8));
        actionLine->setText(QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8));
        actionCircle->setText(QApplication::translate("MainWindow", "Circle", 0, QApplication::UnicodeUTF8));
        actionRectangle->setText(QApplication::translate("MainWindow", "Rectangle", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuAdd->setTitle(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
