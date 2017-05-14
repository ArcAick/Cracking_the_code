#include "mafenetre.h"


MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(200, 150);

    m_pgb = new QProgressBar(this);
    m_pgb -> setGeometry(30,20, 170, 20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider -> setGeometry(10, 100, 150, 20);

    m_bouton = new QPushButton("Reset", this);
    m_bouton -> setCursor(Qt::PointingHandCursor);
    m_bouton -> move(60, 60);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_pgb, SLOT(setValue(int)));
    QObject::connect(m_bouton, SIGNAL(clicked()), m_pgb, SLOT(reset()));
    QObject::connect(m_bouton, SIGNAL(clicked()), m_slider, SLOT(changeValue()));
}
