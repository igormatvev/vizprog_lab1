#include "qmenu.h"
#include "qaction.h"

QMenu::QMenu()
{
    QMenu* pmnuFile = new QMenu("&Файл");
    pmnuFile->addAction(pactOpen);
    menuBar()->addMenu(pmnuFile);
}
