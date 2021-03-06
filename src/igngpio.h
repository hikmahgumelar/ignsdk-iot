#ifndef IGNGPIO_H
#define IGNGPIO_H

#include <QObject>
#include <QVariantMap>
#include <QVariant>
#include "ignfs.h"
#include "igngpioRead.h"

class igngpio : public QObject
{
    Q_OBJECT
public:
    igngpio(QObject *parent = 0);
    QString GPIO_PIN;
    QVariantMap GPIO_MAP;
    QString GPIO_MAP_DIR;
    bool GPIO_SET_MAP;
    QString GPIO_DIR;
    QString GPIO_EXPORT;
    QString GPIO_UNEXPORT;
    ignfs fs;
    igngpioRead *m_gpio_read;
signals:

public slots:
    bool board(const QString name);
    bool set(const int &pin);
    bool mode(const QString &mode);
    bool write(const int &pin, const int &in);
    QString PIN(const int &pin);
    QObject *read(const int &pin);
    void unset(const int &pin);
};

#endif // IGNGPIO_H
