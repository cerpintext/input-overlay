/********************************************************************************
** Form generated from reading UI file 'io_settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IO_SETTINGS_DIALOG_H
#define UI_IO_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_io_config_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabs;
    QWidget *tab_local;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_local_features;
    QCheckBox *cb_iohook;
    QCheckBox *cb_gamepad_hook;
    QCheckBox *cb_enable_overlay;
    QCheckBox *cb_enable_history;
    QCheckBox *cb_enable_control;
    QCheckBox *cb_regex;
    QLabel *lbl_mode;
    QComboBox *cb_list_mode;
    QLabel *lbl_new_entry;
    QFrame *frame_entry;
    QHBoxLayout *horizontalLayout;
    QComboBox *cb_text;
    QPushButton *btn_refresh_cb;
    QPushButton *btn_add;
    QLabel *lbl_list;
    QListWidget *list_filters;
    QPushButton *btn_remove;
    QWidget *tab_gamepad;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_bindings;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *a;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_a;
    QLineEdit *txt_a;
    QFrame *b;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_b;
    QLineEdit *txt_b;
    QFrame *x;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_x;
    QLineEdit *txt_x;
    QFrame *y;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_y;
    QLineEdit *txt_y;
    QFrame *start;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_start;
    QLineEdit *txt_start;
    QFrame *back;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_back;
    QLineEdit *txt_back;
    QFrame *rb;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbl_rb;
    QLineEdit *txt_rb;
    QFrame *lb;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbl_lb;
    QLineEdit *txt_lb;
    QFrame *lt;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lbl_lt;
    QLineEdit *txt_lt;
    QFrame *rt;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lbl_rt;
    QLineEdit *txt_rt;
    QFrame *guide;
    QHBoxLayout *horizontalLayout_22;
    QLabel *lbl_guide;
    QLineEdit *txt_guide;
    QFrame *dpad_up;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lbl_dpad_up;
    QLineEdit *txt_dpad_up;
    QFrame *dpad_down;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lbl_dpad_down;
    QLineEdit *txt_dpad_down;
    QFrame *dpad_left;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lbl_dpad_left;
    QLineEdit *txt_dpad_left;
    QFrame *dpad_right;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lbl_dpad_right;
    QLineEdit *txt_dpad_right;
    QFrame *analog_left;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lbl_analog_left;
    QLineEdit *txt_analog_left;
    QFrame *analog_right;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lbl_analog_right;
    QLineEdit *txt_analog_right;
    QFrame *rx;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lbl_rx;
    QLineEdit *txt_rx;
    QFrame *ry;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lbl_ry;
    QLineEdit *txt_ry;
    QFrame *lx;
    QHBoxLayout *horizontalLayout_20;
    QLabel *lbl_lx;
    QLineEdit *txt_lx;
    QFrame *ly;
    QHBoxLayout *horizontalLayout_21;
    QLabel *lbl_ly;
    QLineEdit *txt_ly;
    QWidget *tab_remote;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cb_enable_remote;
    QCheckBox *cb_log;
    QLabel *lbl_status;
    QLabel *lbl_port;
    QSpinBox *box_port;
    QLabel *lbl_refresh_rate;
    QSpinBox *box_refresh_rate;
    QLabel *lbl_connections;
    QListWidget *box_connections;
    QPushButton *btn_refresh;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *io_config_dialog)
    {
        if (io_config_dialog->objectName().isEmpty())
            io_config_dialog->setObjectName(QString::fromUtf8("io_config_dialog"));
        io_config_dialog->resize(404, 575);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(io_config_dialog->sizePolicy().hasHeightForWidth());
        io_config_dialog->setSizePolicy(sizePolicy);
        io_config_dialog->setMinimumSize(QSize(340, 575));
        verticalLayout = new QVBoxLayout(io_config_dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabs = new QTabWidget(io_config_dialog);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setTabPosition(QTabWidget::North);
        tabs->setTabShape(QTabWidget::Rounded);
        tabs->setElideMode(Qt::ElideRight);
        tabs->setDocumentMode(false);
        tabs->setTabsClosable(false);
        tabs->setMovable(false);
        tabs->setProperty("tabBarAutoHide", QVariant(false));
        tab_local = new QWidget();
        tab_local->setObjectName(QString::fromUtf8("tab_local"));
        verticalLayout_2 = new QVBoxLayout(tab_local);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbl_local_features = new QLabel(tab_local);
        lbl_local_features->setObjectName(QString::fromUtf8("lbl_local_features"));
        lbl_local_features->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(lbl_local_features);

        cb_iohook = new QCheckBox(tab_local);
        cb_iohook->setObjectName(QString::fromUtf8("cb_iohook"));

        verticalLayout_2->addWidget(cb_iohook);

        cb_gamepad_hook = new QCheckBox(tab_local);
        cb_gamepad_hook->setObjectName(QString::fromUtf8("cb_gamepad_hook"));

        verticalLayout_2->addWidget(cb_gamepad_hook);

        cb_enable_overlay = new QCheckBox(tab_local);
        cb_enable_overlay->setObjectName(QString::fromUtf8("cb_enable_overlay"));

        verticalLayout_2->addWidget(cb_enable_overlay);

        cb_enable_history = new QCheckBox(tab_local);
        cb_enable_history->setObjectName(QString::fromUtf8("cb_enable_history"));

        verticalLayout_2->addWidget(cb_enable_history);

        cb_enable_control = new QCheckBox(tab_local);
        cb_enable_control->setObjectName(QString::fromUtf8("cb_enable_control"));

        verticalLayout_2->addWidget(cb_enable_control);

        cb_regex = new QCheckBox(tab_local);
        cb_regex->setObjectName(QString::fromUtf8("cb_regex"));

        verticalLayout_2->addWidget(cb_regex);

        lbl_mode = new QLabel(tab_local);
        lbl_mode->setObjectName(QString::fromUtf8("lbl_mode"));

        verticalLayout_2->addWidget(lbl_mode);

        cb_list_mode = new QComboBox(tab_local);
        cb_list_mode->addItem(QString());
        cb_list_mode->addItem(QString());
        cb_list_mode->setObjectName(QString::fromUtf8("cb_list_mode"));

        verticalLayout_2->addWidget(cb_list_mode);

        lbl_new_entry = new QLabel(tab_local);
        lbl_new_entry->setObjectName(QString::fromUtf8("lbl_new_entry"));

        verticalLayout_2->addWidget(lbl_new_entry);

        frame_entry = new QFrame(tab_local);
        frame_entry->setObjectName(QString::fromUtf8("frame_entry"));
        frame_entry->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(frame_entry);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 0, 2, 0);
        cb_text = new QComboBox(frame_entry);
        cb_text->setObjectName(QString::fromUtf8("cb_text"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cb_text->sizePolicy().hasHeightForWidth());
        cb_text->setSizePolicy(sizePolicy1);
        cb_text->setEditable(true);

        horizontalLayout->addWidget(cb_text);

        btn_refresh_cb = new QPushButton(frame_entry);
        btn_refresh_cb->setObjectName(QString::fromUtf8("btn_refresh_cb"));

        horizontalLayout->addWidget(btn_refresh_cb);


        verticalLayout_2->addWidget(frame_entry);

        btn_add = new QPushButton(tab_local);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        verticalLayout_2->addWidget(btn_add);

        lbl_list = new QLabel(tab_local);
        lbl_list->setObjectName(QString::fromUtf8("lbl_list"));

        verticalLayout_2->addWidget(lbl_list);

        list_filters = new QListWidget(tab_local);
        list_filters->setObjectName(QString::fromUtf8("list_filters"));

        verticalLayout_2->addWidget(list_filters);

        btn_remove = new QPushButton(tab_local);
        btn_remove->setObjectName(QString::fromUtf8("btn_remove"));

        verticalLayout_2->addWidget(btn_remove);

        tabs->addTab(tab_local, QString());
        tab_gamepad = new QWidget();
        tab_gamepad->setObjectName(QString::fromUtf8("tab_gamepad"));
        verticalLayout_3 = new QVBoxLayout(tab_gamepad);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lbl_bindings = new QLabel(tab_gamepad);
        lbl_bindings->setObjectName(QString::fromUtf8("lbl_bindings"));

        verticalLayout_3->addWidget(lbl_bindings);

        scrollArea = new QScrollArea(tab_gamepad);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 396, 735));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        a = new QFrame(scrollAreaWidgetContents);
        a->setObjectName(QString::fromUtf8("a"));
        a->setFrameShape(QFrame::NoFrame);
        a->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(a);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 2, 4, 2);
        lbl_a = new QLabel(a);
        lbl_a->setObjectName(QString::fromUtf8("lbl_a"));

        horizontalLayout_2->addWidget(lbl_a);

        txt_a = new QLineEdit(a);
        txt_a->setObjectName(QString::fromUtf8("txt_a"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_a->sizePolicy().hasHeightForWidth());
        txt_a->setSizePolicy(sizePolicy2);
        txt_a->setReadOnly(false);

        horizontalLayout_2->addWidget(txt_a);


        verticalLayout_5->addWidget(a);

        b = new QFrame(scrollAreaWidgetContents);
        b->setObjectName(QString::fromUtf8("b"));
        b->setFrameShape(QFrame::NoFrame);
        b->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(b);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(4, 2, 4, 2);
        lbl_b = new QLabel(b);
        lbl_b->setObjectName(QString::fromUtf8("lbl_b"));

        horizontalLayout_3->addWidget(lbl_b);

        txt_b = new QLineEdit(b);
        txt_b->setObjectName(QString::fromUtf8("txt_b"));
        sizePolicy2.setHeightForWidth(txt_b->sizePolicy().hasHeightForWidth());
        txt_b->setSizePolicy(sizePolicy2);
        txt_b->setReadOnly(false);

        horizontalLayout_3->addWidget(txt_b);


        verticalLayout_5->addWidget(b);

        x = new QFrame(scrollAreaWidgetContents);
        x->setObjectName(QString::fromUtf8("x"));
        x->setFrameShape(QFrame::NoFrame);
        x->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(x);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(4, 2, 4, 2);
        lbl_x = new QLabel(x);
        lbl_x->setObjectName(QString::fromUtf8("lbl_x"));

        horizontalLayout_4->addWidget(lbl_x);

        txt_x = new QLineEdit(x);
        txt_x->setObjectName(QString::fromUtf8("txt_x"));
        sizePolicy2.setHeightForWidth(txt_x->sizePolicy().hasHeightForWidth());
        txt_x->setSizePolicy(sizePolicy2);
        txt_x->setReadOnly(false);

        horizontalLayout_4->addWidget(txt_x);


        verticalLayout_5->addWidget(x);

        y = new QFrame(scrollAreaWidgetContents);
        y->setObjectName(QString::fromUtf8("y"));
        y->setFrameShape(QFrame::NoFrame);
        y->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(y);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(4, 2, 4, 2);
        lbl_y = new QLabel(y);
        lbl_y->setObjectName(QString::fromUtf8("lbl_y"));

        horizontalLayout_5->addWidget(lbl_y);

        txt_y = new QLineEdit(y);
        txt_y->setObjectName(QString::fromUtf8("txt_y"));
        sizePolicy2.setHeightForWidth(txt_y->sizePolicy().hasHeightForWidth());
        txt_y->setSizePolicy(sizePolicy2);
        txt_y->setReadOnly(false);

        horizontalLayout_5->addWidget(txt_y);


        verticalLayout_5->addWidget(y);

        start = new QFrame(scrollAreaWidgetContents);
        start->setObjectName(QString::fromUtf8("start"));
        start->setFrameShape(QFrame::NoFrame);
        start->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(start);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(4, 2, 4, 2);
        lbl_start = new QLabel(start);
        lbl_start->setObjectName(QString::fromUtf8("lbl_start"));

        horizontalLayout_6->addWidget(lbl_start);

        txt_start = new QLineEdit(start);
        txt_start->setObjectName(QString::fromUtf8("txt_start"));
        sizePolicy2.setHeightForWidth(txt_start->sizePolicy().hasHeightForWidth());
        txt_start->setSizePolicy(sizePolicy2);
        txt_start->setReadOnly(false);

        horizontalLayout_6->addWidget(txt_start);


        verticalLayout_5->addWidget(start);

        back = new QFrame(scrollAreaWidgetContents);
        back->setObjectName(QString::fromUtf8("back"));
        back->setFrameShape(QFrame::NoFrame);
        back->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(back);
        horizontalLayout_7->setSpacing(4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(4, 2, 4, 2);
        lbl_back = new QLabel(back);
        lbl_back->setObjectName(QString::fromUtf8("lbl_back"));

        horizontalLayout_7->addWidget(lbl_back);

        txt_back = new QLineEdit(back);
        txt_back->setObjectName(QString::fromUtf8("txt_back"));
        sizePolicy2.setHeightForWidth(txt_back->sizePolicy().hasHeightForWidth());
        txt_back->setSizePolicy(sizePolicy2);
        txt_back->setReadOnly(false);

        horizontalLayout_7->addWidget(txt_back);


        verticalLayout_5->addWidget(back);

        rb = new QFrame(scrollAreaWidgetContents);
        rb->setObjectName(QString::fromUtf8("rb"));
        rb->setFrameShape(QFrame::NoFrame);
        rb->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(rb);
        horizontalLayout_8->setSpacing(4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(4, 2, 4, 2);
        lbl_rb = new QLabel(rb);
        lbl_rb->setObjectName(QString::fromUtf8("lbl_rb"));

        horizontalLayout_8->addWidget(lbl_rb);

        txt_rb = new QLineEdit(rb);
        txt_rb->setObjectName(QString::fromUtf8("txt_rb"));
        sizePolicy2.setHeightForWidth(txt_rb->sizePolicy().hasHeightForWidth());
        txt_rb->setSizePolicy(sizePolicy2);
        txt_rb->setReadOnly(false);

        horizontalLayout_8->addWidget(txt_rb);


        verticalLayout_5->addWidget(rb);

        lb = new QFrame(scrollAreaWidgetContents);
        lb->setObjectName(QString::fromUtf8("lb"));
        lb->setFrameShape(QFrame::NoFrame);
        lb->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(lb);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(4, 2, 4, 2);
        lbl_lb = new QLabel(lb);
        lbl_lb->setObjectName(QString::fromUtf8("lbl_lb"));

        horizontalLayout_9->addWidget(lbl_lb);

        txt_lb = new QLineEdit(lb);
        txt_lb->setObjectName(QString::fromUtf8("txt_lb"));
        sizePolicy2.setHeightForWidth(txt_lb->sizePolicy().hasHeightForWidth());
        txt_lb->setSizePolicy(sizePolicy2);
        txt_lb->setReadOnly(false);

        horizontalLayout_9->addWidget(txt_lb);


        verticalLayout_5->addWidget(lb);

        lt = new QFrame(scrollAreaWidgetContents);
        lt->setObjectName(QString::fromUtf8("lt"));
        lt->setFrameShape(QFrame::NoFrame);
        lt->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(lt);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(4, 2, 4, 2);
        lbl_lt = new QLabel(lt);
        lbl_lt->setObjectName(QString::fromUtf8("lbl_lt"));

        horizontalLayout_10->addWidget(lbl_lt);

        txt_lt = new QLineEdit(lt);
        txt_lt->setObjectName(QString::fromUtf8("txt_lt"));
        sizePolicy2.setHeightForWidth(txt_lt->sizePolicy().hasHeightForWidth());
        txt_lt->setSizePolicy(sizePolicy2);
        txt_lt->setReadOnly(false);

        horizontalLayout_10->addWidget(txt_lt);


        verticalLayout_5->addWidget(lt);

        rt = new QFrame(scrollAreaWidgetContents);
        rt->setObjectName(QString::fromUtf8("rt"));
        rt->setFrameShape(QFrame::NoFrame);
        rt->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(rt);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(4, 2, 4, 2);
        lbl_rt = new QLabel(rt);
        lbl_rt->setObjectName(QString::fromUtf8("lbl_rt"));

        horizontalLayout_11->addWidget(lbl_rt);

        txt_rt = new QLineEdit(rt);
        txt_rt->setObjectName(QString::fromUtf8("txt_rt"));
        sizePolicy2.setHeightForWidth(txt_rt->sizePolicy().hasHeightForWidth());
        txt_rt->setSizePolicy(sizePolicy2);
        txt_rt->setReadOnly(false);

        horizontalLayout_11->addWidget(txt_rt);


        verticalLayout_5->addWidget(rt);

        guide = new QFrame(scrollAreaWidgetContents);
        guide->setObjectName(QString::fromUtf8("guide"));
        guide->setFrameShape(QFrame::NoFrame);
        guide->setFrameShadow(QFrame::Raised);
        horizontalLayout_22 = new QHBoxLayout(guide);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(4, 2, 4, 2);
        lbl_guide = new QLabel(guide);
        lbl_guide->setObjectName(QString::fromUtf8("lbl_guide"));

        horizontalLayout_22->addWidget(lbl_guide);

        txt_guide = new QLineEdit(guide);
        txt_guide->setObjectName(QString::fromUtf8("txt_guide"));
        sizePolicy2.setHeightForWidth(txt_guide->sizePolicy().hasHeightForWidth());
        txt_guide->setSizePolicy(sizePolicy2);
        txt_guide->setReadOnly(false);

        horizontalLayout_22->addWidget(txt_guide);


        verticalLayout_5->addWidget(guide);

        dpad_up = new QFrame(scrollAreaWidgetContents);
        dpad_up->setObjectName(QString::fromUtf8("dpad_up"));
        dpad_up->setFrameShape(QFrame::NoFrame);
        dpad_up->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(dpad_up);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(4, 2, 4, 2);
        lbl_dpad_up = new QLabel(dpad_up);
        lbl_dpad_up->setObjectName(QString::fromUtf8("lbl_dpad_up"));

        horizontalLayout_12->addWidget(lbl_dpad_up);

        txt_dpad_up = new QLineEdit(dpad_up);
        txt_dpad_up->setObjectName(QString::fromUtf8("txt_dpad_up"));
        sizePolicy2.setHeightForWidth(txt_dpad_up->sizePolicy().hasHeightForWidth());
        txt_dpad_up->setSizePolicy(sizePolicy2);
        txt_dpad_up->setReadOnly(false);

        horizontalLayout_12->addWidget(txt_dpad_up);


        verticalLayout_5->addWidget(dpad_up);

        dpad_down = new QFrame(scrollAreaWidgetContents);
        dpad_down->setObjectName(QString::fromUtf8("dpad_down"));
        dpad_down->setFrameShape(QFrame::NoFrame);
        dpad_down->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(dpad_down);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(4, 2, 4, 2);
        lbl_dpad_down = new QLabel(dpad_down);
        lbl_dpad_down->setObjectName(QString::fromUtf8("lbl_dpad_down"));

        horizontalLayout_13->addWidget(lbl_dpad_down);

        txt_dpad_down = new QLineEdit(dpad_down);
        txt_dpad_down->setObjectName(QString::fromUtf8("txt_dpad_down"));
        sizePolicy2.setHeightForWidth(txt_dpad_down->sizePolicy().hasHeightForWidth());
        txt_dpad_down->setSizePolicy(sizePolicy2);
        txt_dpad_down->setReadOnly(false);

        horizontalLayout_13->addWidget(txt_dpad_down);


        verticalLayout_5->addWidget(dpad_down);

        dpad_left = new QFrame(scrollAreaWidgetContents);
        dpad_left->setObjectName(QString::fromUtf8("dpad_left"));
        dpad_left->setFrameShape(QFrame::NoFrame);
        dpad_left->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(dpad_left);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(4, 2, 4, 2);
        lbl_dpad_left = new QLabel(dpad_left);
        lbl_dpad_left->setObjectName(QString::fromUtf8("lbl_dpad_left"));

        horizontalLayout_14->addWidget(lbl_dpad_left);

        txt_dpad_left = new QLineEdit(dpad_left);
        txt_dpad_left->setObjectName(QString::fromUtf8("txt_dpad_left"));
        sizePolicy2.setHeightForWidth(txt_dpad_left->sizePolicy().hasHeightForWidth());
        txt_dpad_left->setSizePolicy(sizePolicy2);
        txt_dpad_left->setReadOnly(false);

        horizontalLayout_14->addWidget(txt_dpad_left);


        verticalLayout_5->addWidget(dpad_left);

        dpad_right = new QFrame(scrollAreaWidgetContents);
        dpad_right->setObjectName(QString::fromUtf8("dpad_right"));
        dpad_right->setFrameShape(QFrame::NoFrame);
        dpad_right->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(dpad_right);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(4, 2, 4, 2);
        lbl_dpad_right = new QLabel(dpad_right);
        lbl_dpad_right->setObjectName(QString::fromUtf8("lbl_dpad_right"));

        horizontalLayout_15->addWidget(lbl_dpad_right);

        txt_dpad_right = new QLineEdit(dpad_right);
        txt_dpad_right->setObjectName(QString::fromUtf8("txt_dpad_right"));
        sizePolicy2.setHeightForWidth(txt_dpad_right->sizePolicy().hasHeightForWidth());
        txt_dpad_right->setSizePolicy(sizePolicy2);
        txt_dpad_right->setReadOnly(false);

        horizontalLayout_15->addWidget(txt_dpad_right);


        verticalLayout_5->addWidget(dpad_right);

        analog_left = new QFrame(scrollAreaWidgetContents);
        analog_left->setObjectName(QString::fromUtf8("analog_left"));
        analog_left->setFrameShape(QFrame::NoFrame);
        analog_left->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(analog_left);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(4, 2, 4, 2);
        lbl_analog_left = new QLabel(analog_left);
        lbl_analog_left->setObjectName(QString::fromUtf8("lbl_analog_left"));

        horizontalLayout_16->addWidget(lbl_analog_left);

        txt_analog_left = new QLineEdit(analog_left);
        txt_analog_left->setObjectName(QString::fromUtf8("txt_analog_left"));
        sizePolicy2.setHeightForWidth(txt_analog_left->sizePolicy().hasHeightForWidth());
        txt_analog_left->setSizePolicy(sizePolicy2);
        txt_analog_left->setReadOnly(false);

        horizontalLayout_16->addWidget(txt_analog_left);


        verticalLayout_5->addWidget(analog_left);

        analog_right = new QFrame(scrollAreaWidgetContents);
        analog_right->setObjectName(QString::fromUtf8("analog_right"));
        analog_right->setFrameShape(QFrame::NoFrame);
        analog_right->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(analog_right);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(4, 2, 4, 2);
        lbl_analog_right = new QLabel(analog_right);
        lbl_analog_right->setObjectName(QString::fromUtf8("lbl_analog_right"));

        horizontalLayout_17->addWidget(lbl_analog_right);

        txt_analog_right = new QLineEdit(analog_right);
        txt_analog_right->setObjectName(QString::fromUtf8("txt_analog_right"));
        sizePolicy2.setHeightForWidth(txt_analog_right->sizePolicy().hasHeightForWidth());
        txt_analog_right->setSizePolicy(sizePolicy2);
        txt_analog_right->setReadOnly(false);

        horizontalLayout_17->addWidget(txt_analog_right);


        verticalLayout_5->addWidget(analog_right);

        rx = new QFrame(scrollAreaWidgetContents);
        rx->setObjectName(QString::fromUtf8("rx"));
        rx->setFrameShape(QFrame::NoFrame);
        rx->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(rx);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(4, 2, 4, 2);
        lbl_rx = new QLabel(rx);
        lbl_rx->setObjectName(QString::fromUtf8("lbl_rx"));

        horizontalLayout_18->addWidget(lbl_rx);

        txt_rx = new QLineEdit(rx);
        txt_rx->setObjectName(QString::fromUtf8("txt_rx"));
        sizePolicy2.setHeightForWidth(txt_rx->sizePolicy().hasHeightForWidth());
        txt_rx->setSizePolicy(sizePolicy2);
        txt_rx->setReadOnly(false);

        horizontalLayout_18->addWidget(txt_rx);


        verticalLayout_5->addWidget(rx);

        ry = new QFrame(scrollAreaWidgetContents);
        ry->setObjectName(QString::fromUtf8("ry"));
        ry->setFrameShape(QFrame::NoFrame);
        ry->setFrameShadow(QFrame::Raised);
        horizontalLayout_19 = new QHBoxLayout(ry);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(4, 2, 4, 2);
        lbl_ry = new QLabel(ry);
        lbl_ry->setObjectName(QString::fromUtf8("lbl_ry"));

        horizontalLayout_19->addWidget(lbl_ry);

        txt_ry = new QLineEdit(ry);
        txt_ry->setObjectName(QString::fromUtf8("txt_ry"));
        sizePolicy2.setHeightForWidth(txt_ry->sizePolicy().hasHeightForWidth());
        txt_ry->setSizePolicy(sizePolicy2);
        txt_ry->setReadOnly(false);

        horizontalLayout_19->addWidget(txt_ry);


        verticalLayout_5->addWidget(ry);

        lx = new QFrame(scrollAreaWidgetContents);
        lx->setObjectName(QString::fromUtf8("lx"));
        lx->setFrameShape(QFrame::NoFrame);
        lx->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(lx);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(4, 2, 4, 2);
        lbl_lx = new QLabel(lx);
        lbl_lx->setObjectName(QString::fromUtf8("lbl_lx"));

        horizontalLayout_20->addWidget(lbl_lx);

        txt_lx = new QLineEdit(lx);
        txt_lx->setObjectName(QString::fromUtf8("txt_lx"));
        sizePolicy2.setHeightForWidth(txt_lx->sizePolicy().hasHeightForWidth());
        txt_lx->setSizePolicy(sizePolicy2);
        txt_lx->setReadOnly(false);

        horizontalLayout_20->addWidget(txt_lx);


        verticalLayout_5->addWidget(lx);

        ly = new QFrame(scrollAreaWidgetContents);
        ly->setObjectName(QString::fromUtf8("ly"));
        ly->setFrameShape(QFrame::NoFrame);
        ly->setFrameShadow(QFrame::Raised);
        horizontalLayout_21 = new QHBoxLayout(ly);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(4, 2, 4, 2);
        lbl_ly = new QLabel(ly);
        lbl_ly->setObjectName(QString::fromUtf8("lbl_ly"));

        horizontalLayout_21->addWidget(lbl_ly);

        txt_ly = new QLineEdit(ly);
        txt_ly->setObjectName(QString::fromUtf8("txt_ly"));
        sizePolicy2.setHeightForWidth(txt_ly->sizePolicy().hasHeightForWidth());
        txt_ly->setSizePolicy(sizePolicy2);
        txt_ly->setReadOnly(false);

        horizontalLayout_21->addWidget(txt_ly);


        verticalLayout_5->addWidget(ly);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        tabs->addTab(tab_gamepad, QString());
        tab_remote = new QWidget();
        tab_remote->setObjectName(QString::fromUtf8("tab_remote"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tab_remote->sizePolicy().hasHeightForWidth());
        tab_remote->setSizePolicy(sizePolicy3);
        tab_remote->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(tab_remote);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cb_enable_remote = new QCheckBox(tab_remote);
        cb_enable_remote->setObjectName(QString::fromUtf8("cb_enable_remote"));

        verticalLayout_4->addWidget(cb_enable_remote);

        cb_log = new QCheckBox(tab_remote);
        cb_log->setObjectName(QString::fromUtf8("cb_log"));

        verticalLayout_4->addWidget(cb_log);

        lbl_status = new QLabel(tab_remote);
        lbl_status->setObjectName(QString::fromUtf8("lbl_status"));

        verticalLayout_4->addWidget(lbl_status);

        lbl_port = new QLabel(tab_remote);
        lbl_port->setObjectName(QString::fromUtf8("lbl_port"));

        verticalLayout_4->addWidget(lbl_port);

        box_port = new QSpinBox(tab_remote);
        box_port->setObjectName(QString::fromUtf8("box_port"));
        box_port->setButtonSymbols(QAbstractSpinBox::NoButtons);
        box_port->setMaximum(65535);
        box_port->setValue(1608);
        box_port->setProperty("showGroupSeparator", QVariant(false));

        verticalLayout_4->addWidget(box_port);

        lbl_refresh_rate = new QLabel(tab_remote);
        lbl_refresh_rate->setObjectName(QString::fromUtf8("lbl_refresh_rate"));

        verticalLayout_4->addWidget(lbl_refresh_rate);

        box_refresh_rate = new QSpinBox(tab_remote);
        box_refresh_rate->setObjectName(QString::fromUtf8("box_refresh_rate"));
        box_refresh_rate->setSuffix(QString::fromUtf8(" ms"));
        box_refresh_rate->setMinimum(5);
        box_refresh_rate->setMaximum(5000);
        box_refresh_rate->setValue(25);

        verticalLayout_4->addWidget(box_refresh_rate);

        lbl_connections = new QLabel(tab_remote);
        lbl_connections->setObjectName(QString::fromUtf8("lbl_connections"));

        verticalLayout_4->addWidget(lbl_connections);

        box_connections = new QListWidget(tab_remote);
        box_connections->setObjectName(QString::fromUtf8("box_connections"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(box_connections->sizePolicy().hasHeightForWidth());
        box_connections->setSizePolicy(sizePolicy4);

        verticalLayout_4->addWidget(box_connections);

        btn_refresh = new QPushButton(tab_remote);
        btn_refresh->setObjectName(QString::fromUtf8("btn_refresh"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btn_refresh->sizePolicy().hasHeightForWidth());
        btn_refresh->setSizePolicy(sizePolicy5);

        verticalLayout_4->addWidget(btn_refresh);

        tabs->addTab(tab_remote, QString());

        verticalLayout->addWidget(tabs);

        button_box = new QDialogButtonBox(io_config_dialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(button_box->sizePolicy().hasHeightForWidth());
        button_box->setSizePolicy(sizePolicy6);
        button_box->setAcceptDrops(false);
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);


        retranslateUi(io_config_dialog);
        QObject::connect(button_box, SIGNAL(accepted()), io_config_dialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), io_config_dialog, SLOT(reject()));

        tabs->setCurrentIndex(1);
        cb_list_mode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(io_config_dialog);
    } // setupUi

    void retranslateUi(QDialog *io_config_dialog)
    {
        io_config_dialog->setWindowTitle(QApplication::translate("io_config_dialog", "Dialog.Title", nullptr));
        lbl_local_features->setText(QApplication::translate("io_config_dialog", "Dialog.LocalFeatures.Info", nullptr));
        cb_iohook->setText(QApplication::translate("io_config_dialog", "Dialog.Uiohook.Enable", nullptr));
        cb_gamepad_hook->setText(QApplication::translate("io_config_dialog", "Dialog.GamepadHook.Enable", nullptr));
        cb_enable_overlay->setText(QApplication::translate("io_config_dialog", "Dialog.InputOverlay.Enable", nullptr));
        cb_enable_history->setText(QApplication::translate("io_config_dialog", "Dialog.InputHistory.Enable", nullptr));
        cb_enable_control->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Enable", nullptr));
        cb_regex->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Regex.Enable", nullptr));
        lbl_mode->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode", nullptr));
        cb_list_mode->setItemText(0, QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode.Whitelist", nullptr));
        cb_list_mode->setItemText(1, QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode.Blacklist", nullptr));

        cb_list_mode->setProperty("currentText", QVariant(QApplication::translate("io_config_dialog", "Dialog.InputControl.Mode.Whitelist", nullptr)));
        lbl_new_entry->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.NewEntry", nullptr));
        btn_refresh_cb->setText(QApplication::translate("io_config_dialog", "Source.InputSource.Reload", nullptr));
        btn_add->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Add", nullptr));
        lbl_list->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.List", nullptr));
        btn_remove->setText(QApplication::translate("io_config_dialog", "Dialog.InputControl.Remove", nullptr));
        tabs->setTabText(tabs->indexOf(tab_local), QApplication::translate("io_config_dialog", "Dialog.LocalFeatures", nullptr));
        lbl_bindings->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Info", nullptr));
        lbl_a->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.A", nullptr));
        txt_a->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_b->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.B", nullptr));
        txt_b->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_x->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.X", nullptr));
        txt_x->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_y->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Y", nullptr));
        txt_y->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_start->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Start", nullptr));
        txt_start->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_back->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Back", nullptr));
        txt_back->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_rb->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.RB", nullptr));
        txt_rb->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_lb->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.LB", nullptr));
        txt_lb->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_lt->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.LT", nullptr));
        txt_lt->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_rt->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.RT", nullptr));
        txt_rt->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_guide->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Guide", nullptr));
        txt_guide->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_dpad_up->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Dpad.Up", nullptr));
        txt_dpad_up->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_dpad_down->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Dpad.Down", nullptr));
        txt_dpad_down->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_dpad_left->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Dpad.Left", nullptr));
        txt_dpad_left->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_dpad_right->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Dpad.Right", nullptr));
        txt_dpad_right->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_analog_left->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Analog.Left", nullptr));
        txt_analog_left->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_analog_right->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Analog.Right", nullptr));
        txt_analog_right->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_rx->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Analog.RX", nullptr));
        txt_rx->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_ry->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Analog.RY", nullptr));
        txt_ry->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_lx->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Analog.LX", nullptr));
        txt_lx->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        lbl_ly->setText(QApplication::translate("io_config_dialog", "Dialog.Gamepad.Binding.Analog.LY", nullptr));
        txt_ly->setInputMask(QApplication::translate("io_config_dialog", "09; ", nullptr));
        tabs->setTabText(tabs->indexOf(tab_gamepad), QApplication::translate("io_config_dialog", "Dialog.Gamepad", nullptr));
        cb_enable_remote->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Enable", nullptr));
        cb_log->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Logging", nullptr));
        lbl_status->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Status", nullptr));
        lbl_port->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Port", nullptr));
#ifndef QT_NO_TOOLTIP
        lbl_refresh_rate->setToolTip(QApplication::translate("io_config_dialog", "<html><head/><body><p>Dialog.InputOverlay.RemoteRefreshRate.Tooltip</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lbl_refresh_rate->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.RefreshRate", nullptr));
#ifndef QT_NO_TOOLTIP
        box_refresh_rate->setToolTip(QApplication::translate("io_config_dialog", "<html><head/><body><p>Dialog.InputOverlay.RemoteRefreshRate.Tooltip</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lbl_connections->setText(QApplication::translate("io_config_dialog", "Dialog.Remote.Connections", nullptr));
        btn_refresh->setText(QApplication::translate("io_config_dialog", "Source.InputSource.Reload", nullptr));
        tabs->setTabText(tabs->indexOf(tab_remote), QApplication::translate("io_config_dialog", "Dialog.RemoteConnection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class io_config_dialog: public Ui_io_config_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IO_SETTINGS_DIALOG_H
