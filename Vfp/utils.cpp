#include "utils.h"
#include <QDebug>
#include <QString>

namespace Ps {

    static QString DESTRUCTOR_MSG = QStringLiteral("Running the %1 destructor.");

    static QString DEFAULT_MSG = QStringLiteral("%1");

    void Utils::DestructorMsg(QString value)
    {
        qDebug() << DESTRUCTOR_MSG.arg(value);
    }

    void Utils::DestructorMsg(QObject *value)
    {
        DestructorMsg(value->metaObject()->className());
    }

}
