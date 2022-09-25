#include "qaction.h"

QAction::QAction()
{
    void addAction()
    {
        QAction* pactOpen = new QAction("file open action", 0);
        pactOpen->setText("&Открыть");
        pactOpen->setShortcut(QKeySequence("CTRL+S"));
        pactOpen->setToolTip("Открытие документа");
        pactOpen->setStatusTip("Открыть файл");
        pactOpen->setWhatsThis("Открыть файл");
        pactOpen->setIcon(QPixmap("1.png"));
        connect(pactOpen, SIGNAL(triggered()), SLOT(slotOpen()));
    }
}
