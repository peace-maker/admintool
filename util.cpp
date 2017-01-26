#include "util.h"
#include <QCoreApplication>

QString BuildPath(const char *file)
{
#ifdef WIN32
    return QString("./%1").arg(file);
#elif __APPLE__
    return QString("%1/%2").arg(QCoreApplication::applicationDirPath(), file);
#endif
}
