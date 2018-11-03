// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ASKPASSFDNASEDIALOG_H
#define BITCOIN_QT_ASKPASSFDNASEDIALOG_H

#include <QDialog>

class WalletModel;

namespace Ui
{
class AskPassfdnaseDialog;
}

/** Multifunctional dialog to ask for passfdnases. Used for encryption, unlocking, and changing the passfdnase.
 */
class AskPassfdnaseDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,         /**< Ask passfdnase twice and encrypt */
        UnlockAnonymize, /**< Ask passfdnase and unlock only for anonymization */
        Unlock,          /**< Ask passfdnase and unlock */
        ChangePass,      /**< Ask old passfdnase + new passfdnase twice */
        Decrypt          /**< Ask passfdnase and decrypt wallet */
    };

    explicit AskPassfdnaseDialog(Mode mode, QWidget* parent, WalletModel* model);
    ~AskPassfdnaseDialog();

    void accept();

private:
    Ui::AskPassfdnaseDialog* ui;
    Mode mode;
    WalletModel* model;
    bool fCapsLock;

private slots:
    void textChanged();

protected:
    bool event(QEvent* event);
    bool eventFilter(QObject* object, QEvent* event);
};

#endif // BITCOIN_QT_ASKPASSFDNASEDIALOG_H
