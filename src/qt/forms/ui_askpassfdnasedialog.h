/********************************************************************************
** Form generated from reading UI file 'askpassfdnasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSFDNASEDIALOG_H
#define UI_ASKPASSFDNASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskPassfdnaseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *warningLabel;
    QFormLayout *formLayout;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QLabel *capsLabel;
    QCheckBox *anonymizationCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskPassfdnaseDialog)
    {
        if (AskPassfdnaseDialog->objectName().isEmpty())
            AskPassfdnaseDialog->setObjectName(QStringLiteral("AskPassfdnaseDialog"));
        AskPassfdnaseDialog->resize(598, 222);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskPassfdnaseDialog->sizePolicy().hasHeightForWidth());
        AskPassfdnaseDialog->setSizePolicy(sizePolicy);
        AskPassfdnaseDialog->setMinimumSize(QSize(550, 0));
        verticalLayout = new QVBoxLayout(AskPassfdnaseDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        warningLabel = new QLabel(AskPassfdnaseDialog);
        warningLabel->setObjectName(QStringLiteral("warningLabel"));
        warningLabel->setText(QStringLiteral("Placeholder text"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        passLabel1 = new QLabel(AskPassfdnaseDialog);
        passLabel1->setObjectName(QStringLiteral("passLabel1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passLabel1);

        passEdit1 = new QLineEdit(AskPassfdnaseDialog);
        passEdit1->setObjectName(QStringLiteral("passEdit1"));
        passEdit1->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passEdit1);

        passLabel2 = new QLabel(AskPassfdnaseDialog);
        passLabel2->setObjectName(QStringLiteral("passLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel2);

        passEdit2 = new QLineEdit(AskPassfdnaseDialog);
        passEdit2->setObjectName(QStringLiteral("passEdit2"));
        passEdit2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passEdit2);

        passLabel3 = new QLabel(AskPassfdnaseDialog);
        passLabel3->setObjectName(QStringLiteral("passLabel3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel3);

        passEdit3 = new QLineEdit(AskPassfdnaseDialog);
        passEdit3->setObjectName(QStringLiteral("passEdit3"));
        passEdit3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passEdit3);

        capsLabel = new QLabel(AskPassfdnaseDialog);
        capsLabel->setObjectName(QStringLiteral("capsLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        capsLabel->setFont(font);
        capsLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, capsLabel);

        anonymizationCheckBox = new QCheckBox(AskPassfdnaseDialog);
        anonymizationCheckBox->setObjectName(QStringLiteral("anonymizationCheckBox"));
        anonymizationCheckBox->setEnabled(true);
        anonymizationCheckBox->setVisible(false);

        formLayout->setWidget(4, QFormLayout::LabelRole, anonymizationCheckBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(AskPassfdnaseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AskPassfdnaseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskPassfdnaseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskPassfdnaseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskPassfdnaseDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPassfdnaseDialog)
    {
        AskPassfdnaseDialog->setWindowTitle(QApplication::translate("AskPassfdnaseDialog", "Passfdnase Dialog", nullptr));
        passLabel1->setText(QApplication::translate("AskPassfdnaseDialog", "Enter passfdnase", nullptr));
        passLabel2->setText(QApplication::translate("AskPassfdnaseDialog", "New passfdnase", nullptr));
        passLabel3->setText(QApplication::translate("AskPassfdnaseDialog", "Repeat new passfdnase", nullptr));
        capsLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        anonymizationCheckBox->setToolTip(QApplication::translate("AskPassfdnaseDialog", "Serves to disable the trivial sendmoney when OS account compromised. Provides no real security.", nullptr));
#endif // QT_NO_TOOLTIP
        anonymizationCheckBox->setText(QApplication::translate("AskPassfdnaseDialog", "For anonymization, automint, and staking only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AskPassfdnaseDialog: public Ui_AskPassfdnaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSFDNASEDIALOG_H
