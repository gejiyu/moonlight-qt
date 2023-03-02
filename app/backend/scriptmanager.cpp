#include "scriptmanager.h"

ScriptManager::ScriptManager()
    :m_type(0)
{

}

void ScriptManager::setType(int type)
{
    m_type = type;
}

int ScriptManager::getType()
{
    return m_type;
}
