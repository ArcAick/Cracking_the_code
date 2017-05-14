#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>


class MaFenetre : public QWidget
{

    public:
        MaFenetre();

    private:
        QProgressBar *m_pgb;
        QSlider *m_slider;
        QPushButton *m_bouton;

};

#endif // MAFENETRE_H
