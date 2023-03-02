#ifndef SCRIPTMANAGER_H
#define SCRIPTMANAGER_H

#include "qobject.h"


class ScriptManager : public QObject
{
public:
    explicit ScriptManager();

    int
    getType();

    void
    setType(int type);
private:
    int m_type;
};

#endif // SCRIPTMANAGER_H
