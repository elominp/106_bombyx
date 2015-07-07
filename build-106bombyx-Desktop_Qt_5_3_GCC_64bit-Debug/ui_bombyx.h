/********************************************************************************
** Form generated from reading UI file 'bombyx.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOMBYX_H
#define UI_BOMBYX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt-plugins/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Bombyx
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *plot;
    QPushButton *but_draw;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QCustomPlot *plot2;
    QPushButton *but_draw2;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *spb_k;
    QLabel *label;
    QSpinBox *spb_imin;
    QLabel *label_2;
    QSpinBox *spb_imax;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Bombyx)
    {
        if (Bombyx->objectName().isEmpty())
            Bombyx->setObjectName(QStringLiteral("Bombyx"));
        Bombyx->resize(400, 300);
        gridLayout = new QGridLayout(Bombyx);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(Bombyx);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        plot = new QCustomPlot(tab);
        plot->setObjectName(QStringLiteral("plot"));

        verticalLayout_2->addWidget(plot);

        but_draw = new QPushButton(tab);
        but_draw->setObjectName(QStringLiteral("but_draw"));

        verticalLayout_2->addWidget(but_draw);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plot2 = new QCustomPlot(tab_3);
        plot2->setObjectName(QStringLiteral("plot2"));

        verticalLayout->addWidget(plot2);

        but_draw2 = new QPushButton(tab_3);
        but_draw2->setObjectName(QStringLiteral("but_draw2"));

        verticalLayout->addWidget(but_draw2);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        spb_k = new QDoubleSpinBox(tab_2);
        spb_k->setObjectName(QStringLiteral("spb_k"));
        spb_k->setMinimum(1);
        spb_k->setMaximum(4);
        spb_k->setValue(1);

        gridLayout_2->addWidget(spb_k, 1, 0, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spb_imin = new QSpinBox(tab_2);
        spb_imin->setObjectName(QStringLiteral("spb_imin"));
        spb_imin->setMaximum(2147483647);

        gridLayout_2->addWidget(spb_imin, 1, 1, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        spb_imax = new QSpinBox(tab_2);
        spb_imax->setObjectName(QStringLiteral("spb_imax"));
        spb_imax->setMaximum(2147483647);

        gridLayout_2->addWidget(spb_imax, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Bombyx);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Bombyx);
    } // setupUi

    void retranslateUi(QWidget *Bombyx)
    {
        Bombyx->setWindowTitle(QApplication::translate("Bombyx", "106bombyx", 0));
        but_draw->setText(QApplication::translate("Bombyx", "Draw", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Bombyx", "Graph 1", 0));
        but_draw2->setText(QApplication::translate("Bombyx", "Draw", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Bombyx", "Graph 2", 0));
        label_3->setText(QApplication::translate("Bombyx", "i max", 0));
        label->setText(QApplication::translate("Bombyx", "k :", 0));
        label_2->setText(QApplication::translate("Bombyx", "i min :", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Bombyx", "Options", 0));
    } // retranslateUi

};

namespace Ui {
    class Bombyx: public Ui_Bombyx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOMBYX_H
