#ifndef QVALIDATEDLINEEDIT_H
#define QVALIDATEDLINEEDIT_H

#include <QLineEdit>

// Line edit that can be marked as "invalid". When marked as invalid,
// it will get a red background until it is focused.
class QValidatedLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit QValidatedLineEdit(QWidget *parent = 0);

protected:
    void focusInEvent(QFocusEvent *evt);

private:
    bool valid;

public slots:
    void setValid(bool valid);

private slots:
    void markValid();
};

#endif // QVALIDATEDLINEEDIT_H
